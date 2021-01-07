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



#include "CandleDays.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

CandleDays::CandleDays()
{
    m_Market = utility::conversions::to_string_t("");
    m_MarketIsSet = false;
    m_Candle_date_time_utc = utility::conversions::to_string_t("");
    m_Candle_date_time_utcIsSet = false;
    m_Candle_date_time_kst = utility::conversions::to_string_t("");
    m_Candle_date_time_kstIsSet = false;
    m_Opening_price = 0.0;
    m_Opening_priceIsSet = false;
    m_High_price = 0.0;
    m_High_priceIsSet = false;
    m_Low_price = 0.0;
    m_Low_priceIsSet = false;
    m_Trade_price = 0.0;
    m_Trade_priceIsSet = false;
    m_Timestamp = 0.0;
    m_TimestampIsSet = false;
    m_Candle_acc_trade_price = 0.0;
    m_Candle_acc_trade_priceIsSet = false;
    m_Candle_acc_trade_volume = 0.0;
    m_Candle_acc_trade_volumeIsSet = false;
    m_Prev_closing_price = 0.0;
    m_Prev_closing_priceIsSet = false;
    m_Change_price = 0.0;
    m_Change_priceIsSet = false;
    m_Change_rate = 0.0;
    m_Change_rateIsSet = false;
    m_Converted_trade_price = 0.0;
    m_Converted_trade_priceIsSet = false;
}

CandleDays::~CandleDays()
{
}

void CandleDays::validate()
{
    // TODO: implement validation
}

web::json::value CandleDays::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_MarketIsSet)
    {
        val[utility::conversions::to_string_t("market")] = ModelBase::toJson(m_Market);
    }
    if(m_Candle_date_time_utcIsSet)
    {
        val[utility::conversions::to_string_t("candle_date_time_utc")] = ModelBase::toJson(m_Candle_date_time_utc);
    }
    if(m_Candle_date_time_kstIsSet)
    {
        val[utility::conversions::to_string_t("candle_date_time_kst")] = ModelBase::toJson(m_Candle_date_time_kst);
    }
    if(m_Opening_priceIsSet)
    {
        val[utility::conversions::to_string_t("opening_price")] = ModelBase::toJson(m_Opening_price);
    }
    if(m_High_priceIsSet)
    {
        val[utility::conversions::to_string_t("high_price")] = ModelBase::toJson(m_High_price);
    }
    if(m_Low_priceIsSet)
    {
        val[utility::conversions::to_string_t("low_price")] = ModelBase::toJson(m_Low_price);
    }
    if(m_Trade_priceIsSet)
    {
        val[utility::conversions::to_string_t("trade_price")] = ModelBase::toJson(m_Trade_price);
    }
    if(m_TimestampIsSet)
    {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(m_Timestamp);
    }
    if(m_Candle_acc_trade_priceIsSet)
    {
        val[utility::conversions::to_string_t("candle_acc_trade_price")] = ModelBase::toJson(m_Candle_acc_trade_price);
    }
    if(m_Candle_acc_trade_volumeIsSet)
    {
        val[utility::conversions::to_string_t("candle_acc_trade_volume")] = ModelBase::toJson(m_Candle_acc_trade_volume);
    }
    if(m_Prev_closing_priceIsSet)
    {
        val[utility::conversions::to_string_t("prev_closing_price")] = ModelBase::toJson(m_Prev_closing_price);
    }
    if(m_Change_priceIsSet)
    {
        val[utility::conversions::to_string_t("change_price")] = ModelBase::toJson(m_Change_price);
    }
    if(m_Change_rateIsSet)
    {
        val[utility::conversions::to_string_t("change_rate")] = ModelBase::toJson(m_Change_rate);
    }
    if(m_Converted_trade_priceIsSet)
    {
        val[utility::conversions::to_string_t("converted_trade_price")] = ModelBase::toJson(m_Converted_trade_price);
    }

    return val;
}

