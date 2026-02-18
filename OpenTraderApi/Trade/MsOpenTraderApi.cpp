#include "..\StdAfx.h"
#include "MsOpenTraderApi.h"
#include "..\http_client.hpp"
#include <iostream>
#include <cstring> // 必须包含头文件
#include <string>
int CMsOpenTraderApi::m_nOrderRef = 1;


HttpClient client;
//////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// 开发者请根据自己的应用改写以下交易接口函数

std::string extractStockCode(std::string stockStr) {
    size_t dotPos = stockStr.find('.');
    if (dotPos != std::string::npos) {
        stockStr.erase(dotPos); // 删除 "." 及其之后的部分
    }
    return stockStr;
}

bool isEqual(const char* str1, const char* str2) {
    return strcmp(str1, str2) == 0;  // strcmp 返回 0 表示相等
}

// 连接
BOOL CMsOpenTraderApi::Connect(char* lpszFrontAddr, char* lpszBrokerID, char* lpszInvestorID, char* lpszPassword, int nTradeDate /*= 0*/)
{
    // 接口开发者可自行在此做些接口连接工作

    SendNotifyMessage(TRADE_TYPE_CONNECT);  // 返回连接成功通知易得, 必须
    ReqUserLogin(lpszBrokerID, lpszInvestorID, lpszPassword);   // 连接成功后马上发起登录请求, 必须

    return TRUE;
}

// 登录
int CMsOpenTraderApi::ReqUserLogin(char* lpszBrokerID, char* lpszInvestorID, char* lpszPassword)
{
    // 接口开发者可自行在此做些接口登录工作

    SendNotifyMessage(TRADE_TYPE_LOGIN);    // 返回登录成功通知易得, 必须

    return 0;
}

// 退出
int CMsOpenTraderApi::ReqUserLogout()
{
    // 接口开发者可自行在此做些接口退出工作

    SendNotifyMessage(TRADE_TYPE_LOGOUT);    // 返回退出成功通知易得, 必须

    return 0;
}

// 请求查询投资者
int CMsOpenTraderApi::ReqQryInvestor()
{
    // 此处可返回投资者信息名称，可自行修改。

    //std::string getResponse = client.get("http://localhost:8000/account/info");
    //Json::Value jsonData = HttpClient::parseJson(getResponse);
    SendNotifyMessage(TRADE_TYPE_RSPINVESTOR, TRUE, (WPARAM)"00733497");    // 返回账户名称

    return 0;
}

// 请求查询资金账户
int CMsOpenTraderApi::ReqQryTradingAccount()
{
    // 可自行修改资金账户，并返回通知到易得。

  

    WriteBlackCon("开放交易接口收到请求查询资金账户，请自行修改资金账户数据！\r\n"); // 此行可删除
    
    std::string getResponse = client.get("http://localhost:8000/account/info");
    Json::Value getJson = HttpClient::parseJson(getResponse);
    Json::Value jsonData = getJson["data"];

    CMstTradingAccountField ta;
    memset(&ta, 0, sizeof(CMstTradingAccountField));

    strncpy_s(ta.AccountID, jsonData["account_id"].asCString(), _TRUNCATE); // 投资者帐号
    ta.Available = jsonData["cash"].asDouble();     // 可用资金
    ta.WithdrawQuota = jsonData["total_asset"].asDouble() - jsonData["market_value"].asDouble() - jsonData["frozen_cash"].asDouble(); // 可取资金
    ta.FrozenCash = jsonData["frozen_cash"].asDouble();          // 冻结的资金
 
     // 以下字段为次要信息，可返回0，或仅期货类有用
    ta.PreDeposit = 0;          // 上次存款额
    ta.PreMargin = 0;           // 上次占用的保证金
    ta.CloseProfit = 0;         // 平仓盈亏
    ta.CurrMargin = 0;          // 占用保证金
    ta.Commission = 0;          // 手续费
    ta.Deposit = 0;             // 今日入金
    ta.Withdraw = 0;            // 今日出金

    SendNotifyMessage(TRADE_TYPE_RSPTRADINGACCOUNT, TRUE, (WPARAM)&ta);

    return 0;
}

