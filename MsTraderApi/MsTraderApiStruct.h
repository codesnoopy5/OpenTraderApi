#pragma once

//
// 注意：所有结构体模仿并兼容CTP的ThostFtdcUserApiStruct.h, 如果其他交易渠道有新字段，必须加在结构体最后。
//

#include "MsTraderApiDataType.h"

// 资金账户
struct CMstTradingAccountField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 上次质押金额
	TMstMoneyType	PreMortgage;
	// 上次信用额度
	TMstMoneyType	PreCredit;
	// 上次存款额
	TMstMoneyType	PreDeposit;
	// 上次结算准备金
	TMstMoneyType	PreBalance;
	// 上次占用的保证金
	TMstMoneyType	PreMargin;
	// 利息基数
	TMstMoneyType	InterestBase;
	// 利息收入
	TMstMoneyType	Interest;
	// 入金金额
	TMstMoneyType	Deposit;
	// 出金金额
	TMstMoneyType	Withdraw;
	// 冻结的保证金
	TMstMoneyType	FrozenMargin;
	// 冻结的资金
	TMstMoneyType	FrozenCash;
	// 冻结的手续费
	TMstMoneyType	FrozenCommission;
	// 当前保证金总额
	TMstMoneyType	CurrMargin;
	// 资金差额
	TMstMoneyType	CashIn;
	// 手续费
	TMstMoneyType	Commission;
	// 平仓盈亏
	TMstMoneyType	CloseProfit;
	// 持仓盈亏
	TMstMoneyType	PositionProfit;
	// 期货结算准备金
	TMstMoneyType	Balance;
	// 可用资金
	TMstMoneyType	Available;
	// 可取资金
	TMstMoneyType	WithdrawQuota;
	// 基本准备金
	TMstMoneyType	Reserve;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 信用额度
	TMstMoneyType	Credit;
	// 质押金额
	TMstMoneyType	Mortgage;
	// 交易所保证金
	TMstMoneyType	ExchangeMargin;
	// 投资者交割保证金
	TMstMoneyType	DeliveryMargin;
	// 交易所交割保证金
	TMstMoneyType	ExchangeDeliveryMargin;
	// 保底期货结算准备金
	TMstMoneyType	ReserveBalance;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 上次货币质入金额
	TMstMoneyType	PreFundMortgageIn;
	// 上次货币质出金额
	TMstMoneyType	PreFundMortgageOut;
	// 货币质入金额
	TMstMoneyType	FundMortgageIn;
	// 货币质出金额
	TMstMoneyType	FundMortgageOut;
	// 货币质押余额
	TMstMoneyType	FundMortgageAvailable;
	// 可质押货币金额
	TMstMoneyType	MortgageableFund;
	// 特殊产品占用保证金
	TMstMoneyType	SpecProductMargin;
	// 特殊产品冻结保证金
	TMstMoneyType	SpecProductFrozenMargin;
	// 特殊产品手续费
	TMstMoneyType	SpecProductCommission;
	// 特殊产品冻结手续费
	TMstMoneyType	SpecProductFrozenCommission;
	// 特殊产品持仓盈亏
	TMstMoneyType	SpecProductPositionProfit;
	// 特殊产品平仓盈亏
	TMstMoneyType	SpecProductCloseProfit;
	// 根据持仓盈亏算法计算的特殊产品持仓盈亏
	TMstMoneyType	SpecProductPositionProfitByAlg;
	// 特殊产品交易所保证金
	TMstMoneyType	SpecProductExchangeMargin;
	// 业务类型
	TMstBizTypeType	BizType;
	// 延时换汇冻结金额
	TMstMoneyType	FrozenSwap;
	// 剩余换汇额度
	TMstMoneyType	RemainSwap;
};

// 投资者持仓
struct CMstInvestorPositionField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 持仓多空方向
	TMstPosiDirectionType	PosiDirection;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 持仓日期
	TMstPositionDateType	PositionDate;
	// 上日持仓
	TMstVolumeType	YdPosition;
	// 今日持仓
	TMstVolumeType	Position;
	// 多头冻结
	TMstVolumeType	LongFrozen;
	// 空头冻结
	TMstVolumeType	ShortFrozen;
	// 开仓冻结金额
	TMstMoneyType	LongFrozenAmount;
	// 开仓冻结金额
	TMstMoneyType	ShortFrozenAmount;
	// 开仓量
	TMstVolumeType	OpenVolume;
	// 平仓量
	TMstVolumeType	CloseVolume;
	// 开仓金额
	TMstMoneyType	OpenAmount;
	// 平仓金额
	TMstMoneyType	CloseAmount;
	// 持仓成本
	TMstMoneyType	PositionCost;
	// 上次占用的保证金
	TMstMoneyType	PreMargin;
	// 占用的保证金
	TMstMoneyType	UseMargin;
	// 冻结的保证金
	TMstMoneyType	FrozenMargin;
	// 冻结的资金
	TMstMoneyType	FrozenCash;
	// 冻结的手续费
	TMstMoneyType	FrozenCommission;
	// 资金差额
	TMstMoneyType	CashIn;
	// 手续费
	TMstMoneyType	Commission;
	// 平仓盈亏
	TMstMoneyType	CloseProfit;
	// 持仓盈亏
	TMstMoneyType	PositionProfit;
	// 上次结算价
	TMstPriceType	PreSettlementPrice;
	// 本次结算价
	TMstPriceType	SettlementPrice;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 开仓成本
	TMstMoneyType	OpenCost;
	// 交易所保证金
	TMstMoneyType	ExchangeMargin;
	// 组合成交形成的持仓
	TMstVolumeType	CombPosition;
	// 组合多头冻结
	TMstVolumeType	CombLongFrozen;
	// 组合空头冻结
	TMstVolumeType	CombShortFrozen;
	// 逐日盯市平仓盈亏
	TMstMoneyType	CloseProfitByDate;
	// 逐笔对冲平仓盈亏
	TMstMoneyType	CloseProfitByTrade;
	// 今日持仓
	TMstVolumeType	TodayPosition;
	// 保证金率
	TMstRatioType	MarginRateByMoney;
	// 保证金率(按手数)
	TMstRatioType	MarginRateByVolume;
	// 执行冻结
	TMstVolumeType	StrikeFrozen;
	// 执行冻结金额
	TMstMoneyType	StrikeFrozenAmount;
	// 放弃执行冻结
	TMstVolumeType	AbandonFrozen;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 执行冻结的昨仓
	TMstVolumeType	YdStrikeFrozen;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 大商所持仓成本差值，只有大商所使用
	TMstMoneyType	PositionCostOffset;
};


