#pragma once
#include "..\stdafx.h"
#include "MsTraderApiStruct.h"


#define WM_WND_TRADE_MESSAGE    (WM_USER + 4500)

enum RCV_TRADE_TYPE
{
    TRADE_TYPE_ACCOUNT = 0,         // 账户变化
    TRADE_TYPE_ACCOUNTCURCHG,       // 当前账户改变
    TRADE_TYPE_CONNECT,             // 连接
    TRADE_TYPE_DISCONNECT,          // 断开连接
    TRADE_TYPE_LOGIN,               // 登录
    TRADE_TYPE_LOGOUT,              // 退出
    TRADE_TYPE_ACCOUNTTYPECHG,      // 当前账户类型改变
    TRADE_TYPE_AUTHERROR,           // 认证失败

    TRADE_TYPE_QRYINVESTOR,         // 请求查询投资者
    TRADE_TYPE_QRYTRADINGACCOUNT,   // 请求查询资金账户
    TRADE_TYPE_QRYSETTLEMENTINFO,   // 请求查询投资者结算结果
    TRADE_TYPE_QRYINVESTORPOSITION, // 请求查询投资者持仓
    TRADE_TYPE_QRYORDER,            // 请求查询报单
    TRADE_TYPE_QRYTRADE,            // 请求查询成交
    TRADE_TYPE_QRYQRYPARKEDORDER,   // 请求查询预埋单
    TRADE_TYPE_QRYSETTLEMENTINFOCOMFIRM,    // 请求查询结算信息确认
    TRADE_TYPE_QRYINSTRUMENTMARGINRATE,     // 请求查询合约保证金率
    TRADE_TYPE_QRYINSTRUMENTCOMMISSIONRATE, // 请求查询合约手续费率
    TRADE_TYPE_REQSETTLEMENTINFOCONFIRM,    // 投资者结算结果确认信息

    TRADE_TYPE_RSPINVESTOR,         // 请求查询投资者响应
    TRADE_TYPE_RSPTRADINGACCOUNT,   // 请求查询资金账户响应
    TRADE_TYPE_RSPSETTLEMENTINFO,   // 请求查询投资者结算结果响应
    TRADE_TYPE_RSPINVESTORPOSITION, // 请求查询投资者持仓响应
    TRADE_TYPE_RSPORDER,            // 请求查询报单响应
    TRADE_TYPE_RSPTRADE,            // 请求查询成交响应
    TRADE_TYPE_RSPQRYPARKEDORDER,   // 请求查询预埋单响应
    TRADE_TYPE_RSPMAXORDERVOLUME,   // 请求查询最大报单数量响应
    TRADE_TYPE_RSPSETTLEMENTINFOCOMFIRM, // 请求查询结算信息确认响应
    TRADE_TYPE_RSPQRYINSTRUMENTMARGINRATE,     // 请求查询合约保证金率响应
    TRADE_TYPE_RSPQRYINSTRUMENTCOMMISSIONRATE, // 请求查询合约手续费率响应
    
    TRADE_TYPE_RSPORDERINSERT,      // 报单录入请求响应
    TRADE_TYPE_ERRRTNORDERINSERT,   // 报单录入错误回报
    TRADE_TYPE_RSPORDERACTION,      // 报单操作请求响应
    TRADE_TYPE_ERRRTNORDERACTION,   // 报单操作错误回报
    TRADE_TYPE_RTNORDER,            // 报单通知
    TRADE_TYPE_RTNTRADE,            // 成交通知
    TRADE_TYPE_RSPPARKEDORDERINSERT,// 预埋单录入请求响应
    TRADE_TYPE_RSPREMOVEPARKEDORDER,// 删除预埋单响应

    TRADE_TYPE_RSPERROR,            // 错误应答    
    TRADE_TYPE_LOG,                 // 日志
    
    TRADE_TYPE_ORDERRTN_TIME,       // 报单返回时间
};

struct WND_TRADE_MESSAGE
{
    RCV_TRADE_TYPE m_rcvTradeType;
    void*          m_pTradeAccount;
    bool           m_bIsLast;
    WPARAM         m_wParam;
    LPARAM         m_lParam;
    unsigned __int64 m_uReserved;
    WND_TRADE_MESSAGE()
    {
        m_rcvTradeType = (RCV_TRADE_TYPE)-1;
        m_pTradeAccount = NULL;
        m_bIsLast = TRUE;
        m_wParam = NULL;
        m_lParam = NULL;
        m_uReserved = 0;
    }
};


enum TRADER_SYS
{
    TS_CTP = 0,
    TS_FILE,
    TS_STOCK,
};

class CMsTraderApi
{
public:
    CMsTraderApi(){}
    virtual ~CMsTraderApi(){}
    // 连接
    virtual BOOL Connect(char* lpszFrontAddr, char* lpszBrokerID, char* lpszInvestorID, char* lpszPassword, int nTradeDate = 0){return FALSE;}
    // 登录
    virtual int ReqUserLogin(char* lpszBrokerID, char* lpszInvestorID, char* lpszPassword){return 0;}
    // 退出
	virtual int ReqUserLogout(){return 0;}
    // 设置交易日期
    virtual void SetTradeDate(int nTradeDate = 0){}

    // 查询投资者结算结果
    virtual int ReqQrySettlementInfo(int nDate = 0){return 0;}
    // 投资者结算结果确认信息
    virtual int ReqSettlementInfoConfirm(int nDate = 0){return 0;}
    // 请求查询结算信息确认
    virtual int ReqQrySettlementInfoConfirm(){return 0;}
	// 请求查询投资者
    virtual int ReqQryInvestor(){return 0;}
    // 请求查询资金账户
    virtual int ReqQryTradingAccount(){return 0;}
    // 请求查询投资者持仓
    virtual int ReqQryInvestorPosition(){return 0;}
	// 请求查询报单
	virtual int ReqQryOrder(){return 0;}
	// 请求查询成交
	virtual int ReqQryTrade(){return 0;}

    // 报单录入请求
    virtual int ReqOrderInsert(const char* lpszExchangeID, const char* lpszInstrument, double dPrice, int nVol, char cOrderPriceType, char cDirection, char cCombOffsetFlag, char cCombHedgeFlag, double dStopPrice = 0){return 0;}
    // 报单操作请求
    virtual int ReqOrderAction(const char* lpszOrderSysID, const char* lpszExchangeID, const char* lpszInstrumentID){return 0;}
    
    // 查询最大报单数量请求
    virtual int ReqQueryMaxOrderVolume(const char* lpszInstrument, char cDirection, char cOffsetFlag, char cHedgeFlag){return 0;}

 	// 预埋单录入请求
	virtual int ReqParkedOrderInsert(const char* lpszExchangeID, const char* lpszInstrument, double dPrice, int nVol, char cOrderPriceType, char cDirection, char cCombOffsetFlag, char cCombHedgeFlag){return 0;}
	// 请求删除预埋单
	virtual int ReqRemoveParkedOrder(const char* lpszParkedOrderID){return 0;}
    // 请求查询预埋单
	virtual int ReqQryParkedOrder(){return 0;}
    
	// 请求查询合约保证金率
	virtual int ReqQryInstrumentMarginRate(const char* lpszInstrument, char cHedgeFlag){return 0;}
	// 请求查询合约手续费率
	virtual int ReqQryInstrumentCommissionRate(const char* lpszInstrument){return 0;}

};