void CandleDays::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("market")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("market")];
        if(!fieldValue.is_null())
        {
            setMarket(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("candle_date_time_utc")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("candle_date_time_utc")];
        if(!fieldValue.is_null())
        {
            setCandleDateTimeUtc(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("candle_date_time_kst")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("candle_date_time_kst")];
        if(!fieldValue.is_null())
        {
            setCandleDateTimeKst(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opening_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("opening_price")];
        if(!fieldValue.is_null())
        {
            setOpeningPrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("high_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("high_price")];
        if(!fieldValue.is_null())
        {
            setHighPrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("low_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("low_price")];
        if(!fieldValue.is_null())
        {
            setLowPrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trade_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("trade_price")];
        if(!fieldValue.is_null())
        {
            setTradePrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("timestamp")];
        if(!fieldValue.is_null())
        {
            setTimestamp(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("candle_acc_trade_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("candle_acc_trade_price")];
        if(!fieldValue.is_null())
        {
            setCandleAccTradePrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("candle_acc_trade_volume")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("candle_acc_trade_volume")];
        if(!fieldValue.is_null())
        {
            setCandleAccTradeVolume(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prev_closing_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("prev_closing_price")];
        if(!fieldValue.is_null())
        {
            setPrevClosingPrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("change_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("change_price")];
        if(!fieldValue.is_null())
        {
            setChangePrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("change_rate")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("change_rate")];
        if(!fieldValue.is_null())
        {
            setChangeRate(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("converted_trade_price")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("converted_trade_price")];
        if(!fieldValue.is_null())
        {
            setConvertedTradePrice(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void CandleDays::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_MarketIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("market"), m_Market));
        
    }
    if(m_Candle_date_time_utcIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("candle_date_time_utc"), m_Candle_date_time_utc));
        
    }
    if(m_Candle_date_time_kstIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("candle_date_time_kst"), m_Candle_date_time_kst));
        
    }
    if(m_Opening_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("opening_price"), m_Opening_price));
    }
    if(m_High_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("high_price"), m_High_price));
    }
    if(m_Low_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("low_price"), m_Low_price));
    }
    if(m_Trade_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("trade_price"), m_Trade_price));
    }
    if(m_TimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timestamp"), m_Timestamp));
    }
    if(m_Candle_acc_trade_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("candle_acc_trade_price"), m_Candle_acc_trade_price));
    }
    if(m_Candle_acc_trade_volumeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("candle_acc_trade_volume"), m_Candle_acc_trade_volume));
    }
    if(m_Prev_closing_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("prev_closing_price"), m_Prev_closing_price));
    }
    if(m_Change_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("change_price"), m_Change_price));
    }
    if(m_Change_rateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("change_rate"), m_Change_rate));
    }
    if(m_Converted_trade_priceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("converted_trade_price"), m_Converted_trade_price));
    }
}

