#include "stdafx.h"

#include <iostream>
using namespace std;

#include "OpenTrader.h"

#pragma warning(disable : 4996)

#define _UserProductInfo_ "MagicStk"

int COpenTrader::m_nOrderRef = 1;

COpenTrader::COpenTrader(CWnd* pNotifyWnd, void* pTradeAccount, char* pszFrontAddr, char* pszBrokerID, char* pszInvestorID, char* pszPassword)
{
    m_bAuthError = FALSE;
    m_pNotifyWnd = pNotifyWnd;
    m_pTradeAccount = pTradeAccount;
    strcpy(m_szBrokerID, pszBrokerID);
    strcpy(m_szInvestorID, pszInvestorID);
    strcpy(m_szPassword, pszPassword);
    m_nRequestID = 0;
    m_nTradingDay = 0;

    m_pTraderApi = CThostFtdcTraderApi::CreateFtdcTraderApi();  // 创建UserApi
    m_pTraderApi->RegisterSpi((CThostFtdcTraderSpi*)this);      // 注册事件类
    m_pTraderApi->SubscribePublicTopic(THOST_TERT_QUICK);       // 注册公有流
    m_pTraderApi->SubscribePrivateTopic(THOST_TERT_QUICK);      // 注册私有流
    m_pTraderApi->RegisterFront(pszFrontAddr);                  // connect
    m_pTraderApi->Init();
}

COpenTrader::~COpenTrader()
{
    if (m_pTraderApi != NULL)
        m_pTraderApi->Release();
}

const char* COpenTrader::GetAppID(const char* lpszBrokerID)
{
    const char* str = "";
    if (0 == strcmp(lpszBrokerID, "9999"))
        str = "simnow_client_test";
    else if (0 == strcmp(lpszBrokerID, "4500"))
        str = "client_AYJRZD_7.1";

    return str;
}

const char* COpenTrader::GetAuthCode(const char* lpszBrokerID)
{
    const char* str = "";
    if (0 == strcmp(lpszBrokerID, "9999"))
        str = "0000000000000000";
    else if (0 == strcmp(lpszBrokerID, "4500"))
        str = "GHQBRXKDKVA7G85I";

    return str;
}

void COpenTrader::SendNotifyMessage(RCV_TRADE_TYPE rcvTradeType, bool bIslast /*= TRUE*/, WPARAM wParam /*= NULL*/, LPARAM lParam /*= NULL*/)
{
    WND_TRADE_MESSAGE msg;
    msg.m_rcvTradeType = rcvTradeType;
    msg.m_pTradeAccount = m_pTradeAccount;
    msg.m_bIsLast = bIslast;
    msg.m_wParam = wParam;
    msg.m_lParam = lParam;
    m_pNotifyWnd->SendMessage(WM_WND_TRADE_MESSAGE, (WPARAM)&msg, NULL);
}

void COpenTrader::OnFrontConnected()
{
    if (m_bAuthError)
        return;

    TRACE0("COpenTrader::OnFrontConnected\r\n");
    SendNotifyMessage(TRADE_TYPE_CONNECT);
    
    ///客户端认证请求
    ReqAuthenticate();
}

void COpenTrader::OnFrontDisconnected(int nReason)
{
    TRACE0("COpenTrader::OnFrontDisconnected\r\n");
    SendNotifyMessage(TRADE_TYPE_DISCONNECT);
}

int COpenTrader::ReqUserLogout()
{
    TRACE0("COpenTrader::ReqUserLogout\r\n");
    CThostFtdcUserLogoutField req;
    memset(&req, 0, sizeof(req));
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.UserID, m_szInvestorID);
    int iResult = m_pTraderApi->ReqUserLogout(&req, ++m_nRequestID);
    return iResult;
}

void COpenTrader::OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspUserLogout\r\n");
    CMstRspInfoField rspInfo;
    memset(&rspInfo, 0, sizeof(CMstRspInfoField));
    if (pRspInfo != NULL)
        memcpy(&rspInfo, pRspInfo, sizeof(CThostFtdcRspInfoField));
    SendNotifyMessage(TRADE_TYPE_LOGOUT, bIsLast, NULL, (LPARAM)&rspInfo);
}

