/**
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.1.6
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.17.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Ticker.h
 *
 * 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Ticker_H_
#define IO_SWAGGER_CLIENT_MODEL_Ticker_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  Ticker
    : public ModelBase
{
public:
    Ticker();
    virtual ~Ticker();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Ticker members

    /// <summary>
    /// 종목 구분 코드
    /// </summary>
    utility::string_t getMarket() const;
    bool marketIsSet() const;
    void unsetMarket();
    void setMarket(utility::string_t value);
    /// <summary>
    /// 최근 거래 일자(UTC)
    /// </summary>
    utility::string_t getTradeDate() const;
    bool tradeDateIsSet() const;
    void unsetTrade_date();
    void setTradeDate(utility::string_t value);
    /// <summary>
    /// 최근 거래 시각(UTC)
    /// </summary>
    utility::string_t getTradeTime() const;
    bool tradeTimeIsSet() const;
    void unsetTrade_time();
    void setTradeTime(utility::string_t value);
    /// <summary>
    /// 최근 거래 일자(KST)
    /// </summary>
    utility::string_t getTradeDateKst() const;
    bool tradeDateKstIsSet() const;
    void unsetTrade_date_kst();
    void setTradeDateKst(utility::string_t value);
    /// <summary>
    /// 최근 거래 시각(KST)
    /// </summary>
    utility::string_t getTradeTimeKst() const;
    bool tradeTimeKstIsSet() const;
    void unsetTrade_time_kst();
    void setTradeTimeKst(utility::string_t value);
    /// <summary>
    /// 시가
    /// </summary>
    double getOpeningPrice() const;
    bool openingPriceIsSet() const;
    void unsetOpening_price();
    void setOpeningPrice(double value);
    /// <summary>
    /// 고가
    /// </summary>
    double getHighPrice() const;
    bool highPriceIsSet() const;
    void unsetHigh_price();
    void setHighPrice(double value);
    /// <summary>
    /// 저가
    /// </summary>
    double getLowPrice() const;
    bool lowPriceIsSet() const;
    void unsetLow_price();
    void setLowPrice(double value);
    /// <summary>
    /// 종가
    /// </summary>
    double getTradePrice() const;
    bool tradePriceIsSet() const;
    void unsetTrade_price();
    void setTradePrice(double value);
    /// <summary>
    /// 전일 종가
    /// </summary>
    double getPrevClosingPrice() const;
    bool prevClosingPriceIsSet() const;
    void unsetPrev_closing_price();
    void setPrevClosingPrice(double value);
    /// <summary>
    /// EVEN : 보합 RISE : 상승 FALL : 하락 
    /// </summary>
    utility::string_t getChange() const;
    bool changeIsSet() const;
    void unsetChange();
    void setChange(utility::string_t value);
    /// <summary>
    /// 변화액의 절대값
    /// </summary>
    double getChangePrice() const;
    bool changePriceIsSet() const;
    void unsetChange_price();
    void setChangePrice(double value);
    /// <summary>
    /// 변화율의 절대값
    /// </summary>
    double getChangeRate() const;
    bool changeRateIsSet() const;
    void unsetChange_rate();
    void setChangeRate(double value);
    /// <summary>
    /// 부호가 있는 변화액
    /// </summary>
    double getSignedChangePrice() const;
    bool signedChangePriceIsSet() const;
    void unsetSigned_change_price();
    void setSignedChangePrice(double value);
    /// <summary>
    /// 부호가 있는 변화율
    /// </summary>
    double getSignedChangeRate() const;
    bool signedChangeRateIsSet() const;
    void unsetSigned_change_rate();
    void setSignedChangeRate(double value);
    /// <summary>
    /// 가장 최근 거래량
    /// </summary>
    double getTradeVolume() const;
    bool tradeVolumeIsSet() const;
    void unsetTrade_volume();
    void setTradeVolume(double value);
    /// <summary>
    /// 누적 거래대금 (UTC 0시 기준)
    /// </summary>
    double getAccTradePrice() const;
    bool accTradePriceIsSet() const;
    void unsetAcc_trade_price();
    void setAccTradePrice(double value);
    /// <summary>
    /// 24시간 누적 거래대금
    /// </summary>
    double getAccTradePrice24h() const;
    bool accTradePrice24hIsSet() const;
    void unsetAcc_trade_price_24h();
    void setAccTradePrice24h(double value);
    /// <summary>
    /// 누적 거래량 (UTC 0시 기준)
    /// </summary>
    double getAccTradeVolume() const;
    bool accTradeVolumeIsSet() const;
    void unsetAcc_trade_volume();
    void setAccTradeVolume(double value);
    /// <summary>
    /// 24시간 누적 거래량
    /// </summary>
    double getAccTradeVolume24h() const;
    bool accTradeVolume24hIsSet() const;
    void unsetAcc_trade_volume_24h();
    void setAccTradeVolume24h(double value);
    /// <summary>
    /// 52주 신고가
    /// </summary>
    double getHighest52WeekPrice() const;
    bool highest52WeekPriceIsSet() const;
    void unsetHighest_52_week_price();
    void setHighest52WeekPrice(double value);
    /// <summary>
    /// 52주 신고가 달성일
    /// </summary>
    utility::string_t getHighest52WeekDate() const;
    bool highest52WeekDateIsSet() const;
    void unsetHighest_52_week_date();
    void setHighest52WeekDate(utility::string_t value);
    /// <summary>
    /// 52주 신저가
    /// </summary>
    double getLowest52WeekPrice() const;
    bool lowest52WeekPriceIsSet() const;
    void unsetLowest_52_week_price();
    void setLowest52WeekPrice(double value);
    /// <summary>
    /// 52주 신저가 달성일
    /// </summary>
    utility::string_t getLowest52WeekDate() const;
    bool lowest52WeekDateIsSet() const;
    void unsetLowest_52_week_date();
    void setLowest52WeekDate(utility::string_t value);
    /// <summary>
    /// 타임스탬프
    /// </summary>
    double getTimestamp() const;
    bool timestampIsSet() const;
    void unsetTimestamp();
    void setTimestamp(double value);

protected:
    utility::string_t m_Market;
    bool m_MarketIsSet;
    utility::string_t m_Trade_date;
    bool m_Trade_dateIsSet;
    utility::string_t m_Trade_time;
    bool m_Trade_timeIsSet;
    utility::string_t m_Trade_date_kst;
    bool m_Trade_date_kstIsSet;
    utility::string_t m_Trade_time_kst;
    bool m_Trade_time_kstIsSet;
    double m_Opening_price;
    bool m_Opening_priceIsSet;
    double m_High_price;
    bool m_High_priceIsSet;
    double m_Low_price;
    bool m_Low_priceIsSet;
    double m_Trade_price;
    bool m_Trade_priceIsSet;
    double m_Prev_closing_price;
    bool m_Prev_closing_priceIsSet;
    utility::string_t m_Change;
    bool m_ChangeIsSet;
    double m_Change_price;
    bool m_Change_priceIsSet;
    double m_Change_rate;
    bool m_Change_rateIsSet;
    double m_Signed_change_price;
    bool m_Signed_change_priceIsSet;
    double m_Signed_change_rate;
    bool m_Signed_change_rateIsSet;
    double m_Trade_volume;
    bool m_Trade_volumeIsSet;
    double m_Acc_trade_price;
    bool m_Acc_trade_priceIsSet;
    double m_Acc_trade_price_24h;
    bool m_Acc_trade_price_24hIsSet;
    double m_Acc_trade_volume;
    bool m_Acc_trade_volumeIsSet;
    double m_Acc_trade_volume_24h;
    bool m_Acc_trade_volume_24hIsSet;
    double m_Highest_52_week_price;
    bool m_Highest_52_week_priceIsSet;
    utility::string_t m_Highest_52_week_date;
    bool m_Highest_52_week_dateIsSet;
    double m_Lowest_52_week_price;
    bool m_Lowest_52_week_priceIsSet;
    utility::string_t m_Lowest_52_week_date;
    bool m_Lowest_52_week_dateIsSet;
    double m_Timestamp;
    bool m_TimestampIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Ticker_H_ */
