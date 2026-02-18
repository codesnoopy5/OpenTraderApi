#pragma once

#include "..\\..\\MsTraderApi\\MsTraderApi.h"
class COpenTrader;

class AFX_EXT_CLASS CMsOpenTraderApi : public CMsTraderApi
{
public:
    CMsOpenTraderApi(void* pTradeAccount, CWnd* pTradeSpiNotifyWnd);
    virtual ~CMsOpenTraderApi();

    // 连接
    BOOL Connect(char* lpszFrontAddr, char* lpszBrokerID, char* lpszInvestorID, char* lpszPassword, int nTradeDate = 0);
    // 登录
    int ReqUserLogin(char* lpszBrokerID, char* lpszInvestorID, char* lpszPassword);
    // 退出
    int ReqUserLogout();

	// 请求查询投资者
    int ReqQryInvestor();
    // 请求查询资金账户
    int ReqQryTradingAccount();
    // 请求查询投资者持仓
    int ReqQryInvestorPosition();
	// 请求查询报单
	int ReqQryOrder();
    // 请求查询成交
    int ReqQryTrade();

    // 报单录入请求
    int ReqOrderInsert(const char* lpszExchangeID, const char* lpszInstrument, double dPrice, int nVol, char cOrderPriceType, char cDirection, char cCombOffsetFlag, char cCombHedgeFlag, double dStopPrice = 0);
    // 报单操作请求(撤单)
    int ReqOrderAction(const char* lpszOrderSysID, const char* lpszExchangeID, const char* lpszInstrumentID);
    // 查询最大报单数量请求
    int ReqQueryMaxOrderVolume(const char* lpszInstrument, char cDirection, char cOffsetFlag, char cHedgeFlag);
    

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// 以下开放交易接口可暂不使用

	// 请求查询合约保证金率
    int ReqQryInstrumentMarginRate(const char* lpszInstrument, char cHedgeFlag){return 0;}
	// 请求查询合约手续费率
	int ReqQryInstrumentCommissionRate(const char* lpszInstrument){return 0;}

    ///查询投资者结算结果
    int ReqQrySettlementInfo(int nDate = 0){return 0;}
    // 投资者结算结果确认信息
    int ReqSettlementInfoConfirm(int nDate = 0){return 0;}
    // 请求查询结算信息确认
    int ReqQrySettlementInfoConfirm(){return 0;}

    // 预埋单录入请求
    int ReqParkedOrderInsert(const char* lpszExchangeID, const char* lpszInstrument, double dPrice, int nVol, char cOrderPriceType, char cDirection, char cCombOffsetFlag, char cCombHedgeFlag){return 0;}
    ///请求删除预埋单
    int ReqRemoveParkedOrder(const char* lpszParkedOrderID){return 0;}
    ///请求查询预埋单
    int ReqQryParkedOrder(){return 0;}

protected:
    // 释放函数
    void Release();
    // 通知易得界面层交易消息
    void SendNotifyMessage(RCV_TRADE_TYPE rcvTradeType, bool bIslast = TRUE, WPARAM wParam = NULL, LPARAM lParam = NULL);

private:
    static int  m_nOrderRef;       // 报单引用
    void*       m_pTradeAccount;
    CWnd*       m_pTradeSpiNotifyWnd;
};