// 请求查询投资者持仓
int CMsOpenTraderApi::ReqQryInvestorPosition()
{
    // 可自行修改投资者持仓，并返回通知到易得。

    WriteBlackCon("开放交易接口收到请求查询投资者持仓，请自行修改资金账户数据！\r\n"); // 此行可删除

    {
        CMstInvestorPositionField pos;
        memset(&pos, 0, sizeof(CMstInvestorPositionField));
        strncpy_s(pos.InvestorID, "", _TRUNCATE);
        strncpy_s(pos.InstrumentID, "SH.600000", _TRUNCATE);
        pos.Position = 500;      // 总持仓
        pos.YdPosition = 200;    // 上日持仓
        pos.TodayPosition = pos.Position - pos.YdPosition;  // 今日持仓
        pos.PositionCost = 8.26 * pos.Position;
        pos.OpenCost = pos.PositionCost;
        pos.PosiDirection = MST_PD_Long;
        SendNotifyMessage(TRADE_TYPE_RSPINVESTORPOSITION, FALSE, (WPARAM)&pos);  // 只能一条一条通知，最后一条的bIsLast参数必须为TRUE
    }
    {
        CMstInvestorPositionField pos;
        memset(&pos, 0, sizeof(CMstInvestorPositionField));
        strncpy_s(pos.InvestorID, "", _TRUNCATE);
        strncpy_s(pos.InstrumentID, "SZ.000001", _TRUNCATE);
        pos.Position = 800;      // 总持仓
        pos.YdPosition = 300;    // 上日持仓
        pos.TodayPosition = pos.Position - pos.YdPosition;  // 今日持仓
        pos.PositionCost = 9.16 * pos.Position;
        pos.OpenCost = pos.PositionCost;
        pos.PosiDirection = MST_PD_Long;
        SendNotifyMessage(TRADE_TYPE_RSPINVESTORPOSITION, TRUE, (WPARAM)&pos);  // 只能一条一条通知，最后一条的bIsLast参数必须为TRUE
    }

    return 0;
}