int COpenTrader::ReqAuthenticate()
{
    TRACE0("COpenTrader::ReqAuthenticate\r\n");
    CThostFtdcReqAuthenticateField field;
    memset(&field, 0, sizeof(field));
    strcpy(field.BrokerID, m_szBrokerID);
    strcpy(field.UserID, m_szInvestorID);
    strcpy(field.AppID, GetAppID(m_szBrokerID));
    strcpy(field.AuthCode, GetAuthCode(m_szBrokerID));
    int iResult = m_pTraderApi->ReqAuthenticate(&field, ++m_nRequestID);
    return iResult;
}

void COpenTrader::OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspAuthenticate\r\n");
    if (!IsErrorRspInfo(pRspInfo))
    {
        ///用户登录请求
        ReqUserLogin();
    }
    else
    {
        m_bAuthError = TRUE;
        CMstRspInfoField rspInfo;
        memset(&rspInfo, 0, sizeof(CMstRspInfoField));
        if (pRspInfo != NULL)
            memcpy(&rspInfo, pRspInfo, sizeof(CThostFtdcRspInfoField));
        SendNotifyMessage(TRADE_TYPE_AUTHERROR, bIsLast, NULL, (LPARAM)&rspInfo);
    }
}

int COpenTrader::ReqUserLogin()
{
    TRACE0("COpenTrader::ReqUserLogin\r\n");
    CThostFtdcReqUserLoginField req;
    memset(&req, 0, sizeof(req));
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.UserID, m_szInvestorID);
    strcpy(req.Password, m_szPassword);
    strcpy(req.UserProductInfo, _UserProductInfo_);
    int iResult = m_pTraderApi->ReqUserLogin(&req, ++m_nRequestID);
    return iResult;
}

void COpenTrader::OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin,
        CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspUserLogin\r\n");
    if (bIsLast && !IsErrorRspInfo(pRspInfo))
    {
        // 保存会话参数
        m_frontID = pRspUserLogin->FrontID;
        m_sessionID = pRspUserLogin->SessionID;
        m_nOrderRef = max(m_nOrderRef, atoi(pRspUserLogin->MaxOrderRef));
        ///获取当前交易日
        m_nTradingDay = atoi(m_pTraderApi->GetTradingDay());
        
        CMstRspInfoField rspInfo;
        memset(&rspInfo, 0, sizeof(CMstRspInfoField));
        if (pRspInfo != NULL)
            memcpy(&rspInfo, pRspInfo, sizeof(CThostFtdcRspInfoField));
        SendNotifyMessage(TRADE_TYPE_LOGIN, bIsLast, m_nTradingDay, (LPARAM)&rspInfo);
    }
}

int COpenTrader::ReqQryInvestor()
{
    TRACE0("COpenTrader::ReqQryInvestor\r\n");
    CThostFtdcQryInvestorField req;
    memset(&req, 0, sizeof(req));
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);
    int iResult = m_pTraderApi->ReqQryInvestor(&req, ++m_nRequestID);
    return iResult;
}

void COpenTrader::OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspQryInvestor\r\n");
    if (bIsLast && !IsErrorRspInfo(pRspInfo))
    {
        if (pInvestor != NULL)
            SendNotifyMessage(TRADE_TYPE_RSPINVESTOR, bIsLast, (WPARAM)pInvestor->InvestorName);
    }
}

int COpenTrader::ReqQryTradingAccount()
{
    TRACE0("COpenTrader::ReqQryTradingAccount\r\n");
    CThostFtdcQryTradingAccountField req;
    memset(&req, 0, sizeof(req));
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);
    int iResult = m_pTraderApi->ReqQryTradingAccount(&req, ++m_nRequestID);
    return iResult;
}

void COpenTrader::OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspQryTradingAccount\r\n");
    if (bIsLast && !IsErrorRspInfo(pRspInfo))
    {
        if (pTradingAccount != NULL)
        {
            CMstTradingAccountField tradingAccount;
            memset(&tradingAccount, 0, sizeof(CMstTradingAccountField));
            memcpy(&tradingAccount, pTradingAccount, sizeof(CThostFtdcTradingAccountField));
            SendNotifyMessage(TRADE_TYPE_RSPTRADINGACCOUNT, bIsLast, (WPARAM)&tradingAccount);
        }
    }
}