// 投资者结算结果
struct CMstSettlementInfoField
{
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// 消息正文
	TMstContentType	Content;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 报单
struct CMstOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 报单引用
	TMstOrderRefType	OrderRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 报单价格条件
	TMstOrderPriceTypeType	OrderPriceType;
	// 买卖方向
	TMstDirectionType	Direction;
	// 组合开平标志
	TMstCombOffsetFlagType	CombOffsetFlag;
	// 组合投机套保标志
	TMstCombHedgeFlagType	CombHedgeFlag;
	// 价格
	TMstPriceType	LimitPrice;
	// 数量
	TMstVolumeType	VolumeTotalOriginal;
	// 有效期类型
	TMstTimeConditionType	TimeCondition;
	// GTD日期
	TMstDateType	GTDDate;
	// 成交量类型
	TMstVolumeConditionType	VolumeCondition;
	// 最小成交量
	TMstVolumeType	MinVolume;
	// 触发条件
	TMstContingentConditionType	ContingentCondition;
	// 止损价
	TMstPriceType	StopPrice;
	// 强平原因
	TMstForceCloseReasonType	ForceCloseReason;
	// 自动挂起标志
	TMstBoolType	IsAutoSuspend;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 本地报单编号
	TMstOrderLocalIDType	OrderLocalID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 报单提交状态
	TMstOrderSubmitStatusType	OrderSubmitStatus;
	// 报单提示序号
	TMstSequenceNoType	NotifySequence;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 报单编号
	TMstOrderSysIDType	OrderSysID;
	// 报单来源
	TMstOrderSourceType	OrderSource;
	// 报单状态
	TMstOrderStatusType	OrderStatus;
	// 报单类型
	TMstOrderTypeType	OrderType;
	// 今成交数量
	TMstVolumeType	VolumeTraded;
	// 剩余数量
	TMstVolumeType	VolumeTotal;
	// 报单日期
	TMstDateType	InsertDate;
	// 委托时间
	TMstTimeType	InsertTime;
	// 激活时间
	TMstTimeType	ActiveTime;
	// 挂起时间
	TMstTimeType	SuspendTime;
	// 最后修改时间
	TMstTimeType	UpdateTime;
	// 撤销时间
	TMstTimeType	CancelTime;
	// 最后修改交易所交易员代码
	TMstTraderIDType	ActiveTraderID;
	// 结算会员编号
	TMstParticipantIDType	ClearingPartID;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// 状态信息
	TMstErrorMsgType	StatusMsg;
	// 用户强评标志
	TMstBoolType	UserForceClose;
	// 操作用户代码
	TMstUserIDType	ActiveUserID;
	// 经纪公司报单编号
	TMstSequenceNoType	BrokerOrderSeq;
	// 相关报单
	TMstOrderSysIDType	RelativeOrderSysID;
	// 郑商所成交数量
	TMstVolumeType	ZCETotalTradedVolume;
	// 互换单标志
	TMstBoolType	IsSwapOrder;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 资金账号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 成交
struct CMstTradeField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 报单引用
	TMstOrderRefType	OrderRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 成交编号
	TMstTradeIDType	TradeID;
	// 买卖方向
	TMstDirectionType	Direction;
	// 报单编号
	TMstOrderSysIDType	OrderSysID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 交易角色
	TMstTradingRoleType	TradingRole;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 开平标志
	TMstOffsetFlagType	OffsetFlag;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 价格
	TMstPriceType	Price;
	// 数量
	TMstVolumeType	Volume;
	// 成交时期
	TMstDateType	TradeDate;
	// 成交时间
	TMstTimeType	TradeTime;
	// 成交类型
	TMstTradeTypeType	TradeType;
	// 成交价来源
	TMstPriceSourceType	PriceSource;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 本地报单编号
	TMstOrderLocalIDType	OrderLocalID;
	// 结算会员编号
	TMstParticipantIDType	ClearingPartID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 经纪公司报单编号
	TMstSequenceNoType	BrokerOrderSeq;
	// 成交来源
	TMstTradeSourceType	TradeSource;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 预埋单
struct CMstParkedOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 报单引用
	TMstOrderRefType	OrderRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 报单价格条件
	TMstOrderPriceTypeType	OrderPriceType;
	// 买卖方向
	TMstDirectionType	Direction;
	// 组合开平标志
	TMstCombOffsetFlagType	CombOffsetFlag;
	// 组合投机套保标志
	TMstCombHedgeFlagType	CombHedgeFlag;
	// 价格
	TMstPriceType	LimitPrice;
	// 数量
	TMstVolumeType	VolumeTotalOriginal;
	// 有效期类型
	TMstTimeConditionType	TimeCondition;
	// GTD日期
	TMstDateType	GTDDate;
	// 成交量类型
	TMstVolumeConditionType	VolumeCondition;
	// 最小成交量
	TMstVolumeType	MinVolume;
	// 触发条件
	TMstContingentConditionType	ContingentCondition;
	// 止损价
	TMstPriceType	StopPrice;
	// 强平原因
	TMstForceCloseReasonType	ForceCloseReason;
	// 自动挂起标志
	TMstBoolType	IsAutoSuspend;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 用户强评标志
	TMstBoolType	UserForceClose;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 预埋报单编号
	TMstParkedOrderIDType	ParkedOrderID;
	// 用户类型
	TMstUserTypeType	UserType;
	// 预埋单状态
	TMstParkedOrderStatusType	Status;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
	// 互换单标志
	TMstBoolType	IsSwapOrder;
	// 资金账号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 交易编码
	TMstClientIDType	ClientID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 响应信息
struct CMstRspInfoField
{
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
};

// 删除预埋单
struct CMstRemoveParkedOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 预埋报单编号
	TMstParkedOrderIDType	ParkedOrderID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 输入报单
struct CMstInputOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 报单引用
	TMstOrderRefType	OrderRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 报单价格条件
	TMstOrderPriceTypeType	OrderPriceType;
	// 买卖方向
	TMstDirectionType	Direction;
	// 组合开平标志
	TMstCombOffsetFlagType	CombOffsetFlag;
	// 组合投机套保标志
	TMstCombHedgeFlagType	CombHedgeFlag;
	// 价格
	TMstPriceType	LimitPrice;
	// 数量
	TMstVolumeType	VolumeTotalOriginal;
	// 有效期类型
	TMstTimeConditionType	TimeCondition;
	// GTD日期
	TMstDateType	GTDDate;
	// 成交量类型
	TMstVolumeConditionType	VolumeCondition;
	// 最小成交量
	TMstVolumeType	MinVolume;
	// 触发条件
	TMstContingentConditionType	ContingentCondition;
	// 止损价
	TMstPriceType	StopPrice;
	// 强平原因
	TMstForceCloseReasonType	ForceCloseReason;
	// 自动挂起标志
	TMstBoolType	IsAutoSuspend;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 用户强评标志
	TMstBoolType	UserForceClose;
	// 互换单标志
	TMstBoolType	IsSwapOrder;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 资金账号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 交易编码
	TMstClientIDType	ClientID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 输入报单操作
struct CMstInputOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 报单操作引用
	TMstOrderActionRefType	OrderActionRef;
	// 报单引用
	TMstOrderRefType	OrderRef;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 报单编号
	TMstOrderSysIDType	OrderSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 价格
	TMstPriceType	LimitPrice;
	// 数量变化
	TMstVolumeType	VolumeChange;
	// 用户代码
	TMstUserIDType	UserID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 报单操作
struct CMstOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 报单操作引用
	TMstOrderActionRefType	OrderActionRef;
	// 报单引用
	TMstOrderRefType	OrderRef;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 报单编号
	TMstOrderSysIDType	OrderSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 价格
	TMstPriceType	LimitPrice;
	// 数量变化
	TMstVolumeType	VolumeChange;
	// 操作日期
	TMstDateType	ActionDate;
	// 操作时间
	TMstTimeType	ActionTime;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 本地报单编号
	TMstOrderLocalIDType	OrderLocalID;
	// 操作本地编号
	TMstOrderLocalIDType	ActionLocalID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 报单操作状态
	TMstOrderActionStatusType	OrderActionStatus;
	// 用户代码
	TMstUserIDType	UserID;
	// 状态信息
	TMstErrorMsgType	StatusMsg;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 合约保证金率
struct CMstInstrumentMarginRateField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 多头保证金率
	TMstRatioType	LongMarginRatioByMoney;
	// 多头保证金费
	TMstMoneyType	LongMarginRatioByVolume;
	// 空头保证金率
	TMstRatioType	ShortMarginRatioByMoney;
	// 空头保证金费
	TMstMoneyType	ShortMarginRatioByVolume;
	// 是否相对交易所收取
	TMstBoolType	IsRelative;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 合约手续费率
struct CMstInstrumentCommissionRateField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 开仓手续费率
	TMstRatioType	OpenRatioByMoney;
	// 开仓手续费
	TMstRatioType	OpenRatioByVolume;
	// 平仓手续费率
	TMstRatioType	CloseRatioByMoney;
	// 平仓手续费
	TMstRatioType	CloseRatioByVolume;
	// 平今手续费率
	TMstRatioType	CloseTodayRatioByMoney;
	// 平今手续费
	TMstRatioType	CloseTodayRatioByVolume;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 业务类型
	TMstBizTypeType	BizType;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 查询最大报单数量
struct CMstQueryMaxOrderVolumeField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 买卖方向
	TMstDirectionType	Direction;
	// 开平标志
	TMstOffsetFlagType	OffsetFlag;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 最大允许报单数量
	TMstVolumeType	MaxVolume;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

/*

// 信息分发
struct CMstDisseminationField
{
	// 序列系列号
	TMstSequenceSeriesType	SequenceSeries;
	// 序列号
	TMstSequenceNoType	SequenceNo;
};

// 用户登录请求
struct CMstReqUserLoginField
{
	// 交易日
	TMstDateType	TradingDay;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 密码
	TMstPasswordType	Password;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// 接口端产品信息
	TMstProductInfoType	InterfaceProductInfo;
	// 协议信息
	TMstProtocolInfoType	ProtocolInfo;
	// Mac地址
	TMstMacAddressType	MacAddress;
	// 动态密码
	TMstPasswordType	OneTimePassword;
	// 终端IP地址
	TMstIPAddressType	ClientIPAddress;
	// 登录备注
	TMstLoginRemarkType	LoginRemark;
	// 终端IP端口
	TMstIPPortType	ClientIPPort;
};

// 用户登录应答
struct CMstRspUserLoginField
{
	// 交易日
	TMstDateType	TradingDay;
	// 登录成功时间
	TMstTimeType	LoginTime;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 交易系统名称
	TMstSystemNameType	SystemName;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 最大报单引用
	TMstOrderRefType	MaxOrderRef;
	// 上期所时间
	TMstTimeType	SHFETime;
	// 大商所时间
	TMstTimeType	DCETime;
	// 郑商所时间
	TMstTimeType	CZCETime;
	// 中金所时间
	TMstTimeType	FFEXTime;
	// 能源中心时间
	TMstTimeType	INETime;
};

// 用户登出请求
struct CMstUserLogoutField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
};

// 强制交易员退出
struct CMstForceUserLogoutField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
};

// 客户端认证请求
struct CMstReqAuthenticateField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// 认证码
	TMstAuthCodeType	AuthCode;
	// App代码
	TMstAppIDType	AppID;
};

// 客户端认证响应
struct CMstRspAuthenticateField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// App代码
	TMstAppIDType	AppID;
	// App类型
	TMstAppTypeType	AppType;
};

// 客户端认证信息
struct CMstAuthenticationInfoField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// 认证信息
	TMstAuthInfoType	AuthInfo;
	// 是否为认证结果
	TMstBoolType	IsResult;
	// App代码
	TMstAppIDType	AppID;
	// App类型
	TMstAppTypeType	AppType;
};

// 用户登录应答2
struct CMstRspUserLogin2Field
{
	// 交易日
	TMstDateType	TradingDay;
	// 登录成功时间
	TMstTimeType	LoginTime;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 交易系统名称
	TMstSystemNameType	SystemName;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 最大报单引用
	TMstOrderRefType	MaxOrderRef;
	// 上期所时间
	TMstTimeType	SHFETime;
	// 大商所时间
	TMstTimeType	DCETime;
	// 郑商所时间
	TMstTimeType	CZCETime;
	// 中金所时间
	TMstTimeType	FFEXTime;
	// 能源中心时间
	TMstTimeType	INETime;
	// 随机串
	TMstRandomStringType	RandomString;
};

// 银期转帐报文头
struct CMstTransferHeaderField
{
	// 版本号，常量，1.0
	TMstVersionType	Version;
	// 交易代码，必填
	TMstTradeCodeType	TradeCode;
	// 交易日期，必填，格式：yyyymmdd
	TMstTradeDateType	TradeDate;
	// 交易时间，必填，格式：hhmmss
	TMstTradeTimeType	TradeTime;
	// 发起方流水号，N/A
	TMstTradeSerialType	TradeSerial;
	// 期货公司代码，必填
	TMstFutureIDType	FutureID;
	// 银行代码，根据查询银行得到，必填
	TMstBankIDType	BankID;
	// 银行分中心代码，根据查询银行得到，必填
	TMstBankBrchIDType	BankBrchID;
	// 操作员，N/A
	TMstOperNoType	OperNo;
	// 交易设备类型，N/A
	TMstDeviceIDType	DeviceID;
	// 记录数，N/A
	TMstRecordNumType	RecordNum;
	// 会话编号，N/A
	TMstSessionIDType	SessionID;
	// 请求编号，N/A
	TMstRequestIDType	RequestID;
};

// 银行资金转期货请求，TradeCode=202001
struct CMstTransferBankToFutureReqField
{
	// 期货资金账户
	TMstAccountIDType	FutureAccount;
	// 密码标志
	TMstFuturePwdFlagType	FuturePwdFlag;
	// 密码
	TMstFutureAccPwdType	FutureAccPwd;
	// 转账金额
	TMstMoneyType	TradeAmt;
	// 客户手续费
	TMstMoneyType	CustFee;
	// 币种：RMB-人民币 USD-美圆 HKD-港元
	TMstCurrencyCodeType	CurrencyCode;
};

// 银行资金转期货请求响应
struct CMstTransferBankToFutureRspField
{
	// 响应代码
	TMstRetCodeType	RetCode;
	// 响应信息
	TMstRetInfoType	RetInfo;
	// 资金账户
	TMstAccountIDType	FutureAccount;
	// 转帐金额
	TMstMoneyType	TradeAmt;
	// 应收客户手续费
	TMstMoneyType	CustFee;
	// 币种
	TMstCurrencyCodeType	CurrencyCode;
};

// 期货资金转银行请求，TradeCode=202002
struct CMstTransferFutureToBankReqField
{
	// 期货资金账户
	TMstAccountIDType	FutureAccount;
	// 密码标志
	TMstFuturePwdFlagType	FuturePwdFlag;
	// 密码
	TMstFutureAccPwdType	FutureAccPwd;
	// 转账金额
	TMstMoneyType	TradeAmt;
	// 客户手续费
	TMstMoneyType	CustFee;
	// 币种：RMB-人民币 USD-美圆 HKD-港元
	TMstCurrencyCodeType	CurrencyCode;
};

// 期货资金转银行请求响应
struct CMstTransferFutureToBankRspField
{
	// 响应代码
	TMstRetCodeType	RetCode;
	// 响应信息
	TMstRetInfoType	RetInfo;
	// 资金账户
	TMstAccountIDType	FutureAccount;
	// 转帐金额
	TMstMoneyType	TradeAmt;
	// 应收客户手续费
	TMstMoneyType	CustFee;
	// 币种
	TMstCurrencyCodeType	CurrencyCode;
};

// 查询银行资金请求，TradeCode=204002
struct CMstTransferQryBankReqField
{
	// 期货资金账户
	TMstAccountIDType	FutureAccount;
	// 密码标志
	TMstFuturePwdFlagType	FuturePwdFlag;
	// 密码
	TMstFutureAccPwdType	FutureAccPwd;
	// 币种：RMB-人民币 USD-美圆 HKD-港元
	TMstCurrencyCodeType	CurrencyCode;
};

// 查询银行资金请求响应
struct CMstTransferQryBankRspField
{
	// 响应代码
	TMstRetCodeType	RetCode;
	// 响应信息
	TMstRetInfoType	RetInfo;
	// 资金账户
	TMstAccountIDType	FutureAccount;
	// 银行余额
	TMstMoneyType	TradeAmt;
	// 银行可用余额
	TMstMoneyType	UseAmt;
	// 银行可取余额
	TMstMoneyType	FetchAmt;
	// 币种
	TMstCurrencyCodeType	CurrencyCode;
};

// 查询银行交易明细请求，TradeCode=204999
struct CMstTransferQryDetailReqField
{
	// 期货资金账户
	TMstAccountIDType	FutureAccount;
};

// 查询银行交易明细请求响应
struct CMstTransferQryDetailRspField
{
	// 交易日期
	TMstDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 交易代码
	TMstTradeCodeType	TradeCode;
	// 期货流水号
	TMstTradeSerialNoType	FutureSerial;
	// 期货公司代码
	TMstFutureIDType	FutureID;
	// 资金帐号
	TMstFutureAccountType	FutureAccount;
	// 银行流水号
	TMstTradeSerialNoType	BankSerial;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分中心代码
	TMstBankBrchIDType	BankBrchID;
	// 银行账号
	TMstBankAccountType	BankAccount;
	// 证件号码
	TMstCertCodeType	CertCode;
	// 货币代码
	TMstCurrencyCodeType	CurrencyCode;
	// 发生金额
	TMstMoneyType	TxAmount;
	// 有效标志
	TMstTransferValidFlagType	Flag;
};

// 交易所
struct CMstExchangeField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 交易所名称
	TMstExchangeNameType	ExchangeName;
	// 交易所属性
	TMstExchangePropertyType	ExchangeProperty;
};

// 产品
struct CMstProductField
{
	// 产品代码
	TMstInstrumentIDType	ProductID;
	// 产品名称
	TMstProductNameType	ProductName;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 产品类型
	TMstProductClassType	ProductClass;
	// 合约数量乘数
	TMstVolumeMultipleType	VolumeMultiple;
	// 最小变动价位
	TMstPriceType	PriceTick;
	// 市价单最大下单量
	TMstVolumeType	MaxMarketOrderVolume;
	// 市价单最小下单量
	TMstVolumeType	MinMarketOrderVolume;
	// 限价单最大下单量
	TMstVolumeType	MaxLimitOrderVolume;
	// 限价单最小下单量
	TMstVolumeType	MinLimitOrderVolume;
	// 持仓类型
	TMstPositionTypeType	PositionType;
	// 持仓日期类型
	TMstPositionDateTypeType	PositionDateType;
	// 平仓处理类型
	TMstCloseDealTypeType	CloseDealType;
	// 交易币种类型
	TMstCurrencyIDType	TradeCurrencyID;
	// 质押资金可用范围
	TMstMortgageFundUseRangeType	MortgageFundUseRange;
	// 交易所产品代码
	TMstInstrumentIDType	ExchangeProductID;
	// 合约基础商品乘数
	TMstUnderlyingMultipleType	UnderlyingMultiple;
};

// 合约
struct CMstInstrumentField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 合约名称
	TMstInstrumentNameType	InstrumentName;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 产品代码
	TMstInstrumentIDType	ProductID;
	// 产品类型
	TMstProductClassType	ProductClass;
	// 交割年份
	TMstYearType	DeliveryYear;
	// 交割月
	TMstMonthType	DeliveryMonth;
	// 市价单最大下单量
	TMstVolumeType	MaxMarketOrderVolume;
	// 市价单最小下单量
	TMstVolumeType	MinMarketOrderVolume;
	// 限价单最大下单量
	TMstVolumeType	MaxLimitOrderVolume;
	// 限价单最小下单量
	TMstVolumeType	MinLimitOrderVolume;
	// 合约数量乘数
	TMstVolumeMultipleType	VolumeMultiple;
	// 最小变动价位
	TMstPriceType	PriceTick;
	// 创建日
	TMstDateType	CreateDate;
	// 上市日
	TMstDateType	OpenDate;
	// 到期日
	TMstDateType	ExpireDate;
	// 开始交割日
	TMstDateType	StartDelivDate;
	// 结束交割日
	TMstDateType	EndDelivDate;
	// 合约生命周期状态
	TMstInstLifePhaseType	InstLifePhase;
	// 当前是否交易
	TMstBoolType	IsTrading;
	// 持仓类型
	TMstPositionTypeType	PositionType;
	// 持仓日期类型
	TMstPositionDateTypeType	PositionDateType;
	// 多头保证金率
	TMstRatioType	LongMarginRatio;
	// 空头保证金率
	TMstRatioType	ShortMarginRatio;
	// 是否使用大额单边保证金算法
	TMstMaxMarginSideAlgorithmType	MaxMarginSideAlgorithm;
	// 基础商品代码
	TMstInstrumentIDType	UnderlyingInstrID;
	// 执行价
	TMstPriceType	StrikePrice;
	// 期权类型
	TMstOptionsTypeType	OptionsType;
	// 合约基础商品乘数
	TMstUnderlyingMultipleType	UnderlyingMultiple;
	// 组合类型
	TMstCombinationTypeType	CombinationType;
};

// 经纪公司
struct CMstBrokerField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 经纪公司简称
	TMstBrokerAbbrType	BrokerAbbr;
	// 经纪公司名称
	TMstBrokerNameType	BrokerName;
	// 是否活跃
	TMstBoolType	IsActive;
};

// 交易所交易员
struct CMstTraderField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 密码
	TMstPasswordType	Password;
	// 安装数量
	TMstInstallCountType	InstallCount;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
};

// 投资者
struct CMstInvestorField
{
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者分组代码
	TMstInvestorIDType	InvestorGroupID;
	// 投资者名称
	TMstPartyNameType	InvestorName;
	// 证件类型
	TMstIdCardTypeType	IdentifiedCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 是否活跃
	TMstBoolType	IsActive;
	// 联系电话
	TMstTelephoneType	Telephone;
	// 通讯地址
	TMstAddressType	Address;
	// 开户日期
	TMstDateType	OpenDate;
	// 手机
	TMstMobileType	Mobile;
	// 手续费率模板代码
	TMstInvestorIDType	CommModelID;
	// 保证金率模板代码
	TMstInvestorIDType	MarginModelID;
};

// 交易编码
struct CMstTradingCodeField
{
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 是否活跃
	TMstBoolType	IsActive;
	// 交易编码类型
	TMstClientIDTypeType	ClientIDType;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// 业务类型
	TMstBizTypeType	BizType;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 会员编码和经纪公司编码对照表
struct CMstPartBrokerField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 是否活跃
	TMstBoolType	IsActive;
};

// 管理用户
struct CMstSuperUserField
{
	// 用户代码
	TMstUserIDType	UserID;
	// 用户名称
	TMstUserNameType	UserName;
	// 密码
	TMstPasswordType	Password;
	// 是否活跃
	TMstBoolType	IsActive;
};

// 管理用户功能权限
struct CMstSuperUserFunctionField
{
	// 用户代码
	TMstUserIDType	UserID;
	// 功能代码
	TMstFunctionCodeType	FunctionCode;
};

// 投资者组
struct CMstInvestorGroupField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者分组代码
	TMstInvestorIDType	InvestorGroupID;
	// 投资者分组名称
	TMstInvestorGroupNameType	InvestorGroupName;
};

// 深度行情
struct CMstDepthMarketDataField
{
	// 交易日
	TMstDateType	TradingDay;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 最新价
	TMstPriceType	LastPrice;
	// 上次结算价
	TMstPriceType	PreSettlementPrice;
	// 昨收盘
	TMstPriceType	PreClosePrice;
	// 昨持仓量
	TMstLargeVolumeType	PreOpenInterest;
	// 今开盘
	TMstPriceType	OpenPrice;
	// 最高价
	TMstPriceType	HighestPrice;
	// 最低价
	TMstPriceType	LowestPrice;
	// 数量
	TMstVolumeType	Volume;
	// 成交金额
	TMstMoneyType	Turnover;
	// 持仓量
	TMstLargeVolumeType	OpenInterest;
	// 今收盘
	TMstPriceType	ClosePrice;
	// 本次结算价
	TMstPriceType	SettlementPrice;
	// 涨停板价
	TMstPriceType	UpperLimitPrice;
	// 跌停板价
	TMstPriceType	LowerLimitPrice;
	// 昨虚实度
	TMstRatioType	PreDelta;
	// 今虚实度
	TMstRatioType	CurrDelta;
	// 最后修改时间
	TMstTimeType	UpdateTime;
	// 最后修改毫秒
	TMstMillisecType	UpdateMillisec;
	// 申买价一
	TMstPriceType	BidPrice1;
	// 申买量一
	TMstVolumeType	BidVolume1;
	// 申卖价一
	TMstPriceType	AskPrice1;
	// 申卖量一
	TMstVolumeType	AskVolume1;
	// 申买价二
	TMstPriceType	BidPrice2;
	// 申买量二
	TMstVolumeType	BidVolume2;
	// 申卖价二
	TMstPriceType	AskPrice2;
	// 申卖量二
	TMstVolumeType	AskVolume2;
	// 申买价三
	TMstPriceType	BidPrice3;
	// 申买量三
	TMstVolumeType	BidVolume3;
	// 申卖价三
	TMstPriceType	AskPrice3;
	// 申卖量三
	TMstVolumeType	AskVolume3;
	// 申买价四
	TMstPriceType	BidPrice4;
	// 申买量四
	TMstVolumeType	BidVolume4;
	// 申卖价四
	TMstPriceType	AskPrice4;
	// 申卖量四
	TMstVolumeType	AskVolume4;
	// 申买价五
	TMstPriceType	BidPrice5;
	// 申买量五
	TMstVolumeType	BidVolume5;
	// 申卖价五
	TMstPriceType	AskPrice5;
	// 申卖量五
	TMstVolumeType	AskVolume5;
	// 当日均价
	TMstPriceType	AveragePrice;
	// 业务日期
	TMstDateType	ActionDay;
};

// 投资者合约交易权限
struct CMstInstrumentTradingRightField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 交易权限
	TMstTradingRightType	TradingRight;
};

// 经纪公司用户
struct CMstBrokerUserField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 用户名称
	TMstUserNameType	UserName;
	// 用户类型
	TMstUserTypeType	UserType;
	// 是否活跃
	TMstBoolType	IsActive;
	// 是否使用令牌
	TMstBoolType	IsUsingOTP;
	// 是否强制终端认证
	TMstBoolType	IsAuthForce;
};

// 经纪公司用户口令
struct CMstBrokerUserPasswordField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 密码
	TMstPasswordType	Password;
	// 上次修改时间
	TMstDateTimeType	LastUpdateTime;
	// 上次登陆时间
	TMstDateTimeType	LastLoginTime;
	// 密码过期时间
	TMstDateType	ExpireDate;
	// 弱密码过期时间
	TMstDateType	WeakExpireDate;
};

// 经纪公司用户功能权限
struct CMstBrokerUserFunctionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 经纪公司功能代码
	TMstBrokerFunctionCodeType	BrokerFunctionCode;
};

// 交易所交易员报盘机
struct CMstTraderOfferField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 密码
	TMstPasswordType	Password;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 本地报单编号
	TMstOrderLocalIDType	OrderLocalID;
	// 交易所交易员连接状态
	TMstTraderConnectStatusType	TraderConnectStatus;
	// 发出连接请求的日期
	TMstDateType	ConnectRequestDate;
	// 发出连接请求的时间
	TMstTimeType	ConnectRequestTime;
	// 上次报告日期
	TMstDateType	LastReportDate;
	// 上次报告时间
	TMstTimeType	LastReportTime;
	// 完成连接日期
	TMstDateType	ConnectDate;
	// 完成连接时间
	TMstTimeType	ConnectTime;
	// 启动日期
	TMstDateType	StartDate;
	// 启动时间
	TMstTimeType	StartTime;
	// 交易日
	TMstDateType	TradingDay;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 本席位最大成交编号
	TMstTradeIDType	MaxTradeID;
	// 本席位最大报单备拷
	TMstReturnCodeType	MaxOrderMessageReference;
};

// 合约保证金率调整
struct CMstInstrumentMarginRateAdjustField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 多头保证金率
	TMstRatioType	LongMarginRatioByMoney;
	// 多头保证金费
	TMstMoneyType	LongMarginRatioByVolume;
	// 空头保证金率
	TMstRatioType	ShortMarginRatioByMoney;
	// 空头保证金费
	TMstMoneyType	ShortMarginRatioByVolume;
	// 是否相对交易所收取
	TMstBoolType	IsRelative;
};

// 交易所保证金率
struct CMstExchangeMarginRateField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 多头保证金率
	TMstRatioType	LongMarginRatioByMoney;
	// 多头保证金费
	TMstMoneyType	LongMarginRatioByVolume;
	// 空头保证金率
	TMstRatioType	ShortMarginRatioByMoney;
	// 空头保证金费
	TMstMoneyType	ShortMarginRatioByVolume;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 交易所保证金率调整
struct CMstExchangeMarginRateAdjustField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 跟随交易所投资者多头保证金率
	TMstRatioType	LongMarginRatioByMoney;
	// 跟随交易所投资者多头保证金费
	TMstMoneyType	LongMarginRatioByVolume;
	// 跟随交易所投资者空头保证金率
	TMstRatioType	ShortMarginRatioByMoney;
	// 跟随交易所投资者空头保证金费
	TMstMoneyType	ShortMarginRatioByVolume;
	// 交易所多头保证金率
	TMstRatioType	ExchLongMarginRatioByMoney;
	// 交易所多头保证金费
	TMstMoneyType	ExchLongMarginRatioByVolume;
	// 交易所空头保证金率
	TMstRatioType	ExchShortMarginRatioByMoney;
	// 交易所空头保证金费
	TMstMoneyType	ExchShortMarginRatioByVolume;
	// 不跟随交易所投资者多头保证金率
	TMstRatioType	NoLongMarginRatioByMoney;
	// 不跟随交易所投资者多头保证金费
	TMstMoneyType	NoLongMarginRatioByVolume;
	// 不跟随交易所投资者空头保证金率
	TMstRatioType	NoShortMarginRatioByMoney;
	// 不跟随交易所投资者空头保证金费
	TMstMoneyType	NoShortMarginRatioByVolume;
};

// 汇率
struct CMstExchangeRateField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 源币种
	TMstCurrencyIDType	FromCurrencyID;
	// 源币种单位数量
	TMstCurrencyUnitType	FromCurrencyUnit;
	// 目标币种
	TMstCurrencyIDType	ToCurrencyID;
	// 汇率
	TMstExchangeRateType	ExchangeRate;
};

// 结算引用
struct CMstSettlementRefField
{
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
};

// 当前时间
struct CMstCurrentTimeField
{
	// 当前日期
	TMstDateType	CurrDate;
	// 当前时间
	TMstTimeType	CurrTime;
	// 当前时间（毫秒）
	TMstMillisecType	CurrMillisec;
	// 业务日期
	TMstDateType	ActionDay;
};

// 通讯阶段
struct CMstCommPhaseField
{
	// 交易日
	TMstDateType	TradingDay;
	// 通讯时段编号
	TMstCommPhaseNoType	CommPhaseNo;
	// 系统编号
	TMstSystemIDType	SystemID;
};

// 登录信息
struct CMstLoginInfoField
{
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 登录日期
	TMstDateType	LoginDate;
	// 登录时间
	TMstTimeType	LoginTime;
	// IP地址
	TMstIPAddressType	IPAddress;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// 接口端产品信息
	TMstProductInfoType	InterfaceProductInfo;
	// 协议信息
	TMstProtocolInfoType	ProtocolInfo;
	// 系统名称
	TMstSystemNameType	SystemName;
	// 密码,已弃用
	TMstPasswordType	PasswordDeprecated;
	// 最大报单引用
	TMstOrderRefType	MaxOrderRef;
	// 上期所时间
	TMstTimeType	SHFETime;
	// 大商所时间
	TMstTimeType	DCETime;
	// 郑商所时间
	TMstTimeType	CZCETime;
	// 中金所时间
	TMstTimeType	FFEXTime;
	// Mac地址
	TMstMacAddressType	MacAddress;
	// 动态密码
	TMstPasswordType	OneTimePassword;
	// 能源中心时间
	TMstTimeType	INETime;
	// 查询时是否需要流控
	TMstBoolType	IsQryControl;
	// 登录备注
	TMstLoginRemarkType	LoginRemark;
	// 密码
	TMstPasswordType	Password;
};

// 登录信息
struct CMstLogoutAllField
{
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 系统名称
	TMstSystemNameType	SystemName;
};

// 前置状态
struct CMstFrontStatusField
{
	// 前置编号
	TMstFrontIDType	FrontID;
	// 上次报告日期
	TMstDateType	LastReportDate;
	// 上次报告时间
	TMstTimeType	LastReportTime;
	// 是否活跃
	TMstBoolType	IsActive;
};

// 用户口令变更
struct CMstUserPasswordUpdateField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 原来的口令
	TMstPasswordType	OldPassword;
	// 新的口令
	TMstPasswordType	NewPassword;
};

// 交易所报单
struct CMstExchangeOrderField
{
	// 报单价格条件
	TMstOrderPriceTypeType	OrderPriceType;
	// 买卖方向
	TMstDirectionType	Direction;
	// 组合开平标志
	TMstCombOffsetFlagType	CombOffsetFlag;
	// 组合投机套保标志
	TMstCombHedgeFlagType	CombHedgeFlag;
	// 价格
	TMstPriceType	LimitPrice;
	// 数量
	TMstVolumeType	VolumeTotalOriginal;
	// 有效期类型
	TMstTimeConditionType	TimeCondition;
	// GTD日期
	TMstDateType	GTDDate;
	// 成交量类型
	TMstVolumeConditionType	VolumeCondition;
	// 最小成交量
	TMstVolumeType	MinVolume;
	// 触发条件
	TMstContingentConditionType	ContingentCondition;
	// 止损价
	TMstPriceType	StopPrice;
	// 强平原因
	TMstForceCloseReasonType	ForceCloseReason;
	// 自动挂起标志
	TMstBoolType	IsAutoSuspend;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 本地报单编号
	TMstOrderLocalIDType	OrderLocalID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 报单提交状态
	TMstOrderSubmitStatusType	OrderSubmitStatus;
	// 报单提示序号
	TMstSequenceNoType	NotifySequence;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 报单编号
	TMstOrderSysIDType	OrderSysID;
	// 报单来源
	TMstOrderSourceType	OrderSource;
	// 报单状态
	TMstOrderStatusType	OrderStatus;
	// 报单类型
	TMstOrderTypeType	OrderType;
	// 今成交数量
	TMstVolumeType	VolumeTraded;
	// 剩余数量
	TMstVolumeType	VolumeTotal;
	// 报单日期
	TMstDateType	InsertDate;
	// 委托时间
	TMstTimeType	InsertTime;
	// 激活时间
	TMstTimeType	ActiveTime;
	// 挂起时间
	TMstTimeType	SuspendTime;
	// 最后修改时间
	TMstTimeType	UpdateTime;
	// 撤销时间
	TMstTimeType	CancelTime;
	// 最后修改交易所交易员代码
	TMstTraderIDType	ActiveTraderID;
	// 结算会员编号
	TMstParticipantIDType	ClearingPartID;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 交易所报单插入失败
struct CMstExchangeOrderInsertErrorField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 本地报单编号
	TMstOrderLocalIDType	OrderLocalID;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
};

// 交易所报单操作
struct CMstExchangeOrderActionField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 报单编号
	TMstOrderSysIDType	OrderSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 价格
	TMstPriceType	LimitPrice;
	// 数量变化
	TMstVolumeType	VolumeChange;
	// 操作日期
	TMstDateType	ActionDate;
	// 操作时间
	TMstTimeType	ActionTime;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 本地报单编号
	TMstOrderLocalIDType	OrderLocalID;
	// 操作本地编号
	TMstOrderLocalIDType	ActionLocalID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 报单操作状态
	TMstOrderActionStatusType	OrderActionStatus;
	// 用户代码
	TMstUserIDType	UserID;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 交易所报单操作失败
struct CMstExchangeOrderActionErrorField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 报单编号
	TMstOrderSysIDType	OrderSysID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 本地报单编号
	TMstOrderLocalIDType	OrderLocalID;
	// 操作本地编号
	TMstOrderLocalIDType	ActionLocalID;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
};

// 交易所成交
struct CMstExchangeTradeField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 成交编号
	TMstTradeIDType	TradeID;
	// 买卖方向
	TMstDirectionType	Direction;
	// 报单编号
	TMstOrderSysIDType	OrderSysID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 交易角色
	TMstTradingRoleType	TradingRole;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 开平标志
	TMstOffsetFlagType	OffsetFlag;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 价格
	TMstPriceType	Price;
	// 数量
	TMstVolumeType	Volume;
	// 成交时期
	TMstDateType	TradeDate;
	// 成交时间
	TMstTimeType	TradeTime;
	// 成交类型
	TMstTradeTypeType	TradeType;
	// 成交价来源
	TMstPriceSourceType	PriceSource;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 本地报单编号
	TMstOrderLocalIDType	OrderLocalID;
	// 结算会员编号
	TMstParticipantIDType	ClearingPartID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// 成交来源
	TMstTradeSourceType	TradeSource;
};

// 用户会话
struct CMstUserSessionField
{
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 登录日期
	TMstDateType	LoginDate;
	// 登录时间
	TMstTimeType	LoginTime;
	// IP地址
	TMstIPAddressType	IPAddress;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// 接口端产品信息
	TMstProductInfoType	InterfaceProductInfo;
	// 协议信息
	TMstProtocolInfoType	ProtocolInfo;
	// Mac地址
	TMstMacAddressType	MacAddress;
	// 登录备注
	TMstLoginRemarkType	LoginRemark;
};

// 投资者结算结果确认信息
struct CMstSettlementInfoConfirmField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 确认日期
	TMstDateType	ConfirmDate;
	// 确认时间
	TMstTimeType	ConfirmTime;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 出入金同步
struct CMstSyncDepositField
{
	// 出入金流水号
	TMstDepositSeqNoType	DepositSeqNo;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 入金金额
	TMstMoneyType	Deposit;
	// 是否强制进行
	TMstBoolType	IsForce;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 货币质押同步
struct CMstSyncFundMortgageField
{
	// 货币质押流水号
	TMstDepositSeqNoType	MortgageSeqNo;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 源币种
	TMstCurrencyIDType	FromCurrencyID;
	// 质押金额
	TMstMoneyType	MortgageAmount;
	// 目标币种
	TMstCurrencyIDType	ToCurrencyID;
};

// 经纪公司同步
struct CMstBrokerSyncField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
};

// 正在同步中的投资者
struct CMstSyncingInvestorField
{
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者分组代码
	TMstInvestorIDType	InvestorGroupID;
	// 投资者名称
	TMstPartyNameType	InvestorName;
	// 证件类型
	TMstIdCardTypeType	IdentifiedCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 是否活跃
	TMstBoolType	IsActive;
	// 联系电话
	TMstTelephoneType	Telephone;
	// 通讯地址
	TMstAddressType	Address;
	// 开户日期
	TMstDateType	OpenDate;
	// 手机
	TMstMobileType	Mobile;
	// 手续费率模板代码
	TMstInvestorIDType	CommModelID;
	// 保证金率模板代码
	TMstInvestorIDType	MarginModelID;
};

// 正在同步中的交易代码
struct CMstSyncingTradingCodeField
{
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 是否活跃
	TMstBoolType	IsActive;
	// 交易编码类型
	TMstClientIDTypeType	ClientIDType;
};

// 正在同步中的投资者分组
struct CMstSyncingInvestorGroupField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者分组代码
	TMstInvestorIDType	InvestorGroupID;
	// 投资者分组名称
	TMstInvestorGroupNameType	InvestorGroupName;
};

// 正在同步中的交易账号
struct CMstSyncingTradingAccountField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 上次质押金额
	TMstMoneyType	PreMortgage;
	// 上次信用额度
	TMstMoneyType	PreCredit;
	// 上次存款额
	TMstMoneyType	PreDeposit;
	// 上次结算准备金
	TMstMoneyType	PreBalance;
	// 上次占用的保证金
	TMstMoneyType	PreMargin;
	// 利息基数
	TMstMoneyType	InterestBase;
	// 利息收入
	TMstMoneyType	Interest;
	// 入金金额
	TMstMoneyType	Deposit;
	// 出金金额
	TMstMoneyType	Withdraw;
	// 冻结的保证金
	TMstMoneyType	FrozenMargin;
	// 冻结的资金
	TMstMoneyType	FrozenCash;
	// 冻结的手续费
	TMstMoneyType	FrozenCommission;
	// 当前保证金总额
	TMstMoneyType	CurrMargin;
	// 资金差额
	TMstMoneyType	CashIn;
	// 手续费
	TMstMoneyType	Commission;
	// 平仓盈亏
	TMstMoneyType	CloseProfit;
	// 持仓盈亏
	TMstMoneyType	PositionProfit;
	// 期货结算准备金
	TMstMoneyType	Balance;
	// 可用资金
	TMstMoneyType	Available;
	// 可取资金
	TMstMoneyType	WithdrawQuota;
	// 基本准备金
	TMstMoneyType	Reserve;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 信用额度
	TMstMoneyType	Credit;
	// 质押金额
	TMstMoneyType	Mortgage;
	// 交易所保证金
	TMstMoneyType	ExchangeMargin;
	// 投资者交割保证金
	TMstMoneyType	DeliveryMargin;
	// 交易所交割保证金
	TMstMoneyType	ExchangeDeliveryMargin;
	// 保底期货结算准备金
	TMstMoneyType	ReserveBalance;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 上次货币质入金额
	TMstMoneyType	PreFundMortgageIn;
	// 上次货币质出金额
	TMstMoneyType	PreFundMortgageOut;
	// 货币质入金额
	TMstMoneyType	FundMortgageIn;
	// 货币质出金额
	TMstMoneyType	FundMortgageOut;
	// 货币质押余额
	TMstMoneyType	FundMortgageAvailable;
	// 可质押货币金额
	TMstMoneyType	MortgageableFund;
	// 特殊产品占用保证金
	TMstMoneyType	SpecProductMargin;
	// 特殊产品冻结保证金
	TMstMoneyType	SpecProductFrozenMargin;
	// 特殊产品手续费
	TMstMoneyType	SpecProductCommission;
	// 特殊产品冻结手续费
	TMstMoneyType	SpecProductFrozenCommission;
	// 特殊产品持仓盈亏
	TMstMoneyType	SpecProductPositionProfit;
	// 特殊产品平仓盈亏
	TMstMoneyType	SpecProductCloseProfit;
	// 根据持仓盈亏算法计算的特殊产品持仓盈亏
	TMstMoneyType	SpecProductPositionProfitByAlg;
	// 特殊产品交易所保证金
	TMstMoneyType	SpecProductExchangeMargin;
	// 延时换汇冻结金额
	TMstMoneyType	FrozenSwap;
	// 剩余换汇额度
	TMstMoneyType	RemainSwap;
};

// 正在同步中的投资者持仓
struct CMstSyncingInvestorPositionField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 持仓多空方向
	TMstPosiDirectionType	PosiDirection;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 持仓日期
	TMstPositionDateType	PositionDate;
	// 上日持仓
	TMstVolumeType	YdPosition;
	// 今日持仓
	TMstVolumeType	Position;
	// 多头冻结
	TMstVolumeType	LongFrozen;
	// 空头冻结
	TMstVolumeType	ShortFrozen;
	// 开仓冻结金额
	TMstMoneyType	LongFrozenAmount;
	// 开仓冻结金额
	TMstMoneyType	ShortFrozenAmount;
	// 开仓量
	TMstVolumeType	OpenVolume;
	// 平仓量
	TMstVolumeType	CloseVolume;
	// 开仓金额
	TMstMoneyType	OpenAmount;
	// 平仓金额
	TMstMoneyType	CloseAmount;
	// 持仓成本
	TMstMoneyType	PositionCost;
	// 上次占用的保证金
	TMstMoneyType	PreMargin;
	// 占用的保证金
	TMstMoneyType	UseMargin;
	// 冻结的保证金
	TMstMoneyType	FrozenMargin;
	// 冻结的资金
	TMstMoneyType	FrozenCash;
	// 冻结的手续费
	TMstMoneyType	FrozenCommission;
	// 资金差额
	TMstMoneyType	CashIn;
	// 手续费
	TMstMoneyType	Commission;
	// 平仓盈亏
	TMstMoneyType	CloseProfit;
	// 持仓盈亏
	TMstMoneyType	PositionProfit;
	// 上次结算价
	TMstPriceType	PreSettlementPrice;
	// 本次结算价
	TMstPriceType	SettlementPrice;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 开仓成本
	TMstMoneyType	OpenCost;
	// 交易所保证金
	TMstMoneyType	ExchangeMargin;
	// 组合成交形成的持仓
	TMstVolumeType	CombPosition;
	// 组合多头冻结
	TMstVolumeType	CombLongFrozen;
	// 组合空头冻结
	TMstVolumeType	CombShortFrozen;
	// 逐日盯市平仓盈亏
	TMstMoneyType	CloseProfitByDate;
	// 逐笔对冲平仓盈亏
	TMstMoneyType	CloseProfitByTrade;
	// 今日持仓
	TMstVolumeType	TodayPosition;
	// 保证金率
	TMstRatioType	MarginRateByMoney;
	// 保证金率(按手数)
	TMstRatioType	MarginRateByVolume;
	// 执行冻结
	TMstVolumeType	StrikeFrozen;
	// 执行冻结金额
	TMstMoneyType	StrikeFrozenAmount;
	// 放弃执行冻结
	TMstVolumeType	AbandonFrozen;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 执行冻结的昨仓
	TMstVolumeType	YdStrikeFrozen;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 大商所持仓成本差值，只有大商所使用
	TMstMoneyType	PositionCostOffset;
};

// 正在同步中的合约保证金率
struct CMstSyncingInstrumentMarginRateField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 多头保证金率
	TMstRatioType	LongMarginRatioByMoney;
	// 多头保证金费
	TMstMoneyType	LongMarginRatioByVolume;
	// 空头保证金率
	TMstRatioType	ShortMarginRatioByMoney;
	// 空头保证金费
	TMstMoneyType	ShortMarginRatioByVolume;
	// 是否相对交易所收取
	TMstBoolType	IsRelative;
};

// 正在同步中的合约手续费率
struct CMstSyncingInstrumentCommissionRateField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 开仓手续费率
	TMstRatioType	OpenRatioByMoney;
	// 开仓手续费
	TMstRatioType	OpenRatioByVolume;
	// 平仓手续费率
	TMstRatioType	CloseRatioByMoney;
	// 平仓手续费
	TMstRatioType	CloseRatioByVolume;
	// 平今手续费率
	TMstRatioType	CloseTodayRatioByMoney;
	// 平今手续费
	TMstRatioType	CloseTodayRatioByVolume;
};

// 正在同步中的合约交易权限
struct CMstSyncingInstrumentTradingRightField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 交易权限
	TMstTradingRightType	TradingRight;
};

// 查询报单
struct CMstQryOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 报单编号
	TMstOrderSysIDType	OrderSysID;
	// 开始时间
	TMstTimeType	InsertTimeStart;
	// 结束时间
	TMstTimeType	InsertTimeEnd;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 查询成交
struct CMstQryTradeField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 成交编号
	TMstTradeIDType	TradeID;
	// 开始时间
	TMstTimeType	TradeTimeStart;
	// 结束时间
	TMstTimeType	TradeTimeEnd;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 查询投资者持仓
struct CMstQryInvestorPositionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 查询资金账户
struct CMstQryTradingAccountField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 业务类型
	TMstBizTypeType	BizType;
	// 投资者帐号
	TMstAccountIDType	AccountID;
};

// 查询投资者
struct CMstQryInvestorField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
};

// 查询交易编码
struct CMstQryTradingCodeField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 交易编码类型
	TMstClientIDTypeType	ClientIDType;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 查询投资者组
struct CMstQryInvestorGroupField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
};

// 查询合约保证金率
struct CMstQryInstrumentMarginRateField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 查询手续费率
struct CMstQryInstrumentCommissionRateField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 查询合约交易权限
struct CMstQryInstrumentTradingRightField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
};

// 查询经纪公司
struct CMstQryBrokerField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
};

// 查询交易员
struct CMstQryTraderField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
};

// 查询管理用户功能权限
struct CMstQrySuperUserFunctionField
{
	// 用户代码
	TMstUserIDType	UserID;
};

// 查询用户会话
struct CMstQryUserSessionField
{
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
};

// 查询经纪公司会员代码
struct CMstQryPartBrokerField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
};

// 查询前置状态
struct CMstQryFrontStatusField
{
	// 前置编号
	TMstFrontIDType	FrontID;
};

// 查询交易所报单
struct CMstQryExchangeOrderField
{
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
};

// 查询报单操作
struct CMstQryOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 查询交易所报单操作
struct CMstQryExchangeOrderActionField
{
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
};

// 查询管理用户
struct CMstQrySuperUserField
{
	// 用户代码
	TMstUserIDType	UserID;
};

// 查询交易所
struct CMstQryExchangeField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 查询产品
struct CMstQryProductField
{
	// 产品代码
	TMstInstrumentIDType	ProductID;
	// 产品类型
	TMstProductClassType	ProductClass;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 查询合约
struct CMstQryInstrumentField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 产品代码
	TMstInstrumentIDType	ProductID;
};

// 查询行情
struct CMstQryDepthMarketDataField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 查询经纪公司用户
struct CMstQryBrokerUserField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
};

// 查询经纪公司用户权限
struct CMstQryBrokerUserFunctionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
};

// 查询交易员报盘机
struct CMstQryTraderOfferField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
};

// 查询出入金流水
struct CMstQrySyncDepositField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 出入金流水号
	TMstDepositSeqNoType	DepositSeqNo;
};

// 查询投资者结算结果
struct CMstQrySettlementInfoField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 交易日
	TMstDateType	TradingDay;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 查询交易所保证金率
struct CMstQryExchangeMarginRateField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 查询交易所调整保证金率
struct CMstQryExchangeMarginRateAdjustField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
};

// 查询汇率
struct CMstQryExchangeRateField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 源币种
	TMstCurrencyIDType	FromCurrencyID;
	// 目标币种
	TMstCurrencyIDType	ToCurrencyID;
};

// 查询货币质押流水
struct CMstQrySyncFundMortgageField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 货币质押流水号
	TMstDepositSeqNoType	MortgageSeqNo;
};

// 查询报单
struct CMstQryHisOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 报单编号
	TMstOrderSysIDType	OrderSysID;
	// 开始时间
	TMstTimeType	InsertTimeStart;
	// 结束时间
	TMstTimeType	InsertTimeEnd;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
};

// 当前期权合约最小保证金
struct CMstOptionInstrMiniMarginField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 单位（手）期权合约最小保证金
	TMstMoneyType	MinMargin;
	// 取值方式
	TMstValueMethodType	ValueMethod;
	// 是否跟随交易所收取
	TMstBoolType	IsRelative;
};

// 当前期权合约保证金调整系数
struct CMstOptionInstrMarginAdjustField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 投机空头保证金调整系数
	TMstRatioType	SShortMarginRatioByMoney;
	// 投机空头保证金调整系数
	TMstMoneyType	SShortMarginRatioByVolume;
	// 保值空头保证金调整系数
	TMstRatioType	HShortMarginRatioByMoney;
	// 保值空头保证金调整系数
	TMstMoneyType	HShortMarginRatioByVolume;
	// 套利空头保证金调整系数
	TMstRatioType	AShortMarginRatioByMoney;
	// 套利空头保证金调整系数
	TMstMoneyType	AShortMarginRatioByVolume;
	// 是否跟随交易所收取
	TMstBoolType	IsRelative;
	// 做市商空头保证金调整系数
	TMstRatioType	MShortMarginRatioByMoney;
	// 做市商空头保证金调整系数
	TMstMoneyType	MShortMarginRatioByVolume;
};

// 当前期权合约手续费的详细内容
struct CMstOptionInstrCommRateField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 开仓手续费率
	TMstRatioType	OpenRatioByMoney;
	// 开仓手续费
	TMstRatioType	OpenRatioByVolume;
	// 平仓手续费率
	TMstRatioType	CloseRatioByMoney;
	// 平仓手续费
	TMstRatioType	CloseRatioByVolume;
	// 平今手续费率
	TMstRatioType	CloseTodayRatioByMoney;
	// 平今手续费
	TMstRatioType	CloseTodayRatioByVolume;
	// 执行手续费率
	TMstRatioType	StrikeRatioByMoney;
	// 执行手续费
	TMstRatioType	StrikeRatioByVolume;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 期权交易成本
struct CMstOptionInstrTradeCostField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 期权合约保证金不变部分
	TMstMoneyType	FixedMargin;
	// 期权合约最小保证金
	TMstMoneyType	MiniMargin;
	// 期权合约权利金
	TMstMoneyType	Royalty;
	// 交易所期权合约保证金不变部分
	TMstMoneyType	ExchFixedMargin;
	// 交易所期权合约最小保证金
	TMstMoneyType	ExchMiniMargin;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 期权交易成本查询
struct CMstQryOptionInstrTradeCostField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 期权合约报价
	TMstPriceType	InputPrice;
	// 标的价格,填0则用昨结算价
	TMstPriceType	UnderlyingPrice;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 期权手续费率查询
struct CMstQryOptionInstrCommRateField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 股指现货指数
struct CMstIndexPriceField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 指数现货收盘价
	TMstPriceType	ClosePrice;
};

// 输入的执行宣告
struct CMstInputExecOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 执行宣告引用
	TMstOrderRefType	ExecOrderRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 数量
	TMstVolumeType	Volume;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 开平标志
	TMstOffsetFlagType	OffsetFlag;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 执行类型
	TMstActionTypeType	ActionType;
	// 保留头寸申请的持仓方向
	TMstPosiDirectionType	PosiDirection;
	// 期权行权后是否保留期货头寸的标记,该字段已废弃
	TMstExecOrderPositionFlagType	ReservePositionFlag;
	// 期权行权后生成的头寸是否自动平仓
	TMstExecOrderCloseFlagType	CloseFlag;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 资金账号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 交易编码
	TMstClientIDType	ClientID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 输入执行宣告操作
struct CMstInputExecOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 执行宣告操作引用
	TMstOrderActionRefType	ExecOrderActionRef;
	// 执行宣告引用
	TMstOrderRefType	ExecOrderRef;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 执行宣告操作编号
	TMstExecOrderSysIDType	ExecOrderSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 用户代码
	TMstUserIDType	UserID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 执行宣告
struct CMstExecOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 执行宣告引用
	TMstOrderRefType	ExecOrderRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 数量
	TMstVolumeType	Volume;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 开平标志
	TMstOffsetFlagType	OffsetFlag;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 执行类型
	TMstActionTypeType	ActionType;
	// 保留头寸申请的持仓方向
	TMstPosiDirectionType	PosiDirection;
	// 期权行权后是否保留期货头寸的标记,该字段已废弃
	TMstExecOrderPositionFlagType	ReservePositionFlag;
	// 期权行权后生成的头寸是否自动平仓
	TMstExecOrderCloseFlagType	CloseFlag;
	// 本地执行宣告编号
	TMstOrderLocalIDType	ExecOrderLocalID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 执行宣告提交状态
	TMstOrderSubmitStatusType	OrderSubmitStatus;
	// 报单提示序号
	TMstSequenceNoType	NotifySequence;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 执行宣告编号
	TMstExecOrderSysIDType	ExecOrderSysID;
	// 报单日期
	TMstDateType	InsertDate;
	// 插入时间
	TMstTimeType	InsertTime;
	// 撤销时间
	TMstTimeType	CancelTime;
	// 执行结果
	TMstExecResultType	ExecResult;
	// 结算会员编号
	TMstParticipantIDType	ClearingPartID;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// 状态信息
	TMstErrorMsgType	StatusMsg;
	// 操作用户代码
	TMstUserIDType	ActiveUserID;
	// 经纪公司报单编号
	TMstSequenceNoType	BrokerExecOrderSeq;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 资金账号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 执行宣告操作
struct CMstExecOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 执行宣告操作引用
	TMstOrderActionRefType	ExecOrderActionRef;
	// 执行宣告引用
	TMstOrderRefType	ExecOrderRef;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 执行宣告操作编号
	TMstExecOrderSysIDType	ExecOrderSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 操作日期
	TMstDateType	ActionDate;
	// 操作时间
	TMstTimeType	ActionTime;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 本地执行宣告编号
	TMstOrderLocalIDType	ExecOrderLocalID;
	// 操作本地编号
	TMstOrderLocalIDType	ActionLocalID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 报单操作状态
	TMstOrderActionStatusType	OrderActionStatus;
	// 用户代码
	TMstUserIDType	UserID;
	// 执行类型
	TMstActionTypeType	ActionType;
	// 状态信息
	TMstErrorMsgType	StatusMsg;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 执行宣告查询
struct CMstQryExecOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 执行宣告编号
	TMstExecOrderSysIDType	ExecOrderSysID;
	// 开始时间
	TMstTimeType	InsertTimeStart;
	// 结束时间
	TMstTimeType	InsertTimeEnd;
};

// 交易所执行宣告信息
struct CMstExchangeExecOrderField
{
	// 数量
	TMstVolumeType	Volume;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 开平标志
	TMstOffsetFlagType	OffsetFlag;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 执行类型
	TMstActionTypeType	ActionType;
	// 保留头寸申请的持仓方向
	TMstPosiDirectionType	PosiDirection;
	// 期权行权后是否保留期货头寸的标记,该字段已废弃
	TMstExecOrderPositionFlagType	ReservePositionFlag;
	// 期权行权后生成的头寸是否自动平仓
	TMstExecOrderCloseFlagType	CloseFlag;
	// 本地执行宣告编号
	TMstOrderLocalIDType	ExecOrderLocalID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 执行宣告提交状态
	TMstOrderSubmitStatusType	OrderSubmitStatus;
	// 报单提示序号
	TMstSequenceNoType	NotifySequence;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 执行宣告编号
	TMstExecOrderSysIDType	ExecOrderSysID;
	// 报单日期
	TMstDateType	InsertDate;
	// 插入时间
	TMstTimeType	InsertTime;
	// 撤销时间
	TMstTimeType	CancelTime;
	// 执行结果
	TMstExecResultType	ExecResult;
	// 结算会员编号
	TMstParticipantIDType	ClearingPartID;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 交易所执行宣告查询
struct CMstQryExchangeExecOrderField
{
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
};

// 执行宣告操作查询
struct CMstQryExecOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 交易所执行宣告操作
struct CMstExchangeExecOrderActionField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 执行宣告操作编号
	TMstExecOrderSysIDType	ExecOrderSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 操作日期
	TMstDateType	ActionDate;
	// 操作时间
	TMstTimeType	ActionTime;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 本地执行宣告编号
	TMstOrderLocalIDType	ExecOrderLocalID;
	// 操作本地编号
	TMstOrderLocalIDType	ActionLocalID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 报单操作状态
	TMstOrderActionStatusType	OrderActionStatus;
	// 用户代码
	TMstUserIDType	UserID;
	// 执行类型
	TMstActionTypeType	ActionType;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 数量
	TMstVolumeType	Volume;
};

// 交易所执行宣告操作查询
struct CMstQryExchangeExecOrderActionField
{
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
};

// 错误执行宣告
struct CMstErrExecOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 执行宣告引用
	TMstOrderRefType	ExecOrderRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 数量
	TMstVolumeType	Volume;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 开平标志
	TMstOffsetFlagType	OffsetFlag;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 执行类型
	TMstActionTypeType	ActionType;
	// 保留头寸申请的持仓方向
	TMstPosiDirectionType	PosiDirection;
	// 期权行权后是否保留期货头寸的标记,该字段已废弃
	TMstExecOrderPositionFlagType	ReservePositionFlag;
	// 期权行权后生成的头寸是否自动平仓
	TMstExecOrderCloseFlagType	CloseFlag;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 资金账号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 交易编码
	TMstClientIDType	ClientID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
};

// 查询错误执行宣告
struct CMstQryErrExecOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
};

// 错误执行宣告操作
struct CMstErrExecOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 执行宣告操作引用
	TMstOrderActionRefType	ExecOrderActionRef;
	// 执行宣告引用
	TMstOrderRefType	ExecOrderRef;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 执行宣告操作编号
	TMstExecOrderSysIDType	ExecOrderSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 用户代码
	TMstUserIDType	UserID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
};

// 查询错误执行宣告操作
struct CMstQryErrExecOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
};

// 投资者期权合约交易权限
struct CMstOptionInstrTradingRightField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 买卖方向
	TMstDirectionType	Direction;
	// 交易权限
	TMstTradingRightType	TradingRight;
};

// 查询期权合约交易权限
struct CMstQryOptionInstrTradingRightField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 买卖方向
	TMstDirectionType	Direction;
};

// 输入的询价
struct CMstInputForQuoteField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 询价引用
	TMstOrderRefType	ForQuoteRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 询价
struct CMstForQuoteField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 询价引用
	TMstOrderRefType	ForQuoteRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 本地询价编号
	TMstOrderLocalIDType	ForQuoteLocalID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 报单日期
	TMstDateType	InsertDate;
	// 插入时间
	TMstTimeType	InsertTime;
	// 询价状态
	TMstForQuoteStatusType	ForQuoteStatus;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 状态信息
	TMstErrorMsgType	StatusMsg;
	// 操作用户代码
	TMstUserIDType	ActiveUserID;
	// 经纪公司询价编号
	TMstSequenceNoType	BrokerForQutoSeq;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 询价查询
struct CMstQryForQuoteField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 开始时间
	TMstTimeType	InsertTimeStart;
	// 结束时间
	TMstTimeType	InsertTimeEnd;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 交易所询价信息
struct CMstExchangeForQuoteField
{
	// 本地询价编号
	TMstOrderLocalIDType	ForQuoteLocalID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 报单日期
	TMstDateType	InsertDate;
	// 插入时间
	TMstTimeType	InsertTime;
	// 询价状态
	TMstForQuoteStatusType	ForQuoteStatus;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 交易所询价查询
struct CMstQryExchangeForQuoteField
{
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
};

// 输入的报价
struct CMstInputQuoteField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 报价引用
	TMstOrderRefType	QuoteRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 卖价格
	TMstPriceType	AskPrice;
	// 买价格
	TMstPriceType	BidPrice;
	// 卖数量
	TMstVolumeType	AskVolume;
	// 买数量
	TMstVolumeType	BidVolume;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 卖开平标志
	TMstOffsetFlagType	AskOffsetFlag;
	// 买开平标志
	TMstOffsetFlagType	BidOffsetFlag;
	// 卖投机套保标志
	TMstHedgeFlagType	AskHedgeFlag;
	// 买投机套保标志
	TMstHedgeFlagType	BidHedgeFlag;
	// 衍生卖报单引用
	TMstOrderRefType	AskOrderRef;
	// 衍生买报单引用
	TMstOrderRefType	BidOrderRef;
	// 应价编号
	TMstOrderSysIDType	ForQuoteSysID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 交易编码
	TMstClientIDType	ClientID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 输入报价操作
struct CMstInputQuoteActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 报价操作引用
	TMstOrderActionRefType	QuoteActionRef;
	// 报价引用
	TMstOrderRefType	QuoteRef;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 报价操作编号
	TMstOrderSysIDType	QuoteSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 用户代码
	TMstUserIDType	UserID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 交易编码
	TMstClientIDType	ClientID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 报价
struct CMstQuoteField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 报价引用
	TMstOrderRefType	QuoteRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 卖价格
	TMstPriceType	AskPrice;
	// 买价格
	TMstPriceType	BidPrice;
	// 卖数量
	TMstVolumeType	AskVolume;
	// 买数量
	TMstVolumeType	BidVolume;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 卖开平标志
	TMstOffsetFlagType	AskOffsetFlag;
	// 买开平标志
	TMstOffsetFlagType	BidOffsetFlag;
	// 卖投机套保标志
	TMstHedgeFlagType	AskHedgeFlag;
	// 买投机套保标志
	TMstHedgeFlagType	BidHedgeFlag;
	// 本地报价编号
	TMstOrderLocalIDType	QuoteLocalID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 报价提示序号
	TMstSequenceNoType	NotifySequence;
	// 报价提交状态
	TMstOrderSubmitStatusType	OrderSubmitStatus;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 报价编号
	TMstOrderSysIDType	QuoteSysID;
	// 报单日期
	TMstDateType	InsertDate;
	// 插入时间
	TMstTimeType	InsertTime;
	// 撤销时间
	TMstTimeType	CancelTime;
	// 报价状态
	TMstOrderStatusType	QuoteStatus;
	// 结算会员编号
	TMstParticipantIDType	ClearingPartID;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// 卖方报单编号
	TMstOrderSysIDType	AskOrderSysID;
	// 买方报单编号
	TMstOrderSysIDType	BidOrderSysID;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// 状态信息
	TMstErrorMsgType	StatusMsg;
	// 操作用户代码
	TMstUserIDType	ActiveUserID;
	// 经纪公司报价编号
	TMstSequenceNoType	BrokerQuoteSeq;
	// 衍生卖报单引用
	TMstOrderRefType	AskOrderRef;
	// 衍生买报单引用
	TMstOrderRefType	BidOrderRef;
	// 应价编号
	TMstOrderSysIDType	ForQuoteSysID;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 资金账号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 报价操作
struct CMstQuoteActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 报价操作引用
	TMstOrderActionRefType	QuoteActionRef;
	// 报价引用
	TMstOrderRefType	QuoteRef;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 报价操作编号
	TMstOrderSysIDType	QuoteSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 操作日期
	TMstDateType	ActionDate;
	// 操作时间
	TMstTimeType	ActionTime;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 本地报价编号
	TMstOrderLocalIDType	QuoteLocalID;
	// 操作本地编号
	TMstOrderLocalIDType	ActionLocalID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 报单操作状态
	TMstOrderActionStatusType	OrderActionStatus;
	// 用户代码
	TMstUserIDType	UserID;
	// 状态信息
	TMstErrorMsgType	StatusMsg;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 报价查询
struct CMstQryQuoteField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 报价编号
	TMstOrderSysIDType	QuoteSysID;
	// 开始时间
	TMstTimeType	InsertTimeStart;
	// 结束时间
	TMstTimeType	InsertTimeEnd;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 交易所报价信息
struct CMstExchangeQuoteField
{
	// 卖价格
	TMstPriceType	AskPrice;
	// 买价格
	TMstPriceType	BidPrice;
	// 卖数量
	TMstVolumeType	AskVolume;
	// 买数量
	TMstVolumeType	BidVolume;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 卖开平标志
	TMstOffsetFlagType	AskOffsetFlag;
	// 买开平标志
	TMstOffsetFlagType	BidOffsetFlag;
	// 卖投机套保标志
	TMstHedgeFlagType	AskHedgeFlag;
	// 买投机套保标志
	TMstHedgeFlagType	BidHedgeFlag;
	// 本地报价编号
	TMstOrderLocalIDType	QuoteLocalID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 报价提示序号
	TMstSequenceNoType	NotifySequence;
	// 报价提交状态
	TMstOrderSubmitStatusType	OrderSubmitStatus;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 报价编号
	TMstOrderSysIDType	QuoteSysID;
	// 报单日期
	TMstDateType	InsertDate;
	// 插入时间
	TMstTimeType	InsertTime;
	// 撤销时间
	TMstTimeType	CancelTime;
	// 报价状态
	TMstOrderStatusType	QuoteStatus;
	// 结算会员编号
	TMstParticipantIDType	ClearingPartID;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// 卖方报单编号
	TMstOrderSysIDType	AskOrderSysID;
	// 买方报单编号
	TMstOrderSysIDType	BidOrderSysID;
	// 应价编号
	TMstOrderSysIDType	ForQuoteSysID;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 交易所报价查询
struct CMstQryExchangeQuoteField
{
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
};

// 报价操作查询
struct CMstQryQuoteActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 交易所报价操作
struct CMstExchangeQuoteActionField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 报价操作编号
	TMstOrderSysIDType	QuoteSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 操作日期
	TMstDateType	ActionDate;
	// 操作时间
	TMstTimeType	ActionTime;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 本地报价编号
	TMstOrderLocalIDType	QuoteLocalID;
	// 操作本地编号
	TMstOrderLocalIDType	ActionLocalID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 报单操作状态
	TMstOrderActionStatusType	OrderActionStatus;
	// 用户代码
	TMstUserIDType	UserID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 交易所报价操作查询
struct CMstQryExchangeQuoteActionField
{
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
};

// 期权合约delta值
struct CMstOptionInstrDeltaField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// Delta值
	TMstRatioType	Delta;
};

// 发给做市商的询价请求
struct CMstForQuoteRspField
{
	// 交易日
	TMstDateType	TradingDay;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 询价编号
	TMstOrderSysIDType	ForQuoteSysID;
	// 询价时间
	TMstTimeType	ForQuoteTime;
	// 业务日期
	TMstDateType	ActionDay;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 当前期权合约执行偏移值的详细内容
struct CMstStrikeOffsetField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 执行偏移值
	TMstMoneyType	Offset;
	// 执行偏移类型
	TMstStrikeOffsetTypeType	OffsetType;
};

// 期权执行偏移值查询
struct CMstQryStrikeOffsetField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
};

// 输入批量报单操作
struct CMstInputBatchOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 报单操作引用
	TMstOrderActionRefType	OrderActionRef;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 用户代码
	TMstUserIDType	UserID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 批量报单操作
struct CMstBatchOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 报单操作引用
	TMstOrderActionRefType	OrderActionRef;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 操作日期
	TMstDateType	ActionDate;
	// 操作时间
	TMstTimeType	ActionTime;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 操作本地编号
	TMstOrderLocalIDType	ActionLocalID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 报单操作状态
	TMstOrderActionStatusType	OrderActionStatus;
	// 用户代码
	TMstUserIDType	UserID;
	// 状态信息
	TMstErrorMsgType	StatusMsg;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 交易所批量报单操作
struct CMstExchangeBatchOrderActionField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 操作日期
	TMstDateType	ActionDate;
	// 操作时间
	TMstTimeType	ActionTime;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 操作本地编号
	TMstOrderLocalIDType	ActionLocalID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 报单操作状态
	TMstOrderActionStatusType	OrderActionStatus;
	// 用户代码
	TMstUserIDType	UserID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 查询批量报单操作
struct CMstQryBatchOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 组合合约安全系数
struct CMstCombInstrumentGuardField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 
	TMstRatioType	GuarantRatio;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 组合合约安全系数查询
struct CMstQryCombInstrumentGuardField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 输入的申请组合
struct CMstInputCombActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 组合引用
	TMstOrderRefType	CombActionRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 买卖方向
	TMstDirectionType	Direction;
	// 数量
	TMstVolumeType	Volume;
	// 组合指令方向
	TMstCombDirectionType	CombDirection;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 申请组合
struct CMstCombActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 组合引用
	TMstOrderRefType	CombActionRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 买卖方向
	TMstDirectionType	Direction;
	// 数量
	TMstVolumeType	Volume;
	// 组合指令方向
	TMstCombDirectionType	CombDirection;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 本地申请组合编号
	TMstOrderLocalIDType	ActionLocalID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 组合状态
	TMstOrderActionStatusType	ActionStatus;
	// 报单提示序号
	TMstSequenceNoType	NotifySequence;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// 状态信息
	TMstErrorMsgType	StatusMsg;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
	// 组合编号
	TMstTradeIDType	ComTradeID;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 申请组合查询
struct CMstQryCombActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 交易所申请组合信息
struct CMstExchangeCombActionField
{
	// 买卖方向
	TMstDirectionType	Direction;
	// 数量
	TMstVolumeType	Volume;
	// 组合指令方向
	TMstCombDirectionType	CombDirection;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 本地申请组合编号
	TMstOrderLocalIDType	ActionLocalID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 组合状态
	TMstOrderActionStatusType	ActionStatus;
	// 报单提示序号
	TMstSequenceNoType	NotifySequence;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
	// 组合编号
	TMstTradeIDType	ComTradeID;
	// 营业部编号
	TMstBranchIDType	BranchID;
};

// 交易所申请组合查询
struct CMstQryExchangeCombActionField
{
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
};

// 产品报价汇率
struct CMstProductExchRateField
{
	// 产品代码
	TMstInstrumentIDType	ProductID;
	// 报价币种类型
	TMstCurrencyIDType	QuoteCurrencyID;
	// 汇率
	TMstExchangeRateType	ExchangeRate;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 产品报价汇率查询
struct CMstQryProductExchRateField
{
	// 产品代码
	TMstInstrumentIDType	ProductID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 查询询价价差参数
struct CMstQryForQuoteParamField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 询价价差参数
struct CMstForQuoteParamField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 最新价
	TMstPriceType	LastPrice;
	// 价差
	TMstPriceType	PriceInterval;
};

// 当前做市商期权合约手续费的详细内容
struct CMstMMOptionInstrCommRateField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 开仓手续费率
	TMstRatioType	OpenRatioByMoney;
	// 开仓手续费
	TMstRatioType	OpenRatioByVolume;
	// 平仓手续费率
	TMstRatioType	CloseRatioByMoney;
	// 平仓手续费
	TMstRatioType	CloseRatioByVolume;
	// 平今手续费率
	TMstRatioType	CloseTodayRatioByMoney;
	// 平今手续费
	TMstRatioType	CloseTodayRatioByVolume;
	// 执行手续费率
	TMstRatioType	StrikeRatioByMoney;
	// 执行手续费
	TMstRatioType	StrikeRatioByVolume;
};

// 做市商期权手续费率查询
struct CMstQryMMOptionInstrCommRateField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
};

// 做市商合约手续费率
struct CMstMMInstrumentCommissionRateField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 开仓手续费率
	TMstRatioType	OpenRatioByMoney;
	// 开仓手续费
	TMstRatioType	OpenRatioByVolume;
	// 平仓手续费率
	TMstRatioType	CloseRatioByMoney;
	// 平仓手续费
	TMstRatioType	CloseRatioByVolume;
	// 平今手续费率
	TMstRatioType	CloseTodayRatioByMoney;
	// 平今手续费
	TMstRatioType	CloseTodayRatioByVolume;
};

// 查询做市商合约手续费率
struct CMstQryMMInstrumentCommissionRateField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
};

// 当前报单手续费的详细内容
struct CMstInstrumentOrderCommRateField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 报单手续费
	TMstRatioType	OrderCommByVolume;
	// 撤单手续费
	TMstRatioType	OrderActionCommByVolume;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 报单手续费率查询
struct CMstQryInstrumentOrderCommRateField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
};

// 交易参数
struct CMstTradeParamField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 参数代码
	TMstTradeParamIDType	TradeParamID;
	// 参数代码值
	TMstSettlementParamValueType	TradeParamValue;
	// 备注
	TMstMemoType	Memo;
};

// 合约保证金率调整
struct CMstInstrumentMarginRateULField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 多头保证金率
	TMstRatioType	LongMarginRatioByMoney;
	// 多头保证金费
	TMstMoneyType	LongMarginRatioByVolume;
	// 空头保证金率
	TMstRatioType	ShortMarginRatioByMoney;
	// 空头保证金费
	TMstMoneyType	ShortMarginRatioByVolume;
};

// 期货持仓限制参数
struct CMstFutureLimitPosiParamField
{
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 产品代码
	TMstInstrumentIDType	ProductID;
	// 当日投机开仓数量限制
	TMstVolumeType	SpecOpenVolume;
	// 当日套利开仓数量限制
	TMstVolumeType	ArbiOpenVolume;
	// 当日投机+套利开仓数量限制
	TMstVolumeType	OpenVolume;
};

// 禁止登录IP
struct CMstLoginForbiddenIPField
{
	// IP地址
	TMstIPAddressType	IPAddress;
};

// IP列表
struct CMstIPListField
{
	// IP地址
	TMstIPAddressType	IPAddress;
	// 是否白名单
	TMstBoolType	IsWhite;
};

// 输入的期权自对冲
struct CMstInputOptionSelfCloseField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 期权自对冲引用
	TMstOrderRefType	OptionSelfCloseRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 数量
	TMstVolumeType	Volume;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 期权行权的头寸是否自对冲
	TMstOptSelfCloseFlagType	OptSelfCloseFlag;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 资金账号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 交易编码
	TMstClientIDType	ClientID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 输入期权自对冲操作
struct CMstInputOptionSelfCloseActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 期权自对冲操作引用
	TMstOrderActionRefType	OptionSelfCloseActionRef;
	// 期权自对冲引用
	TMstOrderRefType	OptionSelfCloseRef;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 期权自对冲操作编号
	TMstOrderSysIDType	OptionSelfCloseSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 用户代码
	TMstUserIDType	UserID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 期权自对冲
struct CMstOptionSelfCloseField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 期权自对冲引用
	TMstOrderRefType	OptionSelfCloseRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 数量
	TMstVolumeType	Volume;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 期权行权的头寸是否自对冲
	TMstOptSelfCloseFlagType	OptSelfCloseFlag;
	// 本地期权自对冲编号
	TMstOrderLocalIDType	OptionSelfCloseLocalID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 期权自对冲提交状态
	TMstOrderSubmitStatusType	OrderSubmitStatus;
	// 报单提示序号
	TMstSequenceNoType	NotifySequence;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 期权自对冲编号
	TMstOrderSysIDType	OptionSelfCloseSysID;
	// 报单日期
	TMstDateType	InsertDate;
	// 插入时间
	TMstTimeType	InsertTime;
	// 撤销时间
	TMstTimeType	CancelTime;
	// 自对冲结果
	TMstExecResultType	ExecResult;
	// 结算会员编号
	TMstParticipantIDType	ClearingPartID;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// 状态信息
	TMstErrorMsgType	StatusMsg;
	// 操作用户代码
	TMstUserIDType	ActiveUserID;
	// 经纪公司报单编号
	TMstSequenceNoType	BrokerOptionSelfCloseSeq;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 资金账号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 期权自对冲操作
struct CMstOptionSelfCloseActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 期权自对冲操作引用
	TMstOrderActionRefType	OptionSelfCloseActionRef;
	// 期权自对冲引用
	TMstOrderRefType	OptionSelfCloseRef;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 期权自对冲操作编号
	TMstOrderSysIDType	OptionSelfCloseSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 操作日期
	TMstDateType	ActionDate;
	// 操作时间
	TMstTimeType	ActionTime;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 本地期权自对冲编号
	TMstOrderLocalIDType	OptionSelfCloseLocalID;
	// 操作本地编号
	TMstOrderLocalIDType	ActionLocalID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 报单操作状态
	TMstOrderActionStatusType	OrderActionStatus;
	// 用户代码
	TMstUserIDType	UserID;
	// 状态信息
	TMstErrorMsgType	StatusMsg;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 期权自对冲查询
struct CMstQryOptionSelfCloseField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 期权自对冲编号
	TMstOrderSysIDType	OptionSelfCloseSysID;
	// 开始时间
	TMstTimeType	InsertTimeStart;
	// 结束时间
	TMstTimeType	InsertTimeEnd;
};

// 交易所期权自对冲信息
struct CMstExchangeOptionSelfCloseField
{
	// 数量
	TMstVolumeType	Volume;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 期权行权的头寸是否自对冲
	TMstOptSelfCloseFlagType	OptSelfCloseFlag;
	// 本地期权自对冲编号
	TMstOrderLocalIDType	OptionSelfCloseLocalID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 期权自对冲提交状态
	TMstOrderSubmitStatusType	OrderSubmitStatus;
	// 报单提示序号
	TMstSequenceNoType	NotifySequence;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 期权自对冲编号
	TMstOrderSysIDType	OptionSelfCloseSysID;
	// 报单日期
	TMstDateType	InsertDate;
	// 插入时间
	TMstTimeType	InsertTime;
	// 撤销时间
	TMstTimeType	CancelTime;
	// 自对冲结果
	TMstExecResultType	ExecResult;
	// 结算会员编号
	TMstParticipantIDType	ClearingPartID;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 期权自对冲操作查询
struct CMstQryOptionSelfCloseActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 交易所期权自对冲操作
struct CMstExchangeOptionSelfCloseActionField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 期权自对冲操作编号
	TMstOrderSysIDType	OptionSelfCloseSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 操作日期
	TMstDateType	ActionDate;
	// 操作时间
	TMstTimeType	ActionTime;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 本地期权自对冲编号
	TMstOrderLocalIDType	OptionSelfCloseLocalID;
	// 操作本地编号
	TMstOrderLocalIDType	ActionLocalID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 报单操作状态
	TMstOrderActionStatusType	OrderActionStatus;
	// 用户代码
	TMstUserIDType	UserID;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 期权行权的头寸是否自对冲
	TMstOptSelfCloseFlagType	OptSelfCloseFlag;
};

// 延时换汇同步
struct CMstSyncDelaySwapField
{
	// 换汇流水号
	TMstDepositSeqNoType	DelaySwapSeqNo;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 源币种
	TMstCurrencyIDType	FromCurrencyID;
	// 源金额
	TMstMoneyType	FromAmount;
	// 源换汇冻结金额(可用冻结)
	TMstMoneyType	FromFrozenSwap;
	// 源剩余换汇额度(可提冻结)
	TMstMoneyType	FromRemainSwap;
	// 目标币种
	TMstCurrencyIDType	ToCurrencyID;
	// 目标金额
	TMstMoneyType	ToAmount;
};

// 查询延时换汇同步
struct CMstQrySyncDelaySwapField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 延时换汇流水号
	TMstDepositSeqNoType	DelaySwapSeqNo;
};

// 投资单元
struct CMstInvestUnitField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 投资者单元名称
	TMstPartyNameType	InvestorUnitName;
	// 投资者分组代码
	TMstInvestorIDType	InvestorGroupID;
	// 手续费率模板代码
	TMstInvestorIDType	CommModelID;
	// 保证金率模板代码
	TMstInvestorIDType	MarginModelID;
	// 资金账号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 查询投资单元
struct CMstQryInvestUnitField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 二级代理商资金校验模式
struct CMstSecAgentCheckModeField
{
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 币种
	TMstCurrencyIDType	CurrencyID;
	// 境外中介机构资金帐号
	TMstAccountIDType	BrokerSecAgentID;
	// 是否需要校验自己的资金账户
	TMstBoolType	CheckSelfAccount;
};

// 二级代理商信息
struct CMstSecAgentTradeInfoField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 境外中介机构资金帐号
	TMstAccountIDType	BrokerSecAgentID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 二级代理商姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 市场行情
struct CMstMarketDataField
{
	// 交易日
	TMstDateType	TradingDay;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 最新价
	TMstPriceType	LastPrice;
	// 上次结算价
	TMstPriceType	PreSettlementPrice;
	// 昨收盘
	TMstPriceType	PreClosePrice;
	// 昨持仓量
	TMstLargeVolumeType	PreOpenInterest;
	// 今开盘
	TMstPriceType	OpenPrice;
	// 最高价
	TMstPriceType	HighestPrice;
	// 最低价
	TMstPriceType	LowestPrice;
	// 数量
	TMstVolumeType	Volume;
	// 成交金额
	TMstMoneyType	Turnover;
	// 持仓量
	TMstLargeVolumeType	OpenInterest;
	// 今收盘
	TMstPriceType	ClosePrice;
	// 本次结算价
	TMstPriceType	SettlementPrice;
	// 涨停板价
	TMstPriceType	UpperLimitPrice;
	// 跌停板价
	TMstPriceType	LowerLimitPrice;
	// 昨虚实度
	TMstRatioType	PreDelta;
	// 今虚实度
	TMstRatioType	CurrDelta;
	// 最后修改时间
	TMstTimeType	UpdateTime;
	// 最后修改毫秒
	TMstMillisecType	UpdateMillisec;
	// 业务日期
	TMstDateType	ActionDay;
};

// 行情基础属性
struct CMstMarketDataBaseField
{
	// 交易日
	TMstDateType	TradingDay;
	// 上次结算价
	TMstPriceType	PreSettlementPrice;
	// 昨收盘
	TMstPriceType	PreClosePrice;
	// 昨持仓量
	TMstLargeVolumeType	PreOpenInterest;
	// 昨虚实度
	TMstRatioType	PreDelta;
};

// 行情静态属性
struct CMstMarketDataStaticField
{
	// 今开盘
	TMstPriceType	OpenPrice;
	// 最高价
	TMstPriceType	HighestPrice;
	// 最低价
	TMstPriceType	LowestPrice;
	// 今收盘
	TMstPriceType	ClosePrice;
	// 涨停板价
	TMstPriceType	UpperLimitPrice;
	// 跌停板价
	TMstPriceType	LowerLimitPrice;
	// 本次结算价
	TMstPriceType	SettlementPrice;
	// 今虚实度
	TMstRatioType	CurrDelta;
};

// 行情最新成交属性
struct CMstMarketDataLastMatchField
{
	// 最新价
	TMstPriceType	LastPrice;
	// 数量
	TMstVolumeType	Volume;
	// 成交金额
	TMstMoneyType	Turnover;
	// 持仓量
	TMstLargeVolumeType	OpenInterest;
};

// 行情最优价属性
struct CMstMarketDataBestPriceField
{
	// 申买价一
	TMstPriceType	BidPrice1;
	// 申买量一
	TMstVolumeType	BidVolume1;
	// 申卖价一
	TMstPriceType	AskPrice1;
	// 申卖量一
	TMstVolumeType	AskVolume1;
};

// 行情申买二、三属性
struct CMstMarketDataBid23Field
{
	// 申买价二
	TMstPriceType	BidPrice2;
	// 申买量二
	TMstVolumeType	BidVolume2;
	// 申买价三
	TMstPriceType	BidPrice3;
	// 申买量三
	TMstVolumeType	BidVolume3;
};

// 行情申卖二、三属性
struct CMstMarketDataAsk23Field
{
	// 申卖价二
	TMstPriceType	AskPrice2;
	// 申卖量二
	TMstVolumeType	AskVolume2;
	// 申卖价三
	TMstPriceType	AskPrice3;
	// 申卖量三
	TMstVolumeType	AskVolume3;
};

// 行情申买四、五属性
struct CMstMarketDataBid45Field
{
	// 申买价四
	TMstPriceType	BidPrice4;
	// 申买量四
	TMstVolumeType	BidVolume4;
	// 申买价五
	TMstPriceType	BidPrice5;
	// 申买量五
	TMstVolumeType	BidVolume5;
};

// 行情申卖四、五属性
struct CMstMarketDataAsk45Field
{
	// 申卖价四
	TMstPriceType	AskPrice4;
	// 申卖量四
	TMstVolumeType	AskVolume4;
	// 申卖价五
	TMstPriceType	AskPrice5;
	// 申卖量五
	TMstVolumeType	AskVolume5;
};

// 行情更新时间属性
struct CMstMarketDataUpdateTimeField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 最后修改时间
	TMstTimeType	UpdateTime;
	// 最后修改毫秒
	TMstMillisecType	UpdateMillisec;
	// 业务日期
	TMstDateType	ActionDay;
};

// 行情交易所代码属性
struct CMstMarketDataExchangeField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 指定的合约
struct CMstSpecificInstrumentField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
};

// 合约状态
struct CMstInstrumentStatusField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 结算组代码
	TMstSettlementGroupIDType	SettlementGroupID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 合约交易状态
	TMstInstrumentStatusType	InstrumentStatus;
	// 交易阶段编号
	TMstTradingSegmentSNType	TradingSegmentSN;
	// 进入本状态时间
	TMstTimeType	EnterTime;
	// 进入本状态原因
	TMstInstStatusEnterReasonType	EnterReason;
};

// 查询合约状态
struct CMstQryInstrumentStatusField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
};

// 投资者账户
struct CMstInvestorAccountField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 浮动盈亏算法
struct CMstPositionProfitAlgorithmField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 盈亏算法
	TMstAlgorithmType	Algorithm;
	// 备注
	TMstMemoType	Memo;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 会员资金折扣
struct CMstDiscountField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 资金折扣比例
	TMstRatioType	Discount;
};

// 查询转帐银行
struct CMstQryTransferBankField
{
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分中心代码
	TMstBankBrchIDType	BankBrchID;
};

// 转帐银行
struct CMstTransferBankField
{
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分中心代码
	TMstBankBrchIDType	BankBrchID;
	// 银行名称
	TMstBankNameType	BankName;
	// 是否活跃
	TMstBoolType	IsActive;
};

// 查询投资者持仓明细
struct CMstQryInvestorPositionDetailField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 投资者持仓明细
struct CMstInvestorPositionDetailField
{
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 买卖
	TMstDirectionType	Direction;
	// 开仓日期
	TMstDateType	OpenDate;
	// 成交编号
	TMstTradeIDType	TradeID;
	// 数量
	TMstVolumeType	Volume;
	// 开仓价
	TMstPriceType	OpenPrice;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 成交类型
	TMstTradeTypeType	TradeType;
	// 组合合约代码
	TMstInstrumentIDType	CombInstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 逐日盯市平仓盈亏
	TMstMoneyType	CloseProfitByDate;
	// 逐笔对冲平仓盈亏
	TMstMoneyType	CloseProfitByTrade;
	// 逐日盯市持仓盈亏
	TMstMoneyType	PositionProfitByDate;
	// 逐笔对冲持仓盈亏
	TMstMoneyType	PositionProfitByTrade;
	// 投资者保证金
	TMstMoneyType	Margin;
	// 交易所保证金
	TMstMoneyType	ExchMargin;
	// 保证金率
	TMstRatioType	MarginRateByMoney;
	// 保证金率(按手数)
	TMstRatioType	MarginRateByVolume;
	// 昨结算价
	TMstPriceType	LastSettlementPrice;
	// 结算价
	TMstPriceType	SettlementPrice;
	// 平仓量
	TMstVolumeType	CloseVolume;
	// 平仓金额
	TMstMoneyType	CloseAmount;
	// 按照时间顺序平仓的笔数,大商所专用
	TMstVolumeType	TimeFirstVolume;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 资金账户口令域
struct CMstTradingAccountPasswordField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 密码
	TMstPasswordType	Password;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 交易所行情报盘机
struct CMstMDTraderOfferField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 密码
	TMstPasswordType	Password;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 本地报单编号
	TMstOrderLocalIDType	OrderLocalID;
	// 交易所交易员连接状态
	TMstTraderConnectStatusType	TraderConnectStatus;
	// 发出连接请求的日期
	TMstDateType	ConnectRequestDate;
	// 发出连接请求的时间
	TMstTimeType	ConnectRequestTime;
	// 上次报告日期
	TMstDateType	LastReportDate;
	// 上次报告时间
	TMstTimeType	LastReportTime;
	// 完成连接日期
	TMstDateType	ConnectDate;
	// 完成连接时间
	TMstTimeType	ConnectTime;
	// 启动日期
	TMstDateType	StartDate;
	// 启动时间
	TMstTimeType	StartTime;
	// 交易日
	TMstDateType	TradingDay;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 本席位最大成交编号
	TMstTradeIDType	MaxTradeID;
	// 本席位最大报单备拷
	TMstReturnCodeType	MaxOrderMessageReference;
};

// 查询行情报盘机
struct CMstQryMDTraderOfferField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
};

// 查询客户通知
struct CMstQryNoticeField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
};

// 客户通知
struct CMstNoticeField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 消息正文
	TMstContentType	Content;
	// 经纪公司通知内容序列号
	TMstSequenceLabelType	SequenceLabel;
};

// 用户权限
struct CMstUserRightField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 客户权限类型
	TMstUserRightTypeType	UserRightType;
	// 是否禁止
	TMstBoolType	IsForbidden;
};

// 查询结算信息确认域
struct CMstQrySettlementInfoConfirmField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 装载结算信息
struct CMstLoadSettlementInfoField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
};

// 经纪公司可提资金算法表
struct CMstBrokerWithdrawAlgorithmField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 可提资金算法
	TMstAlgorithmType	WithdrawAlgorithm;
	// 资金使用率
	TMstRatioType	UsingRatio;
	// 可提是否包含平仓盈利
	TMstIncludeCloseProfitType	IncludeCloseProfit;
	// 本日无仓且无成交客户是否受可提比例限制
	TMstAllWithoutTradeType	AllWithoutTrade;
	// 可用是否包含平仓盈利
	TMstIncludeCloseProfitType	AvailIncludeCloseProfit;
	// 是否启用用户事件
	TMstBoolType	IsBrokerUserEvent;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 货币质押比率
	TMstRatioType	FundMortgageRatio;
	// 权益算法
	TMstBalanceAlgorithmType	BalanceAlgorithm;
};

// 资金账户口令变更域
struct CMstTradingAccountPasswordUpdateV1Field
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 原来的口令
	TMstPasswordType	OldPassword;
	// 新的口令
	TMstPasswordType	NewPassword;
};

// 资金账户口令变更域
struct CMstTradingAccountPasswordUpdateField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 原来的口令
	TMstPasswordType	OldPassword;
	// 新的口令
	TMstPasswordType	NewPassword;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 查询组合合约分腿
struct CMstQryCombinationLegField
{
	// 组合合约代码
	TMstInstrumentIDType	CombInstrumentID;
	// 单腿编号
	TMstLegIDType	LegID;
	// 单腿合约代码
	TMstInstrumentIDType	LegInstrumentID;
};

// 查询组合合约分腿
struct CMstQrySyncStatusField
{
	// 交易日
	TMstDateType	TradingDay;
};

// 组合交易合约的单腿
struct CMstCombinationLegField
{
	// 组合合约代码
	TMstInstrumentIDType	CombInstrumentID;
	// 单腿编号
	TMstLegIDType	LegID;
	// 单腿合约代码
	TMstInstrumentIDType	LegInstrumentID;
	// 买卖方向
	TMstDirectionType	Direction;
	// 单腿乘数
	TMstLegMultipleType	LegMultiple;
	// 派生层数
	TMstImplyLevelType	ImplyLevel;
};

// 数据同步状态
struct CMstSyncStatusField
{
	// 交易日
	TMstDateType	TradingDay;
	// 数据同步状态
	TMstDataSyncStatusType	DataSyncStatus;
};

// 查询联系人
struct CMstQryLinkManField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
};

// 联系人
struct CMstLinkManField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 联系人类型
	TMstPersonTypeType	PersonType;
	// 证件类型
	TMstIdCardTypeType	IdentifiedCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 名称
	TMstPartyNameType	PersonName;
	// 联系电话
	TMstTelephoneType	Telephone;
	// 通讯地址
	TMstAddressType	Address;
	// 邮政编码
	TMstZipCodeType	ZipCode;
	// 优先级
	TMstPriorityType	Priority;
	// 开户邮政编码
	TMstUOAZipCodeType	UOAZipCode;
	// 全称
	TMstInvestorFullNameType	PersonFullName;
};

// 查询经纪公司用户事件
struct CMstQryBrokerUserEventField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 用户事件类型
	TMstUserEventTypeType	UserEventType;
};

// 查询经纪公司用户事件
struct CMstBrokerUserEventField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 用户事件类型
	TMstUserEventTypeType	UserEventType;
	// 用户事件序号
	TMstSequenceNoType	EventSequenceNo;
	// 事件发生日期
	TMstDateType	EventDate;
	// 事件发生时间
	TMstTimeType	EventTime;
	// 用户事件信息
	TMstUserEventInfoType	UserEventInfo;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
};

// 查询签约银行请求
struct CMstQryContractBankField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分中心代码
	TMstBankBrchIDType	BankBrchID;
};

// 查询签约银行响应
struct CMstContractBankField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分中心代码
	TMstBankBrchIDType	BankBrchID;
	// 银行名称
	TMstBankNameType	BankName;
};

// 投资者组合持仓明细
struct CMstInvestorPositionCombineDetailField
{
	// 交易日
	TMstDateType	TradingDay;
	// 开仓日期
	TMstDateType	OpenDate;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 组合编号
	TMstTradeIDType	ComTradeID;
	// 撮合编号
	TMstTradeIDType	TradeID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 买卖
	TMstDirectionType	Direction;
	// 持仓量
	TMstVolumeType	TotalAmt;
	// 投资者保证金
	TMstMoneyType	Margin;
	// 交易所保证金
	TMstMoneyType	ExchMargin;
	// 保证金率
	TMstRatioType	MarginRateByMoney;
	// 保证金率(按手数)
	TMstRatioType	MarginRateByVolume;
	// 单腿编号
	TMstLegIDType	LegID;
	// 单腿乘数
	TMstLegMultipleType	LegMultiple;
	// 组合持仓合约编码
	TMstInstrumentIDType	CombInstrumentID;
	// 成交组号
	TMstTradeGroupIDType	TradeGroupID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 输入预埋单操作
struct CMstParkedOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 报单操作引用
	TMstOrderActionRefType	OrderActionRef;
	// 报单引用
	TMstOrderRefType	OrderRef;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 报单编号
	TMstOrderSysIDType	OrderSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 价格
	TMstPriceType	LimitPrice;
	// 数量变化
	TMstVolumeType	VolumeChange;
	// 用户代码
	TMstUserIDType	UserID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 预埋撤单单编号
	TMstParkedOrderActionIDType	ParkedOrderActionID;
	// 用户类型
	TMstUserTypeType	UserType;
	// 预埋撤单状态
	TMstParkedOrderStatusType	Status;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 查询预埋单
struct CMstQryParkedOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 查询预埋撤单
struct CMstQryParkedOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 删除预埋撤单
struct CMstRemoveParkedOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 预埋撤单编号
	TMstParkedOrderActionIDType	ParkedOrderActionID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 经纪公司可提资金算法表
struct CMstInvestorWithdrawAlgorithmField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 可提资金比例
	TMstRatioType	UsingRatio;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 货币质押比率
	TMstRatioType	FundMortgageRatio;
};

// 查询组合持仓明细
struct CMstQryInvestorPositionCombineDetailField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 组合持仓合约编码
	TMstInstrumentIDType	CombInstrumentID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 成交均价
struct CMstMarketDataAveragePriceField
{
	// 当日均价
	TMstPriceType	AveragePrice;
};

// 校验投资者密码
struct CMstVerifyInvestorPasswordField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 密码
	TMstPasswordType	Password;
};

// 用户IP
struct CMstUserIPField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// IP地址掩码
	TMstIPAddressType	IPMask;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 用户事件通知信息
struct CMstTradingNoticeInfoField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 发送时间
	TMstTimeType	SendTime;
	// 消息正文
	TMstContentType	FieldContent;
	// 序列系列号
	TMstSequenceSeriesType	SequenceSeries;
	// 序列号
	TMstSequenceNoType	SequenceNo;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 用户事件通知
struct CMstTradingNoticeField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者范围
	TMstInvestorRangeType	InvestorRange;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 序列系列号
	TMstSequenceSeriesType	SequenceSeries;
	// 用户代码
	TMstUserIDType	UserID;
	// 发送时间
	TMstTimeType	SendTime;
	// 序列号
	TMstSequenceNoType	SequenceNo;
	// 消息正文
	TMstContentType	FieldContent;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 查询交易事件通知
struct CMstQryTradingNoticeField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 查询错误报单
struct CMstQryErrOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
};

// 错误报单
struct CMstErrOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 报单引用
	TMstOrderRefType	OrderRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 报单价格条件
	TMstOrderPriceTypeType	OrderPriceType;
	// 买卖方向
	TMstDirectionType	Direction;
	// 组合开平标志
	TMstCombOffsetFlagType	CombOffsetFlag;
	// 组合投机套保标志
	TMstCombHedgeFlagType	CombHedgeFlag;
	// 价格
	TMstPriceType	LimitPrice;
	// 数量
	TMstVolumeType	VolumeTotalOriginal;
	// 有效期类型
	TMstTimeConditionType	TimeCondition;
	// GTD日期
	TMstDateType	GTDDate;
	// 成交量类型
	TMstVolumeConditionType	VolumeCondition;
	// 最小成交量
	TMstVolumeType	MinVolume;
	// 触发条件
	TMstContingentConditionType	ContingentCondition;
	// 止损价
	TMstPriceType	StopPrice;
	// 强平原因
	TMstForceCloseReasonType	ForceCloseReason;
	// 自动挂起标志
	TMstBoolType	IsAutoSuspend;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 用户强评标志
	TMstBoolType	UserForceClose;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
	// 互换单标志
	TMstBoolType	IsSwapOrder;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 资金账号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 交易编码
	TMstClientIDType	ClientID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 查询错误报单操作
struct CMstErrorConditionalOrderField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 报单引用
	TMstOrderRefType	OrderRef;
	// 用户代码
	TMstUserIDType	UserID;
	// 报单价格条件
	TMstOrderPriceTypeType	OrderPriceType;
	// 买卖方向
	TMstDirectionType	Direction;
	// 组合开平标志
	TMstCombOffsetFlagType	CombOffsetFlag;
	// 组合投机套保标志
	TMstCombHedgeFlagType	CombHedgeFlag;
	// 价格
	TMstPriceType	LimitPrice;
	// 数量
	TMstVolumeType	VolumeTotalOriginal;
	// 有效期类型
	TMstTimeConditionType	TimeCondition;
	// GTD日期
	TMstDateType	GTDDate;
	// 成交量类型
	TMstVolumeConditionType	VolumeCondition;
	// 最小成交量
	TMstVolumeType	MinVolume;
	// 触发条件
	TMstContingentConditionType	ContingentCondition;
	// 止损价
	TMstPriceType	StopPrice;
	// 强平原因
	TMstForceCloseReasonType	ForceCloseReason;
	// 自动挂起标志
	TMstBoolType	IsAutoSuspend;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 本地报单编号
	TMstOrderLocalIDType	OrderLocalID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 合约在交易所的代码
	TMstExchangeInstIDType	ExchangeInstID;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 报单提交状态
	TMstOrderSubmitStatusType	OrderSubmitStatus;
	// 报单提示序号
	TMstSequenceNoType	NotifySequence;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 报单编号
	TMstOrderSysIDType	OrderSysID;
	// 报单来源
	TMstOrderSourceType	OrderSource;
	// 报单状态
	TMstOrderStatusType	OrderStatus;
	// 报单类型
	TMstOrderTypeType	OrderType;
	// 今成交数量
	TMstVolumeType	VolumeTraded;
	// 剩余数量
	TMstVolumeType	VolumeTotal;
	// 报单日期
	TMstDateType	InsertDate;
	// 委托时间
	TMstTimeType	InsertTime;
	// 激活时间
	TMstTimeType	ActiveTime;
	// 挂起时间
	TMstTimeType	SuspendTime;
	// 最后修改时间
	TMstTimeType	UpdateTime;
	// 撤销时间
	TMstTimeType	CancelTime;
	// 最后修改交易所交易员代码
	TMstTraderIDType	ActiveTraderID;
	// 结算会员编号
	TMstParticipantIDType	ClearingPartID;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// 状态信息
	TMstErrorMsgType	StatusMsg;
	// 用户强评标志
	TMstBoolType	UserForceClose;
	// 操作用户代码
	TMstUserIDType	ActiveUserID;
	// 经纪公司报单编号
	TMstSequenceNoType	BrokerOrderSeq;
	// 相关报单
	TMstOrderSysIDType	RelativeOrderSysID;
	// 郑商所成交数量
	TMstVolumeType	ZCETotalTradedVolume;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
	// 互换单标志
	TMstBoolType	IsSwapOrder;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// 资金账号
	TMstAccountIDType	AccountID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
};

// 查询错误报单操作
struct CMstQryErrOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
};

// 错误报单操作
struct CMstErrOrderActionField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 报单操作引用
	TMstOrderActionRefType	OrderActionRef;
	// 报单引用
	TMstOrderRefType	OrderRef;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 前置编号
	TMstFrontIDType	FrontID;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 报单编号
	TMstOrderSysIDType	OrderSysID;
	// 操作标志
	TMstActionFlagType	ActionFlag;
	// 价格
	TMstPriceType	LimitPrice;
	// 数量变化
	TMstVolumeType	VolumeChange;
	// 操作日期
	TMstDateType	ActionDate;
	// 操作时间
	TMstTimeType	ActionTime;
	// 交易所交易员代码
	TMstTraderIDType	TraderID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 本地报单编号
	TMstOrderLocalIDType	OrderLocalID;
	// 操作本地编号
	TMstOrderLocalIDType	ActionLocalID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 客户代码
	TMstClientIDType	ClientID;
	// 业务单元
	TMstBusinessUnitType	BusinessUnit;
	// 报单操作状态
	TMstOrderActionStatusType	OrderActionStatus;
	// 用户代码
	TMstUserIDType	UserID;
	// 状态信息
	TMstErrorMsgType	StatusMsg;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 营业部编号
	TMstBranchIDType	BranchID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
	// IP地址
	TMstIPAddressType	IPAddress;
	// Mac地址
	TMstMacAddressType	MacAddress;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
};

// 查询交易所状态
struct CMstQryExchangeSequenceField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 交易所状态
struct CMstExchangeSequenceField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 序号
	TMstSequenceNoType	SequenceNo;
	// 合约交易状态
	TMstInstrumentStatusType	MarketStatus;
};

// 根据价格查询最大报单数量
struct CMstQueryMaxOrderVolumeWithPriceField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 买卖方向
	TMstDirectionType	Direction;
	// 开平标志
	TMstOffsetFlagType	OffsetFlag;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 最大允许报单数量
	TMstVolumeType	MaxVolume;
	// 报单价格
	TMstPriceType	Price;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 查询经纪公司交易参数
struct CMstQryBrokerTradingParamsField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
};

// 经纪公司交易参数
struct CMstBrokerTradingParamsField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 保证金价格类型
	TMstMarginPriceTypeType	MarginPriceType;
	// 盈亏算法
	TMstAlgorithmType	Algorithm;
	// 可用是否包含平仓盈利
	TMstIncludeCloseProfitType	AvailIncludeCloseProfit;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 期权权利金价格类型
	TMstOptionRoyaltyPriceTypeType	OptionRoyaltyPriceType;
	// 投资者帐号
	TMstAccountIDType	AccountID;
};

// 查询经纪公司交易算法
struct CMstQryBrokerTradingAlgosField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
};

// 经纪公司交易算法
struct CMstBrokerTradingAlgosField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 持仓处理算法编号
	TMstHandlePositionAlgoIDType	HandlePositionAlgoID;
	// 寻找保证金率算法编号
	TMstFindMarginRateAlgoIDType	FindMarginRateAlgoID;
	// 资金处理算法编号
	TMstHandleTradingAccountAlgoIDType	HandleTradingAccountAlgoID;
};

// 查询经纪公司资金
struct CMstQueryBrokerDepositField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 经纪公司资金
struct CMstBrokerDepositField
{
	// 交易日期
	TMstTradeDateType	TradingDay;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 会员代码
	TMstParticipantIDType	ParticipantID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 上次结算准备金
	TMstMoneyType	PreBalance;
	// 当前保证金总额
	TMstMoneyType	CurrMargin;
	// 平仓盈亏
	TMstMoneyType	CloseProfit;
	// 期货结算准备金
	TMstMoneyType	Balance;
	// 入金金额
	TMstMoneyType	Deposit;
	// 出金金额
	TMstMoneyType	Withdraw;
	// 可提资金
	TMstMoneyType	Available;
	// 基本准备金
	TMstMoneyType	Reserve;
	// 冻结的保证金
	TMstMoneyType	FrozenMargin;
};

// 查询保证金监管系统经纪公司密钥
struct CMstQryCFMMCBrokerKeyField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
};

// 保证金监管系统经纪公司密钥
struct CMstCFMMCBrokerKeyField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 经纪公司统一编码
	TMstParticipantIDType	ParticipantID;
	// 密钥生成日期
	TMstDateType	CreateDate;
	// 密钥生成时间
	TMstTimeType	CreateTime;
	// 密钥编号
	TMstSequenceNoType	KeyID;
	// 动态密钥
	TMstCFMMCKeyType	CurrentKey;
	// 动态密钥类型
	TMstCFMMCKeyKindType	KeyKind;
};

// 保证金监管系统经纪公司资金账户密钥
struct CMstCFMMCTradingAccountKeyField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 经纪公司统一编码
	TMstParticipantIDType	ParticipantID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 密钥编号
	TMstSequenceNoType	KeyID;
	// 动态密钥
	TMstCFMMCKeyType	CurrentKey;
};

// 请求查询保证金监管系统经纪公司资金账户密钥
struct CMstQryCFMMCTradingAccountKeyField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
};

// 用户动态令牌参数
struct CMstBrokerUserOTPParamField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 动态令牌提供商
	TMstOTPVendorsIDType	OTPVendorsID;
	// 动态令牌序列号
	TMstSerialNumberType	SerialNumber;
	// 令牌密钥
	TMstAuthKeyType	AuthKey;
	// 漂移值
	TMstLastDriftType	LastDrift;
	// 成功值
	TMstLastSuccessType	LastSuccess;
	// 动态令牌类型
	TMstOTPTypeType	OTPType;
};

// 手工同步用户动态令牌
struct CMstManualSyncBrokerUserOTPField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 动态令牌类型
	TMstOTPTypeType	OTPType;
	// 第一个动态密码
	TMstPasswordType	FirstOTP;
	// 第二个动态密码
	TMstPasswordType	SecondOTP;
};

// 投资者手续费率模板
struct CMstCommRateModelField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 手续费率模板代码
	TMstInvestorIDType	CommModelID;
	// 模板名称
	TMstCommModelNameType	CommModelName;
};

// 请求查询投资者手续费率模板
struct CMstQryCommRateModelField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 手续费率模板代码
	TMstInvestorIDType	CommModelID;
};

// 投资者保证金率模板
struct CMstMarginModelField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 保证金率模板代码
	TMstInvestorIDType	MarginModelID;
	// 模板名称
	TMstCommModelNameType	MarginModelName;
};

// 请求查询投资者保证金率模板
struct CMstQryMarginModelField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 保证金率模板代码
	TMstInvestorIDType	MarginModelID;
};

// 仓单折抵信息
struct CMstEWarrantOffsetField
{
	// 交易日期
	TMstTradeDateType	TradingDay;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 买卖方向
	TMstDirectionType	Direction;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 数量
	TMstVolumeType	Volume;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 查询仓单折抵信息
struct CMstQryEWarrantOffsetField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 合约代码
	TMstInstrumentIDType	InstrumentID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 查询投资者品种/跨品种保证金
struct CMstQryInvestorProductGroupMarginField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 品种/跨品种标示
	TMstInstrumentIDType	ProductGroupID;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 投资者品种/跨品种保证金
struct CMstInvestorProductGroupMarginField
{
	// 品种/跨品种标示
	TMstInstrumentIDType	ProductGroupID;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 交易日
	TMstDateType	TradingDay;
	// 结算编号
	TMstSettlementIDType	SettlementID;
	// 冻结的保证金
	TMstMoneyType	FrozenMargin;
	// 多头冻结的保证金
	TMstMoneyType	LongFrozenMargin;
	// 空头冻结的保证金
	TMstMoneyType	ShortFrozenMargin;
	// 占用的保证金
	TMstMoneyType	UseMargin;
	// 多头保证金
	TMstMoneyType	LongUseMargin;
	// 空头保证金
	TMstMoneyType	ShortUseMargin;
	// 交易所保证金
	TMstMoneyType	ExchMargin;
	// 交易所多头保证金
	TMstMoneyType	LongExchMargin;
	// 交易所空头保证金
	TMstMoneyType	ShortExchMargin;
	// 平仓盈亏
	TMstMoneyType	CloseProfit;
	// 冻结的手续费
	TMstMoneyType	FrozenCommission;
	// 手续费
	TMstMoneyType	Commission;
	// 冻结的资金
	TMstMoneyType	FrozenCash;
	// 资金差额
	TMstMoneyType	CashIn;
	// 持仓盈亏
	TMstMoneyType	PositionProfit;
	// 折抵总金额
	TMstMoneyType	OffsetAmount;
	// 多头折抵总金额
	TMstMoneyType	LongOffsetAmount;
	// 空头折抵总金额
	TMstMoneyType	ShortOffsetAmount;
	// 交易所折抵总金额
	TMstMoneyType	ExchOffsetAmount;
	// 交易所多头折抵总金额
	TMstMoneyType	LongExchOffsetAmount;
	// 交易所空头折抵总金额
	TMstMoneyType	ShortExchOffsetAmount;
	// 投机套保标志
	TMstHedgeFlagType	HedgeFlag;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 查询监控中心用户令牌
struct CMstQueryCFMMCTradingAccountTokenField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 投资单元代码
	TMstInvestUnitIDType	InvestUnitID;
};

// 监控中心用户令牌
struct CMstCFMMCTradingAccountTokenField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 经纪公司统一编码
	TMstParticipantIDType	ParticipantID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 密钥编号
	TMstSequenceNoType	KeyID;
	// 动态令牌
	TMstCFMMCTokenType	Token;
};

// 查询产品组
struct CMstQryProductGroupField
{
	// 产品代码
	TMstInstrumentIDType	ProductID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
};

// 投资者品种/跨品种保证金产品组
struct CMstProductGroupField
{
	// 产品代码
	TMstInstrumentIDType	ProductID;
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 产品组代码
	TMstInstrumentIDType	ProductGroupID;
};

// 交易所公告
struct CMstBulletinField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 交易日
	TMstDateType	TradingDay;
	// 公告编号
	TMstBulletinIDType	BulletinID;
	// 序列号
	TMstSequenceNoType	SequenceNo;
	// 公告类型
	TMstNewsTypeType	NewsType;
	// 紧急程度
	TMstNewsUrgencyType	NewsUrgency;
	// 发送时间
	TMstTimeType	SendTime;
	// 消息摘要
	TMstAbstractType	Abstract;
	// 消息来源
	TMstComeFromType	ComeFrom;
	// 消息正文
	TMstContentType	Content;
	// WEB地址
	TMstURLLinkType	URLLink;
	// 市场代码
	TMstMarketIDType	MarketID;
};

// 查询交易所公告
struct CMstQryBulletinField
{
	// 交易所代码
	TMstExchangeIDType	ExchangeID;
	// 公告编号
	TMstBulletinIDType	BulletinID;
	// 序列号
	TMstSequenceNoType	SequenceNo;
	// 公告类型
	TMstNewsTypeType	NewsType;
	// 紧急程度
	TMstNewsUrgencyType	NewsUrgency;
};

// 转帐开户请求
struct CMstReqOpenAccountField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 性别
	TMstGenderType	Gender;
	// 国家代码
	TMstCountryCodeType	CountryCode;
	// 客户类型
	TMstCustTypeType	CustType;
	// 地址
	TMstAddressType	Address;
	// 邮编
	TMstZipCodeType	ZipCode;
	// 电话号码
	TMstTelephoneType	Telephone;
	// 手机
	TMstMobilePhoneType	MobilePhone;
	// 传真
	TMstFaxType	Fax;
	// 电子邮件
	TMstEMailType	EMail;
	// 资金账户状态
	TMstMoneyAccountStatusType	MoneyAccountStatus;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 汇钞标志
	TMstCashExchangeCodeType	CashExchangeCode;
	// 摘要
	TMstDigestType	Digest;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货单位帐号类型
	TMstBankAccTypeType	BankSecuAccType;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 期货单位帐号
	TMstBankAccountType	BankSecuAcc;
	// 银行密码标志
	TMstPwdFlagType	BankPwdFlag;
	// 期货资金密码核对标志
	TMstPwdFlagType	SecuPwdFlag;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 交易ID
	TMstTIDType	TID;
	// 用户标识
	TMstUserIDType	UserID;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 转帐销户请求
struct CMstReqCancelAccountField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 性别
	TMstGenderType	Gender;
	// 国家代码
	TMstCountryCodeType	CountryCode;
	// 客户类型
	TMstCustTypeType	CustType;
	// 地址
	TMstAddressType	Address;
	// 邮编
	TMstZipCodeType	ZipCode;
	// 电话号码
	TMstTelephoneType	Telephone;
	// 手机
	TMstMobilePhoneType	MobilePhone;
	// 传真
	TMstFaxType	Fax;
	// 电子邮件
	TMstEMailType	EMail;
	// 资金账户状态
	TMstMoneyAccountStatusType	MoneyAccountStatus;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 汇钞标志
	TMstCashExchangeCodeType	CashExchangeCode;
	// 摘要
	TMstDigestType	Digest;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货单位帐号类型
	TMstBankAccTypeType	BankSecuAccType;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 期货单位帐号
	TMstBankAccountType	BankSecuAcc;
	// 银行密码标志
	TMstPwdFlagType	BankPwdFlag;
	// 期货资金密码核对标志
	TMstPwdFlagType	SecuPwdFlag;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 交易ID
	TMstTIDType	TID;
	// 用户标识
	TMstUserIDType	UserID;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 变更银行账户请求
struct CMstReqChangeAccountField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 性别
	TMstGenderType	Gender;
	// 国家代码
	TMstCountryCodeType	CountryCode;
	// 客户类型
	TMstCustTypeType	CustType;
	// 地址
	TMstAddressType	Address;
	// 邮编
	TMstZipCodeType	ZipCode;
	// 电话号码
	TMstTelephoneType	Telephone;
	// 手机
	TMstMobilePhoneType	MobilePhone;
	// 传真
	TMstFaxType	Fax;
	// 电子邮件
	TMstEMailType	EMail;
	// 资金账户状态
	TMstMoneyAccountStatusType	MoneyAccountStatus;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 新银行帐号
	TMstBankAccountType	NewBankAccount;
	// 新银行密码
	TMstPasswordType	NewBankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 银行密码标志
	TMstPwdFlagType	BankPwdFlag;
	// 期货资金密码核对标志
	TMstPwdFlagType	SecuPwdFlag;
	// 交易ID
	TMstTIDType	TID;
	// 摘要
	TMstDigestType	Digest;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 转账请求
struct CMstReqTransferField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 客户类型
	TMstCustTypeType	CustType;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 期货公司流水号
	TMstFutureSerialType	FutureSerial;
	// 用户标识
	TMstUserIDType	UserID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 转帐金额
	TMstTradeAmountType	TradeAmount;
	// 期货可取金额
	TMstTradeAmountType	FutureFetchAmount;
	// 费用支付标志
	TMstFeePayFlagType	FeePayFlag;
	// 应收客户费用
	TMstCustFeeType	CustFee;
	// 应收期货公司费用
	TMstFutureFeeType	BrokerFee;
	// 发送方给接收方的消息
	TMstAddInfoType	Message;
	// 摘要
	TMstDigestType	Digest;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货单位帐号类型
	TMstBankAccTypeType	BankSecuAccType;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 期货单位帐号
	TMstBankAccountType	BankSecuAcc;
	// 银行密码标志
	TMstPwdFlagType	BankPwdFlag;
	// 期货资金密码核对标志
	TMstPwdFlagType	SecuPwdFlag;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
	// 转账交易状态
	TMstTransferStatusType	TransferStatus;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 银行发起银行资金转期货响应
struct CMstRspTransferField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 客户类型
	TMstCustTypeType	CustType;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 期货公司流水号
	TMstFutureSerialType	FutureSerial;
	// 用户标识
	TMstUserIDType	UserID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 转帐金额
	TMstTradeAmountType	TradeAmount;
	// 期货可取金额
	TMstTradeAmountType	FutureFetchAmount;
	// 费用支付标志
	TMstFeePayFlagType	FeePayFlag;
	// 应收客户费用
	TMstCustFeeType	CustFee;
	// 应收期货公司费用
	TMstFutureFeeType	BrokerFee;
	// 发送方给接收方的消息
	TMstAddInfoType	Message;
	// 摘要
	TMstDigestType	Digest;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货单位帐号类型
	TMstBankAccTypeType	BankSecuAccType;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 期货单位帐号
	TMstBankAccountType	BankSecuAcc;
	// 银行密码标志
	TMstPwdFlagType	BankPwdFlag;
	// 期货资金密码核对标志
	TMstPwdFlagType	SecuPwdFlag;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
	// 转账交易状态
	TMstTransferStatusType	TransferStatus;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 冲正请求
struct CMstReqRepealField
{
	// 冲正时间间隔
	TMstRepealTimeIntervalType	RepealTimeInterval;
	// 已经冲正次数
	TMstRepealedTimesType	RepealedTimes;
	// 银行冲正标志
	TMstBankRepealFlagType	BankRepealFlag;
	// 期商冲正标志
	TMstBrokerRepealFlagType	BrokerRepealFlag;
	// 被冲正平台流水号
	TMstPlateSerialType	PlateRepealSerial;
	// 被冲正银行流水号
	TMstBankSerialType	BankRepealSerial;
	// 被冲正期货流水号
	TMstFutureSerialType	FutureRepealSerial;
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 客户类型
	TMstCustTypeType	CustType;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 期货公司流水号
	TMstFutureSerialType	FutureSerial;
	// 用户标识
	TMstUserIDType	UserID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 转帐金额
	TMstTradeAmountType	TradeAmount;
	// 期货可取金额
	TMstTradeAmountType	FutureFetchAmount;
	// 费用支付标志
	TMstFeePayFlagType	FeePayFlag;
	// 应收客户费用
	TMstCustFeeType	CustFee;
	// 应收期货公司费用
	TMstFutureFeeType	BrokerFee;
	// 发送方给接收方的消息
	TMstAddInfoType	Message;
	// 摘要
	TMstDigestType	Digest;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货单位帐号类型
	TMstBankAccTypeType	BankSecuAccType;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 期货单位帐号
	TMstBankAccountType	BankSecuAcc;
	// 银行密码标志
	TMstPwdFlagType	BankPwdFlag;
	// 期货资金密码核对标志
	TMstPwdFlagType	SecuPwdFlag;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
	// 转账交易状态
	TMstTransferStatusType	TransferStatus;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 冲正响应
struct CMstRspRepealField
{
	// 冲正时间间隔
	TMstRepealTimeIntervalType	RepealTimeInterval;
	// 已经冲正次数
	TMstRepealedTimesType	RepealedTimes;
	// 银行冲正标志
	TMstBankRepealFlagType	BankRepealFlag;
	// 期商冲正标志
	TMstBrokerRepealFlagType	BrokerRepealFlag;
	// 被冲正平台流水号
	TMstPlateSerialType	PlateRepealSerial;
	// 被冲正银行流水号
	TMstBankSerialType	BankRepealSerial;
	// 被冲正期货流水号
	TMstFutureSerialType	FutureRepealSerial;
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 客户类型
	TMstCustTypeType	CustType;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 期货公司流水号
	TMstFutureSerialType	FutureSerial;
	// 用户标识
	TMstUserIDType	UserID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 转帐金额
	TMstTradeAmountType	TradeAmount;
	// 期货可取金额
	TMstTradeAmountType	FutureFetchAmount;
	// 费用支付标志
	TMstFeePayFlagType	FeePayFlag;
	// 应收客户费用
	TMstCustFeeType	CustFee;
	// 应收期货公司费用
	TMstFutureFeeType	BrokerFee;
	// 发送方给接收方的消息
	TMstAddInfoType	Message;
	// 摘要
	TMstDigestType	Digest;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货单位帐号类型
	TMstBankAccTypeType	BankSecuAccType;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 期货单位帐号
	TMstBankAccountType	BankSecuAcc;
	// 银行密码标志
	TMstPwdFlagType	BankPwdFlag;
	// 期货资金密码核对标志
	TMstPwdFlagType	SecuPwdFlag;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
	// 转账交易状态
	TMstTransferStatusType	TransferStatus;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 查询账户信息请求
struct CMstReqQueryAccountField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 客户类型
	TMstCustTypeType	CustType;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 期货公司流水号
	TMstFutureSerialType	FutureSerial;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 用户标识
	TMstUserIDType	UserID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 摘要
	TMstDigestType	Digest;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货单位帐号类型
	TMstBankAccTypeType	BankSecuAccType;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 期货单位帐号
	TMstBankAccountType	BankSecuAcc;
	// 银行密码标志
	TMstPwdFlagType	BankPwdFlag;
	// 期货资金密码核对标志
	TMstPwdFlagType	SecuPwdFlag;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 查询账户信息响应
struct CMstRspQueryAccountField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 客户类型
	TMstCustTypeType	CustType;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 期货公司流水号
	TMstFutureSerialType	FutureSerial;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 用户标识
	TMstUserIDType	UserID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 摘要
	TMstDigestType	Digest;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货单位帐号类型
	TMstBankAccTypeType	BankSecuAccType;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 期货单位帐号
	TMstBankAccountType	BankSecuAcc;
	// 银行密码标志
	TMstPwdFlagType	BankPwdFlag;
	// 期货资金密码核对标志
	TMstPwdFlagType	SecuPwdFlag;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
	// 银行可用金额
	TMstTradeAmountType	BankUseAmount;
	// 银行可取金额
	TMstTradeAmountType	BankFetchAmount;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 期商签到签退
struct CMstFutureSignIOField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 用户标识
	TMstUserIDType	UserID;
	// 摘要
	TMstDigestType	Digest;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
};

// 期商签到响应
struct CMstRspFutureSignInField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 用户标识
	TMstUserIDType	UserID;
	// 摘要
	TMstDigestType	Digest;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
	// PIN密钥
	TMstPasswordKeyType	PinKey;
	// MAC密钥
	TMstPasswordKeyType	MacKey;
};

// 期商签退请求
struct CMstReqFutureSignOutField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 用户标识
	TMstUserIDType	UserID;
	// 摘要
	TMstDigestType	Digest;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
};

// 期商签退响应
struct CMstRspFutureSignOutField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 用户标识
	TMstUserIDType	UserID;
	// 摘要
	TMstDigestType	Digest;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
};

// 查询指定流水号的交易结果请求
struct CMstReqQueryTradeResultBySerialField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 流水号
	TMstSerialType	Reference;
	// 本流水号发布者的机构类型
	TMstInstitutionTypeType	RefrenceIssureType;
	// 本流水号发布者机构编码
	TMstOrganCodeType	RefrenceIssure;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 客户类型
	TMstCustTypeType	CustType;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 转帐金额
	TMstTradeAmountType	TradeAmount;
	// 摘要
	TMstDigestType	Digest;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 查询指定流水号的交易结果响应
struct CMstRspQueryTradeResultBySerialField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
	// 流水号
	TMstSerialType	Reference;
	// 本流水号发布者的机构类型
	TMstInstitutionTypeType	RefrenceIssureType;
	// 本流水号发布者机构编码
	TMstOrganCodeType	RefrenceIssure;
	// 原始返回代码
	TMstReturnCodeType	OriginReturnCode;
	// 原始返回码描述
	TMstDescrInfoForReturnCodeType	OriginDescrInfoForReturnCode;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 转帐金额
	TMstTradeAmountType	TradeAmount;
	// 摘要
	TMstDigestType	Digest;
};

// 日终文件就绪请求
struct CMstReqDayEndFileReadyField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 文件业务功能
	TMstFileBusinessCodeType	FileBusinessCode;
	// 摘要
	TMstDigestType	Digest;
};

// 返回结果
struct CMstReturnResultField
{
	// 返回代码
	TMstReturnCodeType	ReturnCode;
	// 返回码描述
	TMstDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

// 验证期货资金密码
struct CMstVerifyFuturePasswordField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 交易ID
	TMstTIDType	TID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 验证客户信息
struct CMstVerifyCustInfoField
{
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 客户类型
	TMstCustTypeType	CustType;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 验证期货资金密码和客户信息
struct CMstVerifyFuturePasswordAndCustInfoField
{
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 客户类型
	TMstCustTypeType	CustType;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 验证期货资金密码和客户信息
struct CMstDepositResultInformField
{
	// 出入金流水号，该流水号为银期报盘返回的流水号
	TMstDepositSeqNoType	DepositSeqNo;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 入金金额
	TMstMoneyType	Deposit;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 返回代码
	TMstReturnCodeType	ReturnCode;
	// 返回码描述
	TMstDescrInfoForReturnCodeType	DescrInfoForReturnCode;
};

// 交易核心向银期报盘发出密钥同步请求
struct CMstReqSyncKeyField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 用户标识
	TMstUserIDType	UserID;
	// 交易核心给银期报盘的消息
	TMstAddInfoType	Message;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
};

// 交易核心向银期报盘发出密钥同步响应
struct CMstRspSyncKeyField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 用户标识
	TMstUserIDType	UserID;
	// 交易核心给银期报盘的消息
	TMstAddInfoType	Message;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
};

// 查询账户信息通知
struct CMstNotifyQueryAccountField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 客户类型
	TMstCustTypeType	CustType;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 期货公司流水号
	TMstFutureSerialType	FutureSerial;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 用户标识
	TMstUserIDType	UserID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 摘要
	TMstDigestType	Digest;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货单位帐号类型
	TMstBankAccTypeType	BankSecuAccType;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 期货单位帐号
	TMstBankAccountType	BankSecuAcc;
	// 银行密码标志
	TMstPwdFlagType	BankPwdFlag;
	// 期货资金密码核对标志
	TMstPwdFlagType	SecuPwdFlag;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
	// 银行可用金额
	TMstTradeAmountType	BankUseAmount;
	// 银行可取金额
	TMstTradeAmountType	BankFetchAmount;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 银期转账交易流水表
struct CMstTransferSerialField
{
	// 平台流水号
	TMstPlateSerialType	PlateSerial;
	// 交易发起方日期
	TMstTradeDateType	TradeDate;
	// 交易日期
	TMstDateType	TradingDay;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 交易代码
	TMstTradeCodeType	TradeCode;
	// 会话编号
	TMstSessionIDType	SessionID;
	// 银行编码
	TMstBankIDType	BankID;
	// 银行分支机构编码
	TMstBankBrchIDType	BankBranchID;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 期货公司编码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 期货公司帐号类型
	TMstFutureAccTypeType	FutureAccType;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
	// 期货公司流水号
	TMstFutureSerialType	FutureSerial;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 交易金额
	TMstTradeAmountType	TradeAmount;
	// 应收客户费用
	TMstCustFeeType	CustFee;
	// 应收期货公司费用
	TMstFutureFeeType	BrokerFee;
	// 有效标志
	TMstAvailabilityFlagType	AvailabilityFlag;
	// 操作员
	TMstOperatorCodeType	OperatorCode;
	// 新银行帐号
	TMstBankAccountType	BankNewAccount;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
};

// 请求查询转帐流水
struct CMstQryTransferSerialField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 银行编码
	TMstBankIDType	BankID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 期商签到通知
struct CMstNotifyFutureSignInField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 用户标识
	TMstUserIDType	UserID;
	// 摘要
	TMstDigestType	Digest;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
	// PIN密钥
	TMstPasswordKeyType	PinKey;
	// MAC密钥
	TMstPasswordKeyType	MacKey;
};

// 期商签退通知
struct CMstNotifyFutureSignOutField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 用户标识
	TMstUserIDType	UserID;
	// 摘要
	TMstDigestType	Digest;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
};

// 交易核心向银期报盘发出密钥同步处理结果的通知
struct CMstNotifySyncKeyField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 用户标识
	TMstUserIDType	UserID;
	// 交易核心给银期报盘的消息
	TMstAddInfoType	Message;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 请求编号
	TMstRequestIDType	RequestID;
	// 交易ID
	TMstTIDType	TID;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
};

// 请求查询银期签约关系
struct CMstQryAccountregisterField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 银行编码
	TMstBankIDType	BankID;
	// 银行分支机构编码
	TMstBankBrchIDType	BankBranchID;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 客户开销户信息表
struct CMstAccountregisterField
{
	// 交易日期
	TMstTradeDateType	TradeDay;
	// 银行编码
	TMstBankIDType	BankID;
	// 银行分支机构编码
	TMstBankBrchIDType	BankBranchID;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 期货公司编码
	TMstBrokerIDType	BrokerID;
	// 期货公司分支机构编码
	TMstFutureBranchIDType	BrokerBranchID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 开销户类别
	TMstOpenOrDestroyType	OpenOrDestroy;
	// 签约日期
	TMstTradeDateType	RegDate;
	// 解约日期
	TMstTradeDateType	OutDate;
	// 交易ID
	TMstTIDType	TID;
	// 客户类型
	TMstCustTypeType	CustType;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 银期开户信息
struct CMstOpenAccountField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 性别
	TMstGenderType	Gender;
	// 国家代码
	TMstCountryCodeType	CountryCode;
	// 客户类型
	TMstCustTypeType	CustType;
	// 地址
	TMstAddressType	Address;
	// 邮编
	TMstZipCodeType	ZipCode;
	// 电话号码
	TMstTelephoneType	Telephone;
	// 手机
	TMstMobilePhoneType	MobilePhone;
	// 传真
	TMstFaxType	Fax;
	// 电子邮件
	TMstEMailType	EMail;
	// 资金账户状态
	TMstMoneyAccountStatusType	MoneyAccountStatus;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 汇钞标志
	TMstCashExchangeCodeType	CashExchangeCode;
	// 摘要
	TMstDigestType	Digest;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货单位帐号类型
	TMstBankAccTypeType	BankSecuAccType;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 期货单位帐号
	TMstBankAccountType	BankSecuAcc;
	// 银行密码标志
	TMstPwdFlagType	BankPwdFlag;
	// 期货资金密码核对标志
	TMstPwdFlagType	SecuPwdFlag;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 交易ID
	TMstTIDType	TID;
	// 用户标识
	TMstUserIDType	UserID;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 银期销户信息
struct CMstCancelAccountField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 性别
	TMstGenderType	Gender;
	// 国家代码
	TMstCountryCodeType	CountryCode;
	// 客户类型
	TMstCustTypeType	CustType;
	// 地址
	TMstAddressType	Address;
	// 邮编
	TMstZipCodeType	ZipCode;
	// 电话号码
	TMstTelephoneType	Telephone;
	// 手机
	TMstMobilePhoneType	MobilePhone;
	// 传真
	TMstFaxType	Fax;
	// 电子邮件
	TMstEMailType	EMail;
	// 资金账户状态
	TMstMoneyAccountStatusType	MoneyAccountStatus;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 汇钞标志
	TMstCashExchangeCodeType	CashExchangeCode;
	// 摘要
	TMstDigestType	Digest;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 渠道标志
	TMstDeviceIDType	DeviceID;
	// 期货单位帐号类型
	TMstBankAccTypeType	BankSecuAccType;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 期货单位帐号
	TMstBankAccountType	BankSecuAcc;
	// 银行密码标志
	TMstPwdFlagType	BankPwdFlag;
	// 期货资金密码核对标志
	TMstPwdFlagType	SecuPwdFlag;
	// 交易柜员
	TMstOperNoType	OperNo;
	// 交易ID
	TMstTIDType	TID;
	// 用户标识
	TMstUserIDType	UserID;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 银期变更银行账号信息
struct CMstChangeAccountField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 性别
	TMstGenderType	Gender;
	// 国家代码
	TMstCountryCodeType	CountryCode;
	// 客户类型
	TMstCustTypeType	CustType;
	// 地址
	TMstAddressType	Address;
	// 邮编
	TMstZipCodeType	ZipCode;
	// 电话号码
	TMstTelephoneType	Telephone;
	// 手机
	TMstMobilePhoneType	MobilePhone;
	// 传真
	TMstFaxType	Fax;
	// 电子邮件
	TMstEMailType	EMail;
	// 资金账户状态
	TMstMoneyAccountStatusType	MoneyAccountStatus;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 新银行帐号
	TMstBankAccountType	NewBankAccount;
	// 新银行密码
	TMstPasswordType	NewBankPassWord;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 银行密码标志
	TMstPwdFlagType	BankPwdFlag;
	// 期货资金密码核对标志
	TMstPwdFlagType	SecuPwdFlag;
	// 交易ID
	TMstTIDType	TID;
	// 摘要
	TMstDigestType	Digest;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
	// 长客户姓名
	TMstLongIndividualNameType	LongCustomerName;
};

// 二级代理操作员银期权限
struct CMstSecAgentACIDMapField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 资金账户
	TMstAccountIDType	AccountID;
	// 币种
	TMstCurrencyIDType	CurrencyID;
	// 境外中介机构资金帐号
	TMstAccountIDType	BrokerSecAgentID;
};

// 二级代理操作员银期权限查询
struct CMstQrySecAgentACIDMapField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 资金账户
	TMstAccountIDType	AccountID;
	// 币种
	TMstCurrencyIDType	CurrencyID;
};

// 灾备中心交易权限
struct CMstUserRightsAssignField
{
	// 应用单元代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 交易中心代码
	TMstDRIdentityIDType	DRIdentityID;
};

// 经济公司是否有在本标示的交易权限
struct CMstBrokerUserRightAssignField
{
	// 应用单元代码
	TMstBrokerIDType	BrokerID;
	// 交易中心代码
	TMstDRIdentityIDType	DRIdentityID;
	// 能否交易
	TMstBoolType	Tradeable;
};

// 灾备交易转换报文
struct CMstDRTransferField
{
	// 原交易中心代码
	TMstDRIdentityIDType	OrigDRIdentityID;
	// 目标交易中心代码
	TMstDRIdentityIDType	DestDRIdentityID;
	// 原应用单元代码
	TMstBrokerIDType	OrigBrokerID;
	// 目标易用单元代码
	TMstBrokerIDType	DestBrokerID;
};

// Fens用户信息
struct CMstFensUserInfoField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 登录模式
	TMstLoginModeType	LoginMode;
};

// 当前银期所属交易中心
struct CMstCurrTransferIdentityField
{
	// 交易中心代码
	TMstDRIdentityIDType	IdentityID;
};

// 禁止登录用户
struct CMstLoginForbiddenUserField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// IP地址
	TMstIPAddressType	IPAddress;
};

// 查询禁止登录用户
struct CMstQryLoginForbiddenUserField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
};

// UDP组播组信息
struct CMstMulticastGroupInfoField
{
	// 组播组IP地址
	TMstIPAddressType	GroupIP;
	// 组播组IP端口
	TMstIPPortType	GroupPort;
	// 源地址
	TMstIPAddressType	SourceIP;
};

// 资金账户基本准备金
struct CMstTradingAccountReserveField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 基本准备金
	TMstMoneyType	Reserve;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 查询禁止登录IP
struct CMstQryLoginForbiddenIPField
{
	// IP地址
	TMstIPAddressType	IPAddress;
};

// 查询IP列表
struct CMstQryIPListField
{
	// IP地址
	TMstIPAddressType	IPAddress;
};

// 查询用户下单权限分配表
struct CMstQryUserRightsAssignField
{
	// 应用单元代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
};

// 银期预约开户确认请求
struct CMstReserveOpenAccountConfirmField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstLongIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 性别
	TMstGenderType	Gender;
	// 国家代码
	TMstCountryCodeType	CountryCode;
	// 客户类型
	TMstCustTypeType	CustType;
	// 地址
	TMstAddressType	Address;
	// 邮编
	TMstZipCodeType	ZipCode;
	// 电话号码
	TMstTelephoneType	Telephone;
	// 手机
	TMstMobilePhoneType	MobilePhone;
	// 传真
	TMstFaxType	Fax;
	// 电子邮件
	TMstEMailType	EMail;
	// 资金账户状态
	TMstMoneyAccountStatusType	MoneyAccountStatus;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 摘要
	TMstDigestType	Digest;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 交易ID
	TMstTIDType	TID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 期货密码
	TMstPasswordType	Password;
	// 预约开户银行流水号
	TMstBankSerialType	BankReserveOpenSeq;
	// 预约开户日期
	TMstTradeDateType	BookDate;
	// 预约开户验证密码
	TMstPasswordType	BookPsw;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
};

// 银期预约开户
struct CMstReserveOpenAccountField
{
	// 业务功能码
	TMstTradeCodeType	TradeCode;
	// 银行代码
	TMstBankIDType	BankID;
	// 银行分支机构代码
	TMstBankBrchIDType	BankBranchID;
	// 期商代码
	TMstBrokerIDType	BrokerID;
	// 期商分支机构代码
	TMstFutureBranchIDType	BrokerBranchID;
	// 交易日期
	TMstTradeDateType	TradeDate;
	// 交易时间
	TMstTradeTimeType	TradeTime;
	// 银行流水号
	TMstBankSerialType	BankSerial;
	// 交易系统日期 
	TMstTradeDateType	TradingDay;
	// 银期平台消息流水号
	TMstSerialType	PlateSerial;
	// 最后分片标志
	TMstLastFragmentType	LastFragment;
	// 会话号
	TMstSessionIDType	SessionID;
	// 客户姓名
	TMstLongIndividualNameType	CustomerName;
	// 证件类型
	TMstIdCardTypeType	IdCardType;
	// 证件号码
	TMstIdentifiedCardNoType	IdentifiedCardNo;
	// 性别
	TMstGenderType	Gender;
	// 国家代码
	TMstCountryCodeType	CountryCode;
	// 客户类型
	TMstCustTypeType	CustType;
	// 地址
	TMstAddressType	Address;
	// 邮编
	TMstZipCodeType	ZipCode;
	// 电话号码
	TMstTelephoneType	Telephone;
	// 手机
	TMstMobilePhoneType	MobilePhone;
	// 传真
	TMstFaxType	Fax;
	// 电子邮件
	TMstEMailType	EMail;
	// 资金账户状态
	TMstMoneyAccountStatusType	MoneyAccountStatus;
	// 银行帐号
	TMstBankAccountType	BankAccount;
	// 银行密码
	TMstPasswordType	BankPassWord;
	// 安装编号
	TMstInstallIDType	InstallID;
	// 验证客户证件号码标志
	TMstYesNoIndicatorType	VerifyCertNoFlag;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
	// 摘要
	TMstDigestType	Digest;
	// 银行帐号类型
	TMstBankAccTypeType	BankAccType;
	// 期货公司银行编码
	TMstBankCodingForFutureType	BrokerIDByBank;
	// 交易ID
	TMstTIDType	TID;
	// 预约开户状态
	TMstReserveOpenAccStasType	ReserveOpenAccStas;
	// 错误代码
	TMstErrorIDType	ErrorID;
	// 错误信息
	TMstErrorMsgType	ErrorMsg;
};

// 银行账户属性
struct CMstAccountPropertyField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者帐号
	TMstAccountIDType	AccountID;
	// 银行统一标识类型
	TMstBankIDType	BankID;
	// 银行账户
	TMstBankAccountType	BankAccount;
	// 银行账户的开户人名称
	TMstInvestorFullNameType	OpenName;
	// 银行账户的开户行
	TMstOpenBankType	OpenBank;
	// 是否活跃
	TMstBoolType	IsActive;
	// 账户来源
	TMstAccountSourceTypeType	AccountSourceType;
	// 开户日期
	TMstDateType	OpenDate;
	// 注销日期
	TMstDateType	CancelDate;
	// 录入员代码
	TMstOperatorIDType	OperatorID;
	// 录入日期
	TMstDateType	OperateDate;
	// 录入时间
	TMstTimeType	OperateTime;
	// 币种代码
	TMstCurrencyIDType	CurrencyID;
};

// 查询当前交易中心
struct CMstQryCurrDRIdentityField
{
	// 交易中心代码
	TMstDRIdentityIDType	DRIdentityID;
};

// 当前交易中心
struct CMstCurrDRIdentityField
{
	// 交易中心代码
	TMstDRIdentityIDType	DRIdentityID;
};

// 查询二级代理商资金校验模式
struct CMstQrySecAgentCheckModeField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
};

// 查询二级代理商信息
struct CMstQrySecAgentTradeInfoField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 境外中介机构资金帐号
	TMstAccountIDType	BrokerSecAgentID;
};

// 用户系统信息
struct CMstUserSystemInfoField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 用户端系统内部信息长度
	TMstSystemInfoLenType	ClientSystemInfoLen;
	// 用户端系统内部信息
	TMstClientSystemInfoType	ClientSystemInfo;
	// 用户公网IP
	TMstIPAddressType	ClientPublicIP;
	// 终端IP端口
	TMstIPPortType	ClientIPPort;
	// 登录成功时间
	TMstTimeType	ClientLoginTime;
	// App代码
	TMstAppIDType	ClientAppID;
};

// 用户发出获取安全安全登陆方法请求
struct CMstReqUserAuthMethodField
{
	// 交易日
	TMstDateType	TradingDay;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
};

// 用户发出获取安全安全登陆方法回复
struct CMstRspUserAuthMethodField
{
	// 当前可以用的认证模式
	TMstCurrentAuthMethodType	UsableAuthMethod;
};

// 用户发出获取安全安全登陆方法请求
struct CMstReqGenUserCaptchaField
{
	// 交易日
	TMstDateType	TradingDay;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
};

// 生成的图片验证码信息
struct CMstRspGenUserCaptchaField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 图片信息长度
	TMstCaptchaInfoLenType	CaptchaInfoLen;
	// 图片信息
	TMstCaptchaInfoType	CaptchaInfo;
};

// 用户发出获取安全安全登陆方法请求
struct CMstReqGenUserTextField
{
	// 交易日
	TMstDateType	TradingDay;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
};

// 短信验证码生成的回复
struct CMstRspGenUserTextField
{
	// 短信验证码序号
	TMstUserTextSeqType	UserTextSeq;
};

// 用户发出带图形验证码的登录请求请求
struct CMstReqUserLoginWithCaptchaField
{
	// 交易日
	TMstDateType	TradingDay;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 密码
	TMstPasswordType	Password;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// 接口端产品信息
	TMstProductInfoType	InterfaceProductInfo;
	// 协议信息
	TMstProtocolInfoType	ProtocolInfo;
	// Mac地址
	TMstMacAddressType	MacAddress;
	// 终端IP地址
	TMstIPAddressType	ClientIPAddress;
	// 登录备注
	TMstLoginRemarkType	LoginRemark;
	// 图形验证码的文字内容
	TMstPasswordType	Captcha;
	// 终端IP端口
	TMstIPPortType	ClientIPPort;
};

// 用户发出带短信验证码的登录请求请求
struct CMstReqUserLoginWithTextField
{
	// 交易日
	TMstDateType	TradingDay;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 密码
	TMstPasswordType	Password;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// 接口端产品信息
	TMstProductInfoType	InterfaceProductInfo;
	// 协议信息
	TMstProtocolInfoType	ProtocolInfo;
	// Mac地址
	TMstMacAddressType	MacAddress;
	// 终端IP地址
	TMstIPAddressType	ClientIPAddress;
	// 登录备注
	TMstLoginRemarkType	LoginRemark;
	// 短信验证码文字内容
	TMstPasswordType	Text;
	// 终端IP端口
	TMstIPPortType	ClientIPPort;
};

// 用户发出带动态验证码的登录请求请求
struct CMstReqUserLoginWithOTPField
{
	// 交易日
	TMstDateType	TradingDay;
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 密码
	TMstPasswordType	Password;
	// 用户端产品信息
	TMstProductInfoType	UserProductInfo;
	// 接口端产品信息
	TMstProductInfoType	InterfaceProductInfo;
	// 协议信息
	TMstProtocolInfoType	ProtocolInfo;
	// Mac地址
	TMstMacAddressType	MacAddress;
	// 终端IP地址
	TMstIPAddressType	ClientIPAddress;
	// 登录备注
	TMstLoginRemarkType	LoginRemark;
	// OTP密码
	TMstPasswordType	OTPPassword;
	// 终端IP端口
	TMstIPPortType	ClientIPPort;
};

// api握手请求
struct CMstReqApiHandshakeField
{
	// api与front通信密钥版本号
	TMstCryptoKeyVersionType	CryptoKeyVersion;
};

// front发给api的握手回复
struct CMstRspApiHandshakeField
{
	// 握手回复数据长度
	TMstHandshakeDataLenType	FrontHandshakeDataLen;
	// 握手回复数据
	TMstHandshakeDataType	FrontHandshakeData;
	// API认证是否开启
	TMstBoolType	IsApiAuthEnabled;
};

// api给front的验证key的请求
struct CMstReqVerifyApiKeyField
{
	// 握手回复数据长度
	TMstHandshakeDataLenType	ApiHandshakeDataLen;
	// 握手回复数据
	TMstHandshakeDataType	ApiHandshakeData;
};

// 操作员组织架构关系
struct CMstDepartmentUserField
{
	// 经纪公司代码
	TMstBrokerIDType	BrokerID;
	// 用户代码
	TMstUserIDType	UserID;
	// 投资者范围
	TMstDepartmentRangeType	InvestorRange;
	// 投资者代码
	TMstInvestorIDType	InvestorID;
};

// 查询频率，每秒查询比数
struct CMstQueryFreqField
{
	// 查询频率
	TMstQueryFreqType	QueryFreq;
};


*/