// 请求查询报单
int CMsOpenTraderApi::ReqQryOrder()
{
    // 可自行修改查询报单，并返回通知到易得。

    WriteBlackCon("开放交易接口收到请求查询报单，请自行修改！\r\n"); // 此行可删除

    {
        CMstOrderField order;
        memset(&order, 0, sizeof(CMstOrderField));
        strncpy_s(order.InsertDate, "20250205", _TRUNCATE); // 报单日期
        strncpy_s(order.InsertTime, "110835", _TRUNCATE);   // 委托时间
        strncpy_s(order.InvestorID, "", _TRUNCATE);
        strncpy_s(order.InstrumentID, "SH.600016", _TRUNCATE);
        order.OrderPriceType = MST_OPT_LimitPrice;          // 限价
        order.Direction = MST_D_Buy;                        // MST_D_Buy 买入；MST_D_Sell 卖出
        order.OrderStatus = MST_OST_AllTraded;              // 全部成交
        order.VolumeTotalOriginal = 200;                    // 报单数量
        order.LimitPrice = 20.0;                            // 报单价格
        order.VolumeTraded = 200;                           // 成交数量
        strncpy_s(order.OrderSysID, "100", _TRUNCATE);      // 报单号(必须唯一不可重复)
        strncpy_s(order.OrderRef, order.OrderSysID, _TRUNCATE);
        order.RequestID = 100;                              // 请求号
        SendNotifyMessage(TRADE_TYPE_RSPORDER, FALSE, (WPARAM)&order); // 只能一条一条通知，最后一条的bIsLast参数必须为TRUE
    }
    {
        CMstOrderField order;
        memset(&order, 0, sizeof(CMstOrderField));
        strncpy_s(order.InsertDate, "20250405", _TRUNCATE); // 报单日期
        strncpy_s(order.InsertTime, "140835", _TRUNCATE);   // 委托时间
        strncpy_s(order.InvestorID, "", _TRUNCATE);
        strncpy_s(order.InstrumentID, "SH.600036", _TRUNCATE);
        order.OrderPriceType = MST_OPT_LimitPrice;          // 限价
        order.Direction = MST_D_Sell;                        // MST_D_Buy 买入；MST_D_Sell 卖出
        order.OrderStatus = MST_OST_AllTraded;              // 全部成交
        order.VolumeTotalOriginal = 300;                    // 报单数量
        order.LimitPrice = 20.0;                            // 报单价格
        order.VolumeTraded = 300;                           // 成交数量
        strncpy_s(order.OrderSysID, "100", _TRUNCATE);      // 报单号(必须唯一不可重复)
        strncpy_s(order.OrderRef, order.OrderSysID, _TRUNCATE);
        order.RequestID = 100;                              // 请求号
        SendNotifyMessage(TRADE_TYPE_RSPORDER, FALSE, (WPARAM)&order); // 只能一条一条通知，最后一条的bIsLast参数必须为TRUE
    }
    {
        CMstOrderField order;
        memset(&order, 0, sizeof(CMstOrderField));
        strncpy_s(order.InsertDate, "20250405", _TRUNCATE); // 报单日期
        strncpy_s(order.InsertTime, "140835", _TRUNCATE);   // 委托时间
        strncpy_s(order.InvestorID, "", _TRUNCATE);
        strncpy_s(order.InstrumentID, "SH.600048", _TRUNCATE);
        order.OrderPriceType = MST_OPT_LimitPrice;          // 限价
        order.Direction = MST_D_Buy;                        // MST_D_Buy 买入；MST_D_Sell 卖出
        order.OrderStatus = MST_OST_NoTradeQueueing;        // 未成交，可撤单。 部分成交使用： MST_OST_PartTradedQueueing
        order.VolumeTotalOriginal = 300;                    // 报单数量
        order.LimitPrice = 20.0;                            // 报单价格
        order.VolumeTraded = 300;                           // 成交数量
        strncpy_s(order.OrderSysID, "100", _TRUNCATE);      // 报单号(必须唯一不可重复)
        strncpy_s(order.OrderRef, order.OrderSysID, _TRUNCATE);
        order.RequestID = 100;                              // 请求号
        SendNotifyMessage(TRADE_TYPE_RSPORDER, TRUE, (WPARAM)&order); // 只能一条一条通知，最后一条的bIsLast参数必须为TRUE
    }
    return 0;
}

// 请求查询成交
int CMsOpenTraderApi::ReqQryTrade()
{
    // 可自行修改查询成交，并返回通知到易得。

    WriteBlackCon("开放交易接口收到请求查询成交，请自行修改！\r\n"); // 此行可删除
    {
        CMstTradeField trade;
        memset(&trade, 0, sizeof(CMstTradeField));
        strncpy_s(trade.InvestorID, "", _TRUNCATE);
        strncpy_s(trade.InstrumentID, "SH.600036", _TRUNCATE);
        trade.Direction = MST_D_Buy;    // MST_D_Buy买入、MST_D_Sell卖出
        strncpy_s(trade.TradeID, "100000", _TRUNCATE);  // 成交编号
        trade.Volume = 600;             // 数量 
        trade.Price = 30.0;             // 价格
        strncpy_s(trade.TradeDate, "20250405", _TRUNCATE); // 成交时期
        strncpy_s(trade.TradeTime, "140835", _TRUNCATE);   // 成交时间
        SendNotifyMessage(TRADE_TYPE_RSPTRADE, FALSE, (WPARAM)&trade); // 只能一条一条通知，最后一条的bIsLast参数必须为TRUE
    }

    return 0;
}