int COpenTrader::ReqQryInvestorPosition()
{
    TRACE0("COpenTrader::ReqQryInvestorPosition\r\n");
    CThostFtdcQryInvestorPositionField req;
    memset(&req, 0, sizeof(req));
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);
    int iResult = m_pTraderApi->ReqQryInvestorPosition(&req, ++m_nRequestID);
    return iResult;
}

void COpenTrader::OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspQryInvestorPosition\r\n");
    if (!IsErrorRspInfo(pRspInfo) && pInvestorPosition != NULL)
    {
        CMstInvestorPositionField investorPosition;
        memset(&investorPosition, 0, sizeof(CMstInvestorPositionField));
        memcpy(&investorPosition, pInvestorPosition, sizeof(CThostFtdcInvestorPositionField));
        SendNotifyMessage(TRADE_TYPE_RSPINVESTORPOSITION, bIsLast, (WPARAM)&investorPosition);
    }
}

int COpenTrader::ReqQryOrder() // 请求查询报单
{
    TRACE0("COpenTrader::ReqQryOrder\r\n");
    CThostFtdcQryOrderField req = {0};  
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);
    
    int iResult = m_pTraderApi->ReqQryOrder(&req, ++m_nRequestID);
    return iResult;
}

void COpenTrader::OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) // 请求查询报单响应
{
    TRACE0("COpenTrader::OnRspQryOrder\r\n");
    if (!IsErrorRspInfo(pRspInfo) && pOrder != NULL)
    {
        CMstOrderField order;
        memset(&order, 0, sizeof(CMstOrderField));
        memcpy(&order, pOrder, sizeof(CThostFtdcOrderField));
        SendNotifyMessage(TRADE_TYPE_RSPORDER, bIsLast, (WPARAM)&order);
    }
}


int COpenTrader::ReqQryTrade() // 请求查询成交
{
    TRACE0("COpenTrader::ReqQryTrade\r\n");
    CThostFtdcQryTradeField req = {0};  
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);

    int iResult = m_pTraderApi->ReqQryTrade(&req, ++m_nRequestID);
    return iResult;
}

void COpenTrader::OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) // 请求查询成交响应
{
    TRACE0("COpenTrader::OnRspQryTrade\r\n");
    if (!IsErrorRspInfo(pRspInfo) && pTrade != NULL)
    {
        CMstTradeField trade;
        memset(&trade, 0, sizeof(CMstTradeField));
        memcpy(&trade, pTrade, sizeof(CThostFtdcTradeField));
        SendNotifyMessage(TRADE_TYPE_RSPTRADE, bIsLast, (WPARAM)&trade);
    }
}

// 查询最大报单数量请求
int COpenTrader::ReqQueryMaxOrderVolume(const char* lpszInstrument, char cDirection, char cOffsetFlag, char cHedgeFlag)
{
    TRACE0("COpenTrader::ReqQueryMaxOrderVolume\r\n");
    CThostFtdcQueryMaxOrderVolumeField req = {0};  
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);
    strcpy(req.InstrumentID, lpszInstrument);
    req.Direction = cDirection;   // 买卖方向
    req.OffsetFlag = cOffsetFlag; // 组合开平标志
    req.HedgeFlag = cHedgeFlag;   // 组合投机套保标志

    int iResult = m_pTraderApi->ReqQueryMaxOrderVolume(&req, ++m_nRequestID);
    return iResult;
}

// 查询最大报单数量响应
void COpenTrader::OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspQueryMaxOrderVolume\r\n");
    if (!IsErrorRspInfo(pRspInfo) && pQueryMaxOrderVolume != NULL)
    {
        CMstQueryMaxOrderVolumeField queryMaxOrderVolumeField;
        memset(&queryMaxOrderVolumeField, 0, sizeof(CMstQueryMaxOrderVolumeField));
        memcpy(&queryMaxOrderVolumeField, pQueryMaxOrderVolume, sizeof(CThostFtdcQueryMaxOrderVolumeField));
        SendNotifyMessage(TRADE_TYPE_RSPMAXORDERVOLUME, bIsLast, (WPARAM)&queryMaxOrderVolumeField);
    }
}

