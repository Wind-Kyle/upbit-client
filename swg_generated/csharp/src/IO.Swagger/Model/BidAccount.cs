/* 
 * Upbit Open API
 *
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.1.6
 * Contact: ujhin942@gmail.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using SwaggerDateConverter = IO.Swagger.Client.SwaggerDateConverter;

namespace IO.Swagger.Model
{
    /// <summary>
    /// 매수 시 사용하는 화폐의 계좌 상태
    /// </summary>
    [DataContract]
    public partial class BidAccount :  IEquatable<BidAccount>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="BidAccount" /> class.
        /// </summary>
        /// <param name="currency">화폐를 의미하는 영문 대문자 코드.</param>
        /// <param name="balance">주문가능 금액/수량.</param>
        /// <param name="locked">주문 중 묶여있는 금액/수량.</param>
        /// <param name="avgBuyPrice">매수평균가.</param>
        /// <param name="avgBuyPriceModified">매수평균가 수정 여부.</param>
        /// <param name="unitCurrency">평단가 기준 화폐.</param>
        public BidAccount(string currency = default(string), string balance = default(string), string locked = default(string), string avgBuyPrice = default(string), bool? avgBuyPriceModified = default(bool?), string unitCurrency = default(string))
        {
            this.Currency = currency;
            this.Balance = balance;
            this.Locked = locked;
            this.AvgBuyPrice = avgBuyPrice;
            this.AvgBuyPriceModified = avgBuyPriceModified;
            this.UnitCurrency = unitCurrency;
        }
        
        /// <summary>
        /// 화폐를 의미하는 영문 대문자 코드
        /// </summary>
        /// <value>화폐를 의미하는 영문 대문자 코드</value>
        [DataMember(Name="currency", EmitDefaultValue=false)]
        public string Currency { get; set; }

        /// <summary>
        /// 주문가능 금액/수량
        /// </summary>
        /// <value>주문가능 금액/수량</value>
        [DataMember(Name="balance", EmitDefaultValue=false)]
        public string Balance { get; set; }

        /// <summary>
        /// 주문 중 묶여있는 금액/수량
        /// </summary>
        /// <value>주문 중 묶여있는 금액/수량</value>
        [DataMember(Name="locked", EmitDefaultValue=false)]
        public string Locked { get; set; }

        /// <summary>
        /// 매수평균가
        /// </summary>
        /// <value>매수평균가</value>
        [DataMember(Name="avg_buy_price", EmitDefaultValue=false)]
        public string AvgBuyPrice { get; set; }

        /// <summary>
        /// 매수평균가 수정 여부
        /// </summary>
        /// <value>매수평균가 수정 여부</value>
        [DataMember(Name="avg_buy_price_modified", EmitDefaultValue=false)]
        public bool? AvgBuyPriceModified { get; set; }

        /// <summary>
        /// 평단가 기준 화폐
        /// </summary>
        /// <value>평단가 기준 화폐</value>
        [DataMember(Name="unit_currency", EmitDefaultValue=false)]
        public string UnitCurrency { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class BidAccount {\n");
            sb.Append("  Currency: ").Append(Currency).Append("\n");
            sb.Append("  Balance: ").Append(Balance).Append("\n");
            sb.Append("  Locked: ").Append(Locked).Append("\n");
            sb.Append("  AvgBuyPrice: ").Append(AvgBuyPrice).Append("\n");
            sb.Append("  AvgBuyPriceModified: ").Append(AvgBuyPriceModified).Append("\n");
            sb.Append("  UnitCurrency: ").Append(UnitCurrency).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as BidAccount);
        }

        /// <summary>
        /// Returns true if BidAccount instances are equal
        /// </summary>
        /// <param name="input">Instance of BidAccount to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(BidAccount input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Currency == input.Currency ||
                    (this.Currency != null &&
                    this.Currency.Equals(input.Currency))
                ) && 
                (
                    this.Balance == input.Balance ||
                    (this.Balance != null &&
                    this.Balance.Equals(input.Balance))
                ) && 
                (
                    this.Locked == input.Locked ||
                    (this.Locked != null &&
                    this.Locked.Equals(input.Locked))
                ) && 
                (
                    this.AvgBuyPrice == input.AvgBuyPrice ||
                    (this.AvgBuyPrice != null &&
                    this.AvgBuyPrice.Equals(input.AvgBuyPrice))
                ) && 
                (
                    this.AvgBuyPriceModified == input.AvgBuyPriceModified ||
                    (this.AvgBuyPriceModified != null &&
                    this.AvgBuyPriceModified.Equals(input.AvgBuyPriceModified))
                ) && 
                (
                    this.UnitCurrency == input.UnitCurrency ||
                    (this.UnitCurrency != null &&
                    this.UnitCurrency.Equals(input.UnitCurrency))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.Currency != null)
                    hashCode = hashCode * 59 + this.Currency.GetHashCode();
                if (this.Balance != null)
                    hashCode = hashCode * 59 + this.Balance.GetHashCode();
                if (this.Locked != null)
                    hashCode = hashCode * 59 + this.Locked.GetHashCode();
                if (this.AvgBuyPrice != null)
                    hashCode = hashCode * 59 + this.AvgBuyPrice.GetHashCode();
                if (this.AvgBuyPriceModified != null)
                    hashCode = hashCode * 59 + this.AvgBuyPriceModified.GetHashCode();
                if (this.UnitCurrency != null)
                    hashCode = hashCode * 59 + this.UnitCurrency.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
