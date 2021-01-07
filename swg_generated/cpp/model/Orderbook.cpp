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



#include "Orderbook.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

Orderbook::Orderbook()
{
    m_Market = utility::conversions::to_string_t("");
    m_MarketIsSet = false;
    m_Timestamp = 0.0;
    m_TimestampIsSet = false;
    m_Total_ask_size = 0.0;
    m_Total_ask_sizeIsSet = false;
    m_Total_bid_size = 0.0;
    m_Total_bid_sizeIsSet = false;
    m_Orderbook_unitsIsSet = false;
}

Orderbook::~Orderbook()
{
}

void Orderbook::validate()
{
    // TODO: implement validation
}

web::json::value Orderbook::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_MarketIsSet)
    {
        val[utility::conversions::to_string_t("market")] = ModelBase::toJson(m_Market);
    }
    if(m_TimestampIsSet)
    {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(m_Timestamp);
    }
    if(m_Total_ask_sizeIsSet)
    {
        val[utility::conversions::to_string_t("total_ask_size")] = ModelBase::toJson(m_Total_ask_size);
    }
    if(m_Total_bid_sizeIsSet)
    {
        val[utility::conversions::to_string_t("total_bid_size")] = ModelBase::toJson(m_Total_bid_size);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Orderbook_units )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("orderbook_units")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void Orderbook::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("market")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("market")];
        if(!fieldValue.is_null())
        {
            setMarket(ModelBase::stringFromJson(fieldValue));
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
    if(val.has_field(utility::conversions::to_string_t("total_ask_size")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("total_ask_size")];
        if(!fieldValue.is_null())
        {
            setTotalAskSize(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_bid_size")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("total_bid_size")];
        if(!fieldValue.is_null())
        {
            setTotalBidSize(ModelBase::doubleFromJson(fieldValue));
        }
    }
    {
        m_Orderbook_units.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("orderbook_units")))
        {
        for( auto& item : val[utility::conversions::to_string_t("orderbook_units")].as_array() )
        {
            if(item.is_null())
            {
                m_Orderbook_units.push_back( std::shared_ptr<OrderbookUnit>(nullptr) );
            }
            else
            {
                std::shared_ptr<OrderbookUnit> newItem(new OrderbookUnit());
                newItem->fromJson(item);
                m_Orderbook_units.push_back( newItem );
            }
        }
        }
    }
}

void Orderbook::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_TimestampIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("timestamp"), m_Timestamp));
    }
    if(m_Total_ask_sizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("total_ask_size"), m_Total_ask_size));
    }
    if(m_Total_bid_sizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("total_bid_size"), m_Total_bid_size));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Orderbook_units )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("orderbook_units"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void Orderbook::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("timestamp")))
    {
        setTimestamp(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("timestamp"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("total_ask_size")))
    {
        setTotalAskSize(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("total_ask_size"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("total_bid_size")))
    {
        setTotalBidSize(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("total_bid_size"))));
    }
    {
        m_Orderbook_units.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("orderbook_units")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("orderbook_units"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Orderbook_units.push_back( std::shared_ptr<OrderbookUnit>(nullptr) );
            }
            else
            {
                std::shared_ptr<OrderbookUnit> newItem(new OrderbookUnit());
                newItem->fromJson(item);
                m_Orderbook_units.push_back( newItem );
            }
        }
        }
    }
}

utility::string_t Orderbook::getMarket() const
{
    return m_Market;
}


void Orderbook::setMarket(utility::string_t value)
{
    m_Market = value;
    m_MarketIsSet = true;
}
bool Orderbook::marketIsSet() const
{
    return m_MarketIsSet;
}

void Orderbook::unsetMarket()
{
    m_MarketIsSet = false;
}

double Orderbook::getTimestamp() const
{
    return m_Timestamp;
}


void Orderbook::setTimestamp(double value)
{
    m_Timestamp = value;
    m_TimestampIsSet = true;
}
bool Orderbook::timestampIsSet() const
{
    return m_TimestampIsSet;
}

void Orderbook::unsetTimestamp()
{
    m_TimestampIsSet = false;
}

double Orderbook::getTotalAskSize() const
{
    return m_Total_ask_size;
}


void Orderbook::setTotalAskSize(double value)
{
    m_Total_ask_size = value;
    m_Total_ask_sizeIsSet = true;
}
bool Orderbook::totalAskSizeIsSet() const
{
    return m_Total_ask_sizeIsSet;
}

void Orderbook::unsetTotal_ask_size()
{
    m_Total_ask_sizeIsSet = false;
}

double Orderbook::getTotalBidSize() const
{
    return m_Total_bid_size;
}


void Orderbook::setTotalBidSize(double value)
{
    m_Total_bid_size = value;
    m_Total_bid_sizeIsSet = true;
}
bool Orderbook::totalBidSizeIsSet() const
{
    return m_Total_bid_sizeIsSet;
}

void Orderbook::unsetTotal_bid_size()
{
    m_Total_bid_sizeIsSet = false;
}

std::vector<std::shared_ptr<OrderbookUnit>>& Orderbook::getOrderbookUnits()
{
    return m_Orderbook_units;
}

void Orderbook::setOrderbookUnits(std::vector<std::shared_ptr<OrderbookUnit>> value)
{
    m_Orderbook_units = value;
    m_Orderbook_unitsIsSet = true;
}
bool Orderbook::orderbookUnitsIsSet() const
{
    return m_Orderbook_unitsIsSet;
}

void Orderbook::unsetOrderbook_units()
{
    m_Orderbook_unitsIsSet = false;
}

}
}
}
}