// 预埋单录入请求
int COpenTrader::ReqParkedOrderInsert(const char* lpszExchangeID, const char* lpszInstrument, double dPrice, int nVol, char cOrderPriceType, char cDirection, char cCombOffsetFlag, char cCombHedgeFlag)
{
    TRACE0("COpenTrader::ReqParkedOrderInsert\r\n");
    CThostFtdcParkedOrderField req;
    memset(&req, 0, sizeof(req));
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);
    strcpy(req.InstrumentID, lpszInstrument);
    strcpy(req.ExchangeID, lpszExchangeID);
    sprintf(req.OrderRef, "%d", ++m_nOrderRef);

    req.OrderPriceType = cOrderPriceType;    // 报单价格条件
    req.Direction = cDirection;              // 买卖方向
    req.CombOffsetFlag[0] = cCombOffsetFlag; // 组合开平标志
    req.CombHedgeFlag[0] = cCombHedgeFlag;   // 组合投机套保标志
    req.LimitPrice = dPrice;
    req.VolumeTotalOriginal = nVol;

    req.TimeCondition = THOST_FTDC_TC_GFD;  // 当日有效
    req.VolumeCondition = THOST_FTDC_VC_AV; // 任何数量
    req.MinVolume = 1;                      // 最小成交量
    req.ContingentCondition = THOST_FTDC_CC_Immediately; // 触发条件
    req.ForceCloseReason = THOST_FTDC_FCC_NotForceClose; // 非强平

    int iResult = m_pTraderApi->ReqParkedOrderInsert(&req, ++m_nRequestID);
    return iResult == 0 ? m_nOrderRef : 0;
}

// 预埋单录入请求响应
void COpenTrader::OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspParkedOrderInsert\r\n");
    if (pParkedOrder != NULL)
    {
        CMstRspInfoField rspInfo;
        memset(&rspInfo, 0, sizeof(CMstRspInfoField));
        if (pRspInfo != NULL)
            memcpy(&rspInfo, pRspInfo, sizeof(CThostFtdcRspInfoField));
        CMstParkedOrderField parkedOrder;
        memset(&parkedOrder, 0, sizeof(CMstParkedOrderField));
        memcpy(&parkedOrder, pParkedOrder, sizeof(CThostFtdcParkedOrderField));
        SendNotifyMessage(TRADE_TYPE_RSPPARKEDORDERINSERT, bIsLast, (WPARAM)&parkedOrder, (LPARAM)&rspInfo);
    }
}

///请求删除预埋单
int COpenTrader::ReqRemoveParkedOrder(const char* lpszParkedOrderID)
{
    TRACE0("COpenTrader::ReqRemoveParkedOrder\r\n");
    CThostFtdcRemoveParkedOrderField req;
    memset(&req, 0, sizeof(req));
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);
    strcpy(req.ParkedOrderID, lpszParkedOrderID);

    int iResult = m_pTraderApi->ReqRemoveParkedOrder(&req, ++m_nRequestID);
    return iResult;
}

// 删除预埋单响应
void COpenTrader::OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspRemoveParkedOrder\r\n");
    if (pRemoveParkedOrder != NULL)
    {
        CMstRspInfoField rspInfo;
        memset(&rspInfo, 0, sizeof(CMstRspInfoField));
        if (pRspInfo != NULL)
            memcpy(&rspInfo, pRspInfo, sizeof(CThostFtdcRspInfoField));
        CMstRemoveParkedOrderField removeParkedOrder;
        memset(&removeParkedOrder, 0, sizeof(CMstRemoveParkedOrderField));
        memcpy(&removeParkedOrder, pRemoveParkedOrder, sizeof(CThostFtdcRemoveParkedOrderField));
        SendNotifyMessage(TRADE_TYPE_RSPREMOVEPARKEDORDER, bIsLast, (WPARAM)&removeParkedOrder, (LPARAM)&rspInfo);
    }
}

// 请求查询预埋单
int COpenTrader::ReqQryParkedOrder()
{
    TRACE0("COpenTrader::ReqQryParkedOrder\r\n");
    CThostFtdcQryParkedOrderField req = {0};  
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);

    int iResult = m_pTraderApi->ReqQryParkedOrder(&req, ++m_nRequestID);
    return iResult;
}