void CandleDays::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("market")))
    {
        setMarket(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("market"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("candle_date_time_utc")))
    {
        setCandleDateTimeUtc(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("candle_date_time_utc"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("candle_date_time_kst")))
    {
        setCandleDateTimeKst(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("candle_date_time_kst"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("opening_price")))
    {
        setOpeningPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("opening_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("high_price")))
    {
        setHighPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("high_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("low_price")))
    {
        setLowPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("low_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("trade_price")))
    {
        setTradePrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("trade_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("timestamp")))
    {
        setTimestamp(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timestamp"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("candle_acc_trade_price")))
    {
        setCandleAccTradePrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("candle_acc_trade_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("candle_acc_trade_volume")))
    {
        setCandleAccTradeVolume(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("candle_acc_trade_volume"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("prev_closing_price")))
    {
        setPrevClosingPrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("prev_closing_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("change_price")))
    {
        setChangePrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("change_price"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("change_rate")))
    {
        setChangeRate(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("change_rate"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("converted_trade_price")))
    {
        setConvertedTradePrice(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("converted_trade_price"))));
    }
}

utility::string_t CandleDays::getMarket() const
{
    return m_Market;
}


void CandleDays::setMarket(utility::string_t value)
{
    m_Market = value;
    m_MarketIsSet = true;
}
bool CandleDays::marketIsSet() const
{
    return m_MarketIsSet;
}

void CandleDays::unsetMarket()
{
    m_MarketIsSet = false;
}

utility::string_t CandleDays::getCandleDateTimeUtc() const
{
    return m_Candle_date_time_utc;
}


void CandleDays::setCandleDateTimeUtc(utility::string_t value)
{
    m_Candle_date_time_utc = value;
    m_Candle_date_time_utcIsSet = true;
}
bool CandleDays::candleDateTimeUtcIsSet() const
{
    return m_Candle_date_time_utcIsSet;
}

void CandleDays::unsetCandle_date_time_utc()
{
    m_Candle_date_time_utcIsSet = false;
}

utility::string_t CandleDays::getCandleDateTimeKst() const
{
    return m_Candle_date_time_kst;
}


void CandleDays::setCandleDateTimeKst(utility::string_t value)
{
    m_Candle_date_time_kst = value;
    m_Candle_date_time_kstIsSet = true;
}
bool CandleDays::candleDateTimeKstIsSet() const
{
    return m_Candle_date_time_kstIsSet;
}

void CandleDays::unsetCandle_date_time_kst()
{
    m_Candle_date_time_kstIsSet = false;
}

double CandleDays::getOpeningPrice() const
{
    return m_Opening_price;
}


void CandleDays::setOpeningPrice(double value)
{
    m_Opening_price = value;
    m_Opening_priceIsSet = true;
}
bool CandleDays::openingPriceIsSet() const
{
    return m_Opening_priceIsSet;
}

void CandleDays::unsetOpening_price()
{
    m_Opening_priceIsSet = false;
}

double CandleDays::getHighPrice() const
{
    return m_High_price;
}


void CandleDays::setHighPrice(double value)
{
    m_High_price = value;
    m_High_priceIsSet = true;
}
bool CandleDays::highPriceIsSet() const
{
    return m_High_priceIsSet;
}

void CandleDays::unsetHigh_price()
{
    m_High_priceIsSet = false;
}

double CandleDays::getLowPrice() const
{
    return m_Low_price;
}


void CandleDays::setLowPrice(double value)
{
    m_Low_price = value;
    m_Low_priceIsSet = true;
}
bool CandleDays::lowPriceIsSet() const
{
    return m_Low_priceIsSet;
}

void CandleDays::unsetLow_price()
{
    m_Low_priceIsSet = false;
}

double CandleDays::getTradePrice() const
{
    return m_Trade_price;
}


void CandleDays::setTradePrice(double value)
{
    m_Trade_price = value;
    m_Trade_priceIsSet = true;
}
bool CandleDays::tradePriceIsSet() const
{
    return m_Trade_priceIsSet;
}

void CandleDays::unsetTrade_price()
{
    m_Trade_priceIsSet = false;
}

double CandleDays::getTimestamp() const
{
    return m_Timestamp;
}


void CandleDays::setTimestamp(double value)
{
    m_Timestamp = value;
    m_TimestampIsSet = true;
}
bool CandleDays::timestampIsSet() const
{
    return m_TimestampIsSet;
}

void CandleDays::unsetTimestamp()
{
    m_TimestampIsSet = false;
}

double CandleDays::getCandleAccTradePrice() const
{
    return m_Candle_acc_trade_price;
}


void CandleDays::setCandleAccTradePrice(double value)
{
    m_Candle_acc_trade_price = value;
    m_Candle_acc_trade_priceIsSet = true;
}
bool CandleDays::candleAccTradePriceIsSet() const
{
    return m_Candle_acc_trade_priceIsSet;
}

void CandleDays::unsetCandle_acc_trade_price()
{
    m_Candle_acc_trade_priceIsSet = false;
}

double CandleDays::getCandleAccTradeVolume() const
{
    return m_Candle_acc_trade_volume;
}


void CandleDays::setCandleAccTradeVolume(double value)
{
    m_Candle_acc_trade_volume = value;
    m_Candle_acc_trade_volumeIsSet = true;
}
bool CandleDays::candleAccTradeVolumeIsSet() const
{
    return m_Candle_acc_trade_volumeIsSet;
}

void CandleDays::unsetCandle_acc_trade_volume()
{
    m_Candle_acc_trade_volumeIsSet = false;
}

double CandleDays::getPrevClosingPrice() const
{
    return m_Prev_closing_price;
}


void CandleDays::setPrevClosingPrice(double value)
{
    m_Prev_closing_price = value;
    m_Prev_closing_priceIsSet = true;
}
bool CandleDays::prevClosingPriceIsSet() const
{
    return m_Prev_closing_priceIsSet;
}

void CandleDays::unsetPrev_closing_price()
{
    m_Prev_closing_priceIsSet = false;
}

double CandleDays::getChangePrice() const
{
    return m_Change_price;
}


void CandleDays::setChangePrice(double value)
{
    m_Change_price = value;
    m_Change_priceIsSet = true;
}
bool CandleDays::changePriceIsSet() const
{
    return m_Change_priceIsSet;
}

void CandleDays::unsetChange_price()
{
    m_Change_priceIsSet = false;
}

double CandleDays::getChangeRate() const
{
    return m_Change_rate;
}


void CandleDays::setChangeRate(double value)
{
    m_Change_rate = value;
    m_Change_rateIsSet = true;
}
bool CandleDays::changeRateIsSet() const
{
    return m_Change_rateIsSet;
}

void CandleDays::unsetChange_rate()
{
    m_Change_rateIsSet = false;
}

double CandleDays::getConvertedTradePrice() const
{
    return m_Converted_trade_price;
}


void CandleDays::setConvertedTradePrice(double value)
{
    m_Converted_trade_price = value;
    m_Converted_trade_priceIsSet = true;
}
bool CandleDays::convertedTradePriceIsSet() const
{
    return m_Converted_trade_priceIsSet;
}

void CandleDays::unsetConverted_trade_price()
{
    m_Converted_trade_priceIsSet = false;
}

}
}
}
}

