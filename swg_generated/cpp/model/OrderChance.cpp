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



#include "OrderChance.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

OrderChance::OrderChance()
{
    m_Bid_fee = utility::conversions::to_string_t("");
    m_Bid_feeIsSet = false;
    m_Ask_fee = utility::conversions::to_string_t("");
    m_Ask_feeIsSet = false;
    m_MarketIsSet = false;
}

OrderChance::~OrderChance()
{
}

void OrderChance::validate()
{
    // TODO: implement validation
}

web::json::value OrderChance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Bid_feeIsSet)
    {
        val[utility::conversions::to_string_t("bid_fee")] = ModelBase::toJson(m_Bid_fee);
    }
    if(m_Ask_feeIsSet)
    {
        val[utility::conversions::to_string_t("ask_fee")] = ModelBase::toJson(m_Ask_fee);
    }
    if(m_MarketIsSet)
    {
        val[utility::conversions::to_string_t("market")] = ModelBase::toJson(m_Market);
    }

    return val;
}

void OrderChance::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("bid_fee")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("bid_fee")];
        if(!fieldValue.is_null())
        {
            setBidFee(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ask_fee")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("ask_fee")];
        if(!fieldValue.is_null())
        {
            setAskFee(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("market")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("market")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Market> newItem(new Market());
            newItem->fromJson(fieldValue);
            setMarket( newItem );
        }
    }
}

void OrderChance::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Bid_feeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("bid_fee"), m_Bid_fee));
        
    }
    if(m_Ask_feeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ask_fee"), m_Ask_fee));
        
    }
    if(m_MarketIsSet)
    {
        if (m_Market.get())
        {
            m_Market->toMultipart(multipart, utility::conversions::to_string_t("market."));
        }
        
    }
}

void OrderChance::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("bid_fee")))
    {
        setBidFee(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("bid_fee"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ask_fee")))
    {
        setAskFee(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("ask_fee"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("market")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("market")))
        {
            std::shared_ptr<Market> newItem(new Market());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("market."));
            setMarket( newItem );
        }
    }
}

utility::string_t OrderChance::getBidFee() const
{
    return m_Bid_fee;
}


void OrderChance::setBidFee(utility::string_t value)
{
    m_Bid_fee = value;
    m_Bid_feeIsSet = true;
}
bool OrderChance::bidFeeIsSet() const
{
    return m_Bid_feeIsSet;
}

void OrderChance::unsetBid_fee()
{
    m_Bid_feeIsSet = false;
}

utility::string_t OrderChance::getAskFee() const
{
    return m_Ask_fee;
}


void OrderChance::setAskFee(utility::string_t value)
{
    m_Ask_fee = value;
    m_Ask_feeIsSet = true;
}
bool OrderChance::askFeeIsSet() const
{
    return m_Ask_feeIsSet;
}

void OrderChance::unsetAsk_fee()
{
    m_Ask_feeIsSet = false;
}

std::shared_ptr<Market> OrderChance::getMarket() const
{
    return m_Market;
}


void OrderChance::setMarket(std::shared_ptr<Market> value)
{
    m_Market = value;
    m_MarketIsSet = true;
}
bool OrderChance::marketIsSet() const
{
    return m_MarketIsSet;
}

void OrderChance::unsetMarket()
{
    m_MarketIsSet = false;
}

}
}
}
}