// 请求查询预埋单响应
void COpenTrader::OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspQryParkedOrder\r\n");
    if (!IsErrorRspInfo(pRspInfo) && pParkedOrder != NULL)
    {
        CMstRspInfoField rspInfo;
        memset(&rspInfo, 0, sizeof(CMstRspInfoField));
        if (pRspInfo != NULL)
            memcpy(&rspInfo, pRspInfo, sizeof(CThostFtdcRspInfoField));
        CMstParkedOrderField parkedOrder;
        memset(&parkedOrder, 0, sizeof(CMstParkedOrderField));
        memcpy(&parkedOrder, pParkedOrder, sizeof(CThostFtdcParkedOrderField));
        SendNotifyMessage(TRADE_TYPE_RSPQRYPARKEDORDER , bIsLast, (WPARAM)&parkedOrder, (LPARAM)&rspInfo);
    }
}

int COpenTrader::ReqQrySettlementInfoConfirm()
{
    TRACE0("COpenTrader::ReqQrySettlementInfoConfirm\r\n");
    CThostFtdcQrySettlementInfoConfirmField req = {0};  
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);
    int iResult = m_pTraderApi->ReqQrySettlementInfoConfirm(&req, ++m_nRequestID);  
    return iResult;
}

void COpenTrader::OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspQrySettlementInfoConfirm\r\n");
    if (bIsLast)
    {
        int nConfirmDate = 0;
        if (!IsErrorRspInfo(pRspInfo) && pSettlementInfoConfirm != NULL)
            nConfirmDate = atoi(pSettlementInfoConfirm->ConfirmDate);
        
        SendNotifyMessage(TRADE_TYPE_RSPSETTLEMENTINFOCOMFIRM, bIsLast, (WPARAM)nConfirmDate);
    }
}

int COpenTrader::ReqQrySettlementInfo(int nDate /*= 0*/)
{
    TRACE0("COpenTrader::ReqQrySettlementInfo\r\n");
    CThostFtdcQrySettlementInfoField req = {0};  
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);
    if (nDate != 0) // m_nTradingDay
        sprintf(req.TradingDay, "%d", nDate); //不填日期，表示取上一交易日结算单  
    int iResult = m_pTraderApi->ReqQrySettlementInfo(&req, ++m_nRequestID);  
    return iResult;
}

void COpenTrader::OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspQrySettlementInfo\r\n");
    BOOL bFinished = TRUE;
    if (!IsErrorRspInfo(pRspInfo) && pSettlementInfo != NULL)
    {
        CMstSettlementInfoField settlementInfoField;
        memset(&settlementInfoField, 0, sizeof(CMstSettlementInfoField));
        memcpy(&settlementInfoField, pSettlementInfo, sizeof(CThostFtdcSettlementInfoField));
        SendNotifyMessage(TRADE_TYPE_RSPSETTLEMENTINFO, bIsLast, (WPARAM)&settlementInfoField);
    }
}

int COpenTrader::ReqSettlementInfoConfirm(int nDate /*= 0*/)
{
    TRACE0("COpenTrader::ReqSettlementInfoConfirm\r\n");
    CThostFtdcSettlementInfoConfirmField req = {0};  
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);
    if (nDate == 0)
        nDate = m_nTradingDay;
    sprintf(req.ConfirmDate, "%d", nDate);
    sprintf(req.ConfirmTime, "%d", 0);
    int iResult = m_pTraderApi->ReqSettlementInfoConfirm(&req, ++m_nRequestID);  
    return iResult;
}

void COpenTrader::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspSettlementInfoConfirm\r\n");
}
////////////////////////////////////////////////////////////////////////////////////////

void COpenTrader::ReqQryExchange()
{
    CThostFtdcQryExchangeField req;
    memset(&req, 0, sizeof(CThostFtdcQryExchangeField));
    m_pTraderApi->ReqQryExchange(&req, ++m_nRequestID);
}

///请求查询交易所响应
void COpenTrader::OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    cerr << "OnRspSubMarketData" << endl;
    if (IsErrorRspInfo(pRspInfo))
        return;

    if (bIsLast)
    {
        ///请求查询合约
        ReqQryInstrument();
    }
}

int COpenTrader::ReqQryInstrument()
{
    CThostFtdcQryInstrumentField req;
    memset(&req, 0, sizeof(req));
    int iResult = m_pTraderApi->ReqQryInstrument(&req, ++m_nRequestID);
    cerr << "--->>> 请求查询合约: " << ((iResult == 0) ? "成功" : "失败") << endl;
    return iResult;
}

