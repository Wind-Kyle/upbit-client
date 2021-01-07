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



#include "DepositTransferResponse.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

DepositTransferResponse::DepositTransferResponse()
{
    m_Success = false;
    m_SuccessIsSet = false;
    m_Message = utility::conversions::to_string_t("");
    m_MessageIsSet = false;
}

DepositTransferResponse::~DepositTransferResponse()
{
}

void DepositTransferResponse::validate()
{
    // TODO: implement validation
}

web::json::value DepositTransferResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_SuccessIsSet)
    {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(m_Success);
    }
    if(m_MessageIsSet)
    {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(m_Message);
    }

    return val;
}

void DepositTransferResponse::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("success")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("success")];
        if(!fieldValue.is_null())
        {
            setSuccess(ModelBase::boolFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("message")];
        if(!fieldValue.is_null())
        {
            setMessage(ModelBase::stringFromJson(fieldValue));
        }
    }
}

void DepositTransferResponse::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_SuccessIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("success"), m_Success));
    }
    if(m_MessageIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("message"), m_Message));
        
    }
}

void DepositTransferResponse::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("success")))
    {
        setSuccess(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("success"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("message")))
    {
        setMessage(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("message"))));
    }
}

bool DepositTransferResponse::isSuccess() const
{
    return m_Success;
}


void DepositTransferResponse::setSuccess(bool value)
{
    m_Success = value;
    m_SuccessIsSet = true;
}
bool DepositTransferResponse::successIsSet() const
{
    return m_SuccessIsSet;
}

void DepositTransferResponse::unsetSuccess()
{
    m_SuccessIsSet = false;
}

utility::string_t DepositTransferResponse::getMessage() const
{
    return m_Message;
}


void DepositTransferResponse::setMessage(utility::string_t value)
{
    m_Message = value;
    m_MessageIsSet = true;
}
bool DepositTransferResponse::messageIsSet() const
{
    return m_MessageIsSet;
}

void DepositTransferResponse::unsetMessage()
{
    m_MessageIsSet = false;
}

}
}
}
}

