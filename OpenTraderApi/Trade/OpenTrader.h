#pragma once
#include "..\\..\\MsTraderApi\\MsTraderApi.h"

#include <map>
using namespace std;
#pragma warning(disable : 4996)

class COpenTrader
{
private:
    char                     m_szFontAddr[128]; // 前置地址
    char                     m_szPassword[32];      // 用户密码

    static int               m_nOrderRef;       // 报单引用
    
    int  m_nTradingDay;
    int  m_nRequestID;

    CWnd* m_pNotifyWnd;
    void* m_pTradeAccount;

    void SendNotifyMessage(RCV_TRADE_TYPE rcvTradeType, bool bIslast = TRUE, WPARAM wParam = NULL, LPARAM lParam = NULL);

public:
    COpenTrader(CWnd* pNotifyWnd, void* pTradeAccount, char* pszFrontAddr, char* pszBrokerID, char* pszInvestorID, char* pszPassword);
    ~COpenTrader();

    ///用户登录请求
    int ReqUserLogin();
	int ReqUserLogout();

    ///客户端认证请求
    int ReqAuthenticate();

    ///查询结算信息确认域
    int ReqQrySettlementInfoConfirm();
    ///查询投资者结算结果
    int ReqQrySettlementInfo(int nDate = 0);
    ///投资者结算结果确认信息
    int ReqSettlementInfoConfirm(int nDate = 0);

	///请求查询投资者
    int ReqQryInvestor();
    ///请求查询资金账户
    int ReqQryTradingAccount();
    ///请求查询投资者持仓
    int ReqQryInvestorPosition();
	///请求查询报单
	int ReqQryOrder();
	///请求查询成交
	int ReqQryTrade();

    ///报单录入请求
    int ReqOrderInsert(const char* lpszExchangeID, const char* lpszInstrument, double dPrice, int nVol, char cOrderPriceType, char cDirection, char cCombOffsetFlag, char cCombHedgeFlag, double dStopPrice = 0);
    ///报单操作请求
    int ReqOrderAction(const char* lpszOrderSysID, const char* lpszExchangeID, const char* lpszInstrumentID);
	///查询最大报单数量请求
	int ReqQueryMaxOrderVolume(const char* lpszInstrument, char cDirection, char cOffsetFlag, char cHedgeFlag);
 	///预埋单录入请求
	int ReqParkedOrderInsert(const char* lpszExchangeID, const char* lpszInstrument, double dPrice, int nVol, char cOrderPriceType, char cDirection, char cCombOffsetFlag, char cCombHedgeFlag);
   	///请求删除预埋单
	int ReqRemoveParkedOrder(const char* lpszParkedOrderID);
    ///请求查询预埋单
	int ReqQryParkedOrder();
	///请求查询合约保证金率
	int ReqQryInstrumentMarginRate(const char* lpszInstrument, char cHedgeFlag);
	///请求查询合约手续费率
	int ReqQryInstrumentCommissionRate(const char* lpszInstrument);

    ///请求查询合约
    int ReqQryInstrument();


private:
    const char* GetAppID(const char* lpszBrokerID);
    const char* GetAuthCode(const char* lpszBrokerID);

    ///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
    void OnFrontConnected();

    ///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
    void OnFrontDisconnected(int nReason);

    ///客户端认证响应
    void OnRspAuthenticate(CThostFtdcRspAuthenticateField *pRspAuthenticateField, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///登录请求响应
    void OnRspUserLogin(CThostFtdcRspUserLoginField *pRspUserLogin, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///登出请求响应
    void OnRspUserLogout(CThostFtdcUserLogoutField *pUserLogout, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///查询结算信息确认域响应
	void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///查询投资者结算结果响应
	void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField *pSettlementInfo, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///投资者结算结果确认响应
    void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField *pSettlementInfoConfirm, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询投资者响应
	void OnRspQryInvestor(CThostFtdcInvestorField *pInvestor, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///请求查询资金账户响应
    void OnRspQryTradingAccount(CThostFtdcTradingAccountField *pTradingAccount, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///请求查询投资者持仓响应
    void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField *pInvestorPosition, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询报单响应
	void OnRspQryOrder(CThostFtdcOrderField *pOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询成交响应
	void OnRspQryTrade(CThostFtdcTradeField *pTrade, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);



    ///报单录入请求响应
    void OnRspOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///报单操作请求响应
    void OnRspOrderAction(CThostFtdcInputOrderActionField *pInputOrderAction, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///报单通知
    void OnRtnOrder(CThostFtdcOrderField *pOrder);

    ///成交通知
    void OnRtnTrade(CThostFtdcTradeField *pTrade);

	///报单录入错误回报
	void OnErrRtnOrderInsert(CThostFtdcInputOrderField *pInputOrder, CThostFtdcRspInfoField *pRspInfo);

	///报单操作错误回报
	void OnErrRtnOrderAction(CThostFtdcOrderActionField *pOrderAction, CThostFtdcRspInfoField *pRspInfo);

	///查询最大报单数量响应
	void OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField *pQueryMaxOrderVolume, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///预埋单录入请求响应
    void OnRspParkedOrderInsert(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///删除预埋单响应
    void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField *pRemoveParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///请求查询预埋单响应
	void OnRspQryParkedOrder(CThostFtdcParkedOrderField *pParkedOrder, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///错误应答
    void OnRspError(CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
    
    ///心跳超时警告。当长时间未收到报文时，该方法被调用。
    void OnHeartBeatWarning(int nTimeLapse);

	///请求查询合约保证金率响应
	void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField *pInstrumentMarginRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///请求查询合约手续费率响应
	void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    

    ///请求查询合约响应
    void OnRspQryInstrument(CThostFtdcInstrumentField *pInstrument, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    ///请求查询交易所响应
    void OnRspQryExchange(CThostFtdcExchangeField *pExchange, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
        ///请求查询行情响应
    void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField *pDepthMarketData, CThostFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

    void RepairMissInstrument();

private:
    // 是否收到成功的响应
    bool IsErrorRspInfo(CThostFtdcRspInfoField *pRspInfo);
    // 是否我的报单回报
    bool IsMyOrder(CThostFtdcOrderField *pOrder);
    // 是否正在交易的报单
    bool IsTradingOrder(CThostFtdcOrderField *pOrder);

    void ReqQryExchange();
    void ReqQryDepthMarketData();

};