// 报单录入请求
int CMsOpenTraderApi::ReqOrderInsert(const char* lpszExchangeID, const char* lpszInstrument, double dPrice, int nVol, char cOrderPriceType, char cDirection, char cCombOffsetFlag, char cCombHedgeFlag, double dStopPrice /*= 0*/)
{
    // 现货不能BuyShort, SellShort
    if (cDirection == MST_D_Buy && cCombOffsetFlag != MST_OF_Open)
        return 0;
    if (cDirection == MST_D_Sell && cCombOffsetFlag == MST_OF_Open)
        return 0;

    ++m_nOrderRef;  // 每次报单引用号必须加1，返回的报单引用号将作为后续撤单、成交回报等指令的单号


    // 可自行修改报单录入请求，并返回通知到易得。

    WriteBlackCon("开放交易接口收到报单录入请求，请自行修改！\r\n"); // 此行可删除

    char szMg[1024] = {0};
    sprintf_s(szMg, sizeof(szMg)-1, "收到下单指令：%s %s, 价格:%0.2f, 数量:%d\r\n", \
        cDirection==MST_D_Buy ? "买入" : "卖出", lpszInstrument, dPrice, nVol); 
    WriteBlackCon(szMg);



    Json::Value tradeData;
    tradeData["stock_code"] = extractStockCode(lpszInstrument);
    tradeData["percent"] = nVol/100.0;
    tradeData["price"] = dPrice;
    tradeData["trade_type"] = cDirection == MST_D_Buy ? "buy" : "sell";

    std::string getResponse = client.post("http://localhost:8000/order/percent", tradeData);
    //Json::Value getJson = HttpClient::parseJson(getResponse);

    {
        // 先返回报道通知

        CMstRspInfoField rspInfo;
        memset(&rspInfo, 0, sizeof(CMstRspInfoField));
        rspInfo.ErrorID = 0; // 0表示无错误，非0表示错误
        strncpy_s(rspInfo.ErrorMsg, "", _TRUNCATE);   // 错误信息

        CMstOrderField orderField;
        memset(&orderField, 0, sizeof(CMstOrderField));
        sprintf_s(orderField.OrderSysID, sizeof(orderField.OrderSysID), "%d", m_nOrderRef);   // 将OrderSysID和OrderRef都设为m_nOrderRef
        sprintf_s(orderField.OrderRef, sizeof(orderField.OrderRef), "%d", m_nOrderRef);
        strncpy_s(orderField.InsertDate, "20250405", _TRUNCATE); // 报单日期
        strncpy_s(orderField.InsertTime, "140835", _TRUNCATE);   // 委托时间
        strncpy_s(orderField.InstrumentID, lpszInstrument, _TRUNCATE);
        orderField.Direction = cDirection;
        orderField.LimitPrice = dPrice;
        orderField.VolumeTotalOriginal = nVol;
        orderField.OrderStatus = MST_OST_AllTraded; // 全部成交:MST_OST_AllTraded;   部分成交:MST_OST_PartTradedQueueing, 
        strncpy_s(orderField.StatusMsg, "", _TRUNCATE);

        SendNotifyMessage(TRADE_TYPE_RTNORDER, TRUE, (WPARAM)&orderField, (LPARAM)&rspInfo);

        WriteBlackCon("开放交易接口返回报道通知！\r\n"); // 此行可删除

    }

    {
        // 再返回成交回报
        CMstTradeField tradeField;
        memset(&tradeField, 0, sizeof(CMstTradeField));

        sprintf_s(tradeField.OrderSysID, sizeof(tradeField.OrderSysID), "%d", m_nOrderRef);   // 将OrderSysID和OrderRef都设为m_nOrderRef
        sprintf_s(tradeField.OrderRef, sizeof(tradeField.OrderRef), "%d", m_nOrderRef);
        strncpy_s(tradeField.InstrumentID, lpszInstrument, _TRUNCATE);
        tradeField.Direction = cDirection;
        tradeField.Price = dPrice;
        tradeField.Volume = nVol;
        strncpy_s(tradeField.TradeDate, "20250405", _TRUNCATE); // 成交时期
        strncpy_s(tradeField.TradeTime, "1408356", _TRUNCATE);   // 成交时间

        SendNotifyMessage(TRADE_TYPE_RTNTRADE, TRUE, (WPARAM)&tradeField);

        WriteBlackCon("开放交易接口返回成交回报！\r\n"); // 此行可删除
    }


    return m_nOrderRef; // 返回报单引用号， 将作为后续撤单、成交回报等指令的单号
}