void COpenTrader::OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    cerr << "--->>> " << "OnRspQryInstrument" << endl;
    if (IsErrorRspInfo(pRspInfo))
        return;


    if (bIsLast)
    {
    }
}

void COpenTrader::ReqQryDepthMarketData()
{
    CThostFtdcQryDepthMarketDataField req;
    memset(&req, 0, sizeof(req));
    strcpy(req.InstrumentID, "IF1307");
    int iResult = m_pTraderApi->ReqQryDepthMarketData(&req, ++m_nRequestID);
    cerr << "--->>> 请求查询行情: " << ((iResult == 0) ? "成功" : "失败") << endl;
}

void COpenTrader::OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    cerr << "--->>> " << "OnRspQryDepthMarketData" << endl;
    if (bIsLast && !IsErrorRspInfo(pRspInfo))
    {
        //exit(0);
    }
}

///报单录入请求
int COpenTrader::ReqOrderInsert(const char* lpszExchangeID, const char* lpszInstrument, double dPrice, int nVol, char cOrderPriceType, char cDirection, char cCombOffsetFlag, char cCombHedgeFlag, double dStopPrice /*= 0*/)
{
    TRACE0("COpenTrader::ReqOrderInsert\r\n");
    CThostFtdcInputOrderField req;
    memset(&req, 0, sizeof(req));
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);
    strcpy(req.InstrumentID, lpszInstrument);
    strcpy(req.ExchangeID, lpszExchangeID);
    sprintf(req.OrderRef, "%d", ++m_nOrderRef);
    
    req.OrderPriceType = cOrderPriceType;    // 报单价格条件
    req.Direction = cDirection;              // 买卖方向
    req.CombOffsetFlag[0] = cCombOffsetFlag; // 组合开平标志
    req.CombHedgeFlag[0] = cCombHedgeFlag;   // 组合投机套保标志
    req.LimitPrice = dPrice;
    req.VolumeTotalOriginal = nVol;

    req.TimeCondition = THOST_FTDC_TC_GFD;  // 当日有效
    req.VolumeCondition = THOST_FTDC_VC_AV; // 任何数量
    req.MinVolume = 1;                      // 最小成交量
    req.ContingentCondition = THOST_FTDC_CC_Immediately; // 触发条件
    req.StopPrice = dStopPrice;
    req.ForceCloseReason = THOST_FTDC_FCC_NotForceClose; // 非强平

    int iResult = m_pTraderApi->ReqOrderInsert(&req, ++m_nRequestID);
    return iResult == 0 ? m_nOrderRef : 0;
}

///报单录入请求响应 Open段返回
void COpenTrader::OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspOrderInsert\r\n");
    if (pInputOrder != NULL)
    {
        CMstRspInfoField rspInfo;
        memset(&rspInfo, 0, sizeof(CMstRspInfoField));
        if (pRspInfo != NULL)
            memcpy(&rspInfo, pRspInfo, sizeof(CThostFtdcRspInfoField));
        CMstInputOrderField inputOrderField;
        memset(&inputOrderField, 0, sizeof(CMstInputOrderField));
        memcpy(&inputOrderField, pInputOrder, sizeof(CThostFtdcInputOrderField));
        SendNotifyMessage(TRADE_TYPE_RSPORDERINSERT, bIsLast, (WPARAM)&inputOrderField, (LPARAM)&rspInfo);
    }
}

///报单录入错误回报 Open段返回
void COpenTrader::OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo)
{
    TRACE0("COpenTrader::OnErrRtnOrderInsert\r\n");
    if (pInputOrder != NULL)
    {
        CMstRspInfoField rspInfo;
        memset(&rspInfo, 0, sizeof(CMstRspInfoField));
        if (pRspInfo != NULL)
            memcpy(&rspInfo, pRspInfo, sizeof(CThostFtdcRspInfoField));
        CMstInputOrderField inputOrderField;
        memset(&inputOrderField, 0, sizeof(CMstInputOrderField));
        memcpy(&inputOrderField, pInputOrder, sizeof(CThostFtdcInputOrderField));
        SendNotifyMessage(TRADE_TYPE_ERRRTNORDERINSERT, TRUE, (WPARAM)&inputOrderField, (LPARAM)&rspInfo);
    }
}

