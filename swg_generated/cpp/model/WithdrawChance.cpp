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



#include "WithdrawChance.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

WithdrawChance::WithdrawChance()
{
    m_Member_levelIsSet = false;
    m_CurrencyIsSet = false;
    m_AccountIsSet = false;
    m_Withdraw_limitIsSet = false;
}

WithdrawChance::~WithdrawChance()
{
}

void WithdrawChance::validate()
{
    // TODO: implement validation
}

web::json::value WithdrawChance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Member_levelIsSet)
    {
        val[utility::conversions::to_string_t("member_level")] = ModelBase::toJson(m_Member_level);
    }
    if(m_CurrencyIsSet)
    {
        val[utility::conversions::to_string_t("currency")] = ModelBase::toJson(m_Currency);
    }
    if(m_AccountIsSet)
    {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(m_Account);
    }
    if(m_Withdraw_limitIsSet)
    {
        val[utility::conversions::to_string_t("withdraw_limit")] = ModelBase::toJson(m_Withdraw_limit);
    }

    return val;
}

void WithdrawChance::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("member_level")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("member_level")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<MemberLevel> newItem(new MemberLevel());
            newItem->fromJson(fieldValue);
            setMemberLevel( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currency")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("currency")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Currency> newItem(new Currency());
            newItem->fromJson(fieldValue);
            setCurrency( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("account")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Account> newItem(new Account());
            newItem->fromJson(fieldValue);
            setAccount( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("withdraw_limit")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("withdraw_limit")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<WithdrawLimit> newItem(new WithdrawLimit());
            newItem->fromJson(fieldValue);
            setWithdrawLimit( newItem );
        }
    }
}

void WithdrawChance::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Member_levelIsSet)
    {
        if (m_Member_level.get())
        {
            m_Member_level->toMultipart(multipart, utility::conversions::to_string_t("member_level."));
        }
        
    }
    if(m_CurrencyIsSet)
    {
        if (m_Currency.get())
        {
            m_Currency->toMultipart(multipart, utility::conversions::to_string_t("currency."));
        }
        
    }
    if(m_AccountIsSet)
    {
        if (m_Account.get())
        {
            m_Account->toMultipart(multipart, utility::conversions::to_string_t("account."));
        }
        
    }
    if(m_Withdraw_limitIsSet)
    {
        if (m_Withdraw_limit.get())
        {
            m_Withdraw_limit->toMultipart(multipart, utility::conversions::to_string_t("withdraw_limit."));
        }
        
    }
}

void WithdrawChance::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("member_level")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("member_level")))
        {
            std::shared_ptr<MemberLevel> newItem(new MemberLevel());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("member_level."));
            setMemberLevel( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("currency")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("currency")))
        {
            std::shared_ptr<Currency> newItem(new Currency());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("currency."));
            setCurrency( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("account")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("account")))
        {
            std::shared_ptr<Account> newItem(new Account());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("account."));
            setAccount( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("withdraw_limit")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("withdraw_limit")))
        {
            std::shared_ptr<WithdrawLimit> newItem(new WithdrawLimit());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("withdraw_limit."));
            setWithdrawLimit( newItem );
        }
    }
}

std::shared_ptr<MemberLevel> WithdrawChance::getMemberLevel() const
{
    return m_Member_level;
}


void WithdrawChance::setMemberLevel(std::shared_ptr<MemberLevel> value)
{
    m_Member_level = value;
    m_Member_levelIsSet = true;
}
bool WithdrawChance::memberLevelIsSet() const
{
    return m_Member_levelIsSet;
}

void WithdrawChance::unsetMember_level()
{
    m_Member_levelIsSet = false;
}

std::shared_ptr<Currency> WithdrawChance::getCurrency() const
{
    return m_Currency;
}


void WithdrawChance::setCurrency(std::shared_ptr<Currency> value)
{
    m_Currency = value;
    m_CurrencyIsSet = true;
}
bool WithdrawChance::currencyIsSet() const
{
    return m_CurrencyIsSet;
}

void WithdrawChance::unsetCurrency()
{
    m_CurrencyIsSet = false;
}

std::shared_ptr<Account> WithdrawChance::getAccount() const
{
    return m_Account;
}


void WithdrawChance::setAccount(std::shared_ptr<Account> value)
{
    m_Account = value;
    m_AccountIsSet = true;
}
bool WithdrawChance::accountIsSet() const
{
    return m_AccountIsSet;
}

void WithdrawChance::unsetAccount()
{
    m_AccountIsSet = false;
}

std::shared_ptr<WithdrawLimit> WithdrawChance::getWithdrawLimit() const
{
    return m_Withdraw_limit;
}


void WithdrawChance::setWithdrawLimit(std::shared_ptr<WithdrawLimit> value)
{
    m_Withdraw_limit = value;
    m_Withdraw_limitIsSet = true;
}
bool WithdrawChance::withdrawLimitIsSet() const
{
    return m_Withdraw_limitIsSet;
}

void WithdrawChance::unsetWithdraw_limit()
{
    m_Withdraw_limitIsSet = false;
}

}
}
}
}

