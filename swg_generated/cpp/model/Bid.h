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
 * Bid.h
 *
 * 매수 시 제약사항
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Bid_H_
#define IO_SWAGGER_CLIENT_MODEL_Bid_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 매수 시 제약사항
/// </summary>
class  Bid
    : public ModelBase
{
public:
    Bid();
    virtual ~Bid();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Bid members

    /// <summary>
    /// 화폐를 의미하는 영문 대문자 코드
    /// </summary>
    utility::string_t getCurrency() const;
    bool currencyIsSet() const;
    void unsetCurrency();
    void setCurrency(utility::string_t value);
    /// <summary>
    /// 주문금액 단위
    /// </summary>
    utility::string_t getPriceUnit() const;
    bool priceUnitIsSet() const;
    void unsetPrice_unit();
    void setPriceUnit(utility::string_t value);
    /// <summary>
    /// 최소 매도/매수 금액
    /// </summary>
    double getMinTotal() const;
    bool minTotalIsSet() const;
    void unsetMin_total();
    void setMinTotal(double value);

protected:
    utility::string_t m_Currency;
    bool m_CurrencyIsSet;
    utility::string_t m_Price_unit;
    bool m_Price_unitIsSet;
    double m_Min_total;
    bool m_Min_totalIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Bid_H_ */