// 报单操作请求 (撤单)
int CMsOpenTraderApi::ReqOrderAction(const char* lpszOrderSysID, const char* lpszExchangeID, const char* lpszInstrumentID)
{
    // 可自行修改报单操作请求，并返回通知到易得。

    WriteBlackCon("开放交易接口收到报单操作请求，请自行修改！\r\n"); // 此行可删除

    char szMg[256] = {0};
    sprintf_s(szMg, sizeof(szMg)-1, "收到撤单指令：单号:%s, %s \r\n", lpszOrderSysID,  lpszInstrumentID); 
    WriteBlackCon(szMg);

    CMstRspInfoField rspInfo;
    memset(&rspInfo, 0, sizeof(CMstRspInfoField));
    rspInfo.ErrorID = 0; // 0表示无错误，非0表示错误
    strncpy_s(rspInfo.ErrorMsg, "", _TRUNCATE);   // 错误信息

    CMstInputOrderActionField inputOrderActionField;
    memset(&inputOrderActionField, 0, sizeof(CMstInputOrderActionField));
    strncpy_s(inputOrderActionField.OrderSysID, lpszOrderSysID, _TRUNCATE);
    strncpy_s(inputOrderActionField.InstrumentID, lpszInstrumentID, _TRUNCATE);

    SendNotifyMessage(TRADE_TYPE_RSPORDERACTION, TRUE, (WPARAM)&inputOrderActionField, (LPARAM)&rspInfo);

    return 0;
}

// 查询最大报单数量请求
int CMsOpenTraderApi::ReqQueryMaxOrderVolume(const char* lpszInstrument, char cDirection, char cOffsetFlag, char cHedgeFlag)
{
    return 0;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////
// 以下接口可直接使用，无需改动

CMsOpenTraderApi::CMsOpenTraderApi(void* pTradeAccount, CWnd* pTradeSpiNotifyWnd)
{
    // 接口开发者无需改动此函数
    m_pTradeAccount = pTradeAccount;
    m_pTradeSpiNotifyWnd = pTradeSpiNotifyWnd;
}

CMsOpenTraderApi::~CMsOpenTraderApi()
{
    // 接口开发者无需改动此函数
    Release();
}

// 释放连接
void CMsOpenTraderApi::Release()
{
    // 此接口一般无需改动，根据需要也可自行修改
}

// 通知易得交易消息
void CMsOpenTraderApi::SendNotifyMessage(RCV_TRADE_TYPE rcvTradeType, bool bIslast /*= TRUE*/, WPARAM wParam /*= NULL*/, LPARAM lParam /*= NULL*/)
{
    // 接口开发者无需改动此函数
    WND_TRADE_MESSAGE msg;
    msg.m_rcvTradeType = rcvTradeType;
    msg.m_pTradeAccount = m_pTradeAccount;
    msg.m_bIsLast = bIslast;
    msg.m_wParam = wParam;
    msg.m_lParam = lParam;
    m_pTradeSpiNotifyWnd->SendMessage(WM_WND_TRADE_MESSAGE, (WPARAM)&msg, NULL);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////