int COpenTrader::ReqOrderAction(const char* lpszOrderSysID, const char* lpszExchangeID, const char* lpszInstrumentID)
{
    TRACE0("COpenTrader::ReqOrderAction\r\n");
    CThostFtdcInputOrderActionField req;
    memset(&req, 0, sizeof(req));
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);
    sprintf(req.OrderRef, "%d", ++m_nOrderRef);
    strcpy(req.OrderSysID, lpszOrderSysID);
    req.FrontID = m_frontID;
    req.SessionID = m_sessionID;
    req.ActionFlag = THOST_FTDC_AF_Delete;
    strcpy(req.ExchangeID, lpszExchangeID);
    strcpy(req.InstrumentID, lpszInstrumentID);

    int iResult = m_pTraderApi->ReqOrderAction(&req, ++m_nRequestID);
    return iResult == 0 ? m_nOrderRef : 0;
}

///报单操作请求响应
void COpenTrader::OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspOrderAction\r\n");
    if (pInputOrderAction != NULL)
    {
        CMstRspInfoField rspInfo;
        memset(&rspInfo, 0, sizeof(CMstRspInfoField));
        if (pRspInfo != NULL)
            memcpy(&rspInfo, pRspInfo, sizeof(CThostFtdcRspInfoField));
        CMstInputOrderActionField inputOrderActionField;
        memset(&inputOrderActionField, 0, sizeof(CMstInputOrderActionField));
        memcpy(&inputOrderActionField, pInputOrderAction, sizeof(CThostFtdcInputOrderActionField));
        SendNotifyMessage(TRADE_TYPE_RSPORDERACTION, bIsLast, (WPARAM)&inputOrderActionField, (LPARAM)&rspInfo);
    }
}

///报单操作错误回报
void COpenTrader::OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo)
{
    TRACE0("COpenTrader::OnErrRtnOrderAction\r\n");
    if (pOrderAction != NULL)
    {
        CMstRspInfoField rspInfo;
        memset(&rspInfo, 0, sizeof(CMstRspInfoField));
        if (pRspInfo != NULL)
            memcpy(&rspInfo, pRspInfo, sizeof(CThostFtdcRspInfoField));
        CMstOrderActionField orderActionField;
        memset(&orderActionField, 0, sizeof(CMstOrderActionField));
        memcpy(&orderActionField, pOrderAction, sizeof(CThostFtdcOrderActionField));
        SendNotifyMessage(TRADE_TYPE_ERRRTNORDERACTION, TRUE, (WPARAM)&orderActionField, (LPARAM)&rspInfo);
    }
}

///报单通知 交易系统返回的报单状态，每次报单状态发生变化时被调用。一次报单过程中会被调用数次
void COpenTrader::OnRtnOrder(CThostFtdcOrderField *pOrder)
{
    TRACE0("COpenTrader::OnRtnOrder\r\n");
    if (pOrder != NULL)
    {
        CMstOrderField orderField;
        memset(&orderField, 0, sizeof(CMstOrderField));
        memcpy(&orderField, pOrder, sizeof(CThostFtdcOrderField));
        SendNotifyMessage(TRADE_TYPE_RTNORDER, TRUE, (WPARAM)&orderField);
    }
}

///成交通知 如果该报单由交易所进行了撮合成交，交易所再次返回该报单的状态（已成交）
void COpenTrader::OnRtnTrade(CThostFtdcTradeField *pTrade)
{
    TRACE0("COpenTrader::OnRtnTrade\r\n");
    if (pTrade != NULL)
    {
        CMstTradeField tradeField;
        memset(&tradeField, 0, sizeof(CMstTradeField));
        memcpy(&tradeField, pTrade, sizeof(CThostFtdcTradeField));
        SendNotifyMessage(TRADE_TYPE_RTNTRADE, TRUE, (WPARAM)&tradeField);
    }
}

///错误应答
void COpenTrader::OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspError\r\n");
    CMstRspInfoField rspInfo;
    memset(&rspInfo, 0, sizeof(CMstRspInfoField));
    if (pRspInfo != NULL)
        memcpy(&rspInfo, pRspInfo, sizeof(CThostFtdcRspInfoField));
    SendNotifyMessage(TRADE_TYPE_RSPERROR, TRUE, (WPARAM)NULL, (LPARAM)&rspInfo);
}

bool COpenTrader::IsErrorRspInfo(CThostFtdcRspInfoField *pRspInfo)
{
    // 如果ErrorID != 0, 说明收到了错误的响应
    bool bResult = ((pRspInfo) && (pRspInfo->ErrorID != 0));
    if (bResult)
        cerr << "--->>> ErrorID=" << pRspInfo->ErrorID << ", ErrorMsg=" << pRspInfo->ErrorMsg << endl;
    return bResult;
}

bool COpenTrader::IsMyOrder(CThostFtdcOrderField *pOrder)
{
    return ((pOrder->FrontID == m_frontID) &&
            (pOrder->SessionID == m_sessionID));// &&
            //(atoi(pOrder->OrderRef) == m_nOrderRef));
}

bool COpenTrader::IsTradingOrder(CThostFtdcOrderField *pOrder)
{
    return ((pOrder->OrderStatus != THOST_FTDC_OST_PartTradedNotQueueing) &&
            (pOrder->OrderStatus != THOST_FTDC_OST_Canceled) &&
            (pOrder->OrderStatus != THOST_FTDC_OST_AllTraded));
}
        
void COpenTrader::OnHeartBeatWarning(int nTimeLapse)
{
    cerr << "--->>> " << "OnHeartBeatWarning" << endl;
    cerr << "--->>> nTimerLapse = " << nTimeLapse << endl;
}

///请求查询合约保证金率
int COpenTrader::ReqQryInstrumentMarginRate(const char* lpszInstrument, char cHedgeFlag)
{
    CThostFtdcQryInstrumentMarginRateField req = {0};  
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);
    if (lpszInstrument != NULL)
        strcpy(req.InstrumentID, lpszInstrument);
    req.HedgeFlag = cHedgeFlag;
    
    int iResult = m_pTraderApi->ReqQryInstrumentMarginRate(&req, ++m_nRequestID);  
    return iResult;
}

///请求查询合约保证金率响应
void COpenTrader::OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspQryInstrumentMarginRate\r\n");
    if (pInstrumentMarginRate != NULL)
    {
        CMstRspInfoField rspInfo;
        memset(&rspInfo, 0, sizeof(CMstRspInfoField));
        if (pRspInfo != NULL)
            memcpy(&rspInfo, pRspInfo, sizeof(CThostFtdcRspInfoField));
        CMstInstrumentMarginRateField instrumentMarginRateField;
        memset(&instrumentMarginRateField, 0, sizeof(CMstInstrumentMarginRateField));
        memcpy(&instrumentMarginRateField, pInstrumentMarginRate, sizeof(CThostFtdcInstrumentMarginRateField));
        SendNotifyMessage(TRADE_TYPE_RSPQRYINSTRUMENTMARGINRATE, bIsLast, (WPARAM)&instrumentMarginRateField, (LPARAM)&rspInfo);
    }
}

///请求查询合约手续费率
int COpenTrader::ReqQryInstrumentCommissionRate(const char* lpszInstrument)
{
    CThostFtdcQryInstrumentCommissionRateField req = {0};  
    strcpy(req.BrokerID, m_szBrokerID);
    strcpy(req.InvestorID, m_szInvestorID);
    if (lpszInstrument != NULL)
        strcpy(req.InstrumentID, lpszInstrument);
    
    int iResult = m_pTraderApi->ReqQryInstrumentCommissionRate(&req, ++m_nRequestID);  
    return iResult;
}

///请求查询合约手续费率响应
void COpenTrader::OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
    TRACE0("COpenTrader::OnRspQryInstrumentCommissionRate\r\n");
    if (pInstrumentCommissionRate != NULL)
    {
        CMstRspInfoField rspInfo;
        memset(&rspInfo, 0, sizeof(CMstRspInfoField));
        if (pRspInfo != NULL)
            memcpy(&rspInfo, pRspInfo, sizeof(CThostFtdcRspInfoField));
        CMstInstrumentCommissionRateField instrumentCommissionRateField;
        memset(&instrumentCommissionRateField, 0, sizeof(CMstInstrumentCommissionRateField));
        memcpy(&instrumentCommissionRateField, pInstrumentCommissionRate, sizeof(CThostFtdcInstrumentCommissionRateField));
        SendNotifyMessage(TRADE_TYPE_RSPQRYINSTRUMENTCOMMISSIONRATE, bIsLast, (WPARAM)&instrumentCommissionRateField, (LPARAM)&rspInfo);
    }
}

