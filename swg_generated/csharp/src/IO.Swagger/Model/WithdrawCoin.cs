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
    /// WithdrawCoin
    /// </summary>
    [DataContract]
    public partial class WithdrawCoin :  IEquatable<WithdrawCoin>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="WithdrawCoin" /> class.
        /// </summary>
        /// <param name="type">입출금 종류.</param>
        /// <param name="uuid">출금의 고유 아이디.</param>
        /// <param name="currency">화폐를 의미하는 영문 대문자 코드.</param>
        /// <param name="txid">출금의 트랜잭션 아이디.</param>
        /// <param name="state">출금 상태.</param>
        /// <param name="createdAt">출금 생성 시간.</param>
        /// <param name="doneAt">출금 완료 시간.</param>
        /// <param name="amount">출금 금액/수량.</param>
        /// <param name="fee">출금 수수료.</param>
        /// <param name="krwAmount">원화 환산 가격.</param>
        /// <param name="transactionType">출금 유형 - default : 일반출금 - internal : 바로출금  String .</param>
        public WithdrawCoin(string type = default(string), string uuid = default(string), string currency = default(string), string txid = default(string), string state = default(string), string createdAt = default(string), string doneAt = default(string), string amount = default(string), string fee = default(string), string krwAmount = default(string), string transactionType = default(string))
        {
            this.Type = type;
            this.Uuid = uuid;
            this.Currency = currency;
            this.Txid = txid;
            this.State = state;
            this.CreatedAt = createdAt;
            this.DoneAt = doneAt;
            this.Amount = amount;
            this.Fee = fee;
            this.KrwAmount = krwAmount;
            this.TransactionType = transactionType;
        }
        
        /// <summary>
        /// 입출금 종류
        /// </summary>
        /// <value>입출금 종류</value>
        [DataMember(Name="type", EmitDefaultValue=false)]
        public string Type { get; set; }

        /// <summary>
        /// 출금의 고유 아이디
        /// </summary>
        /// <value>출금의 고유 아이디</value>
        [DataMember(Name="uuid", EmitDefaultValue=false)]
        public string Uuid { get; set; }

        /// <summary>
        /// 화폐를 의미하는 영문 대문자 코드
        /// </summary>
        /// <value>화폐를 의미하는 영문 대문자 코드</value>
        [DataMember(Name="currency", EmitDefaultValue=false)]
        public string Currency { get; set; }

        /// <summary>
        /// 출금의 트랜잭션 아이디
        /// </summary>
        /// <value>출금의 트랜잭션 아이디</value>
        [DataMember(Name="txid", EmitDefaultValue=false)]
        public string Txid { get; set; }

        /// <summary>
        /// 출금 상태
        /// </summary>
        /// <value>출금 상태</value>
        [DataMember(Name="state", EmitDefaultValue=false)]
        public string State { get; set; }

        /// <summary>
        /// 출금 생성 시간
        /// </summary>
        /// <value>출금 생성 시간</value>
        [DataMember(Name="created_at", EmitDefaultValue=false)]
        public string CreatedAt { get; set; }

        /// <summary>
        /// 출금 완료 시간
        /// </summary>
        /// <value>출금 완료 시간</value>
        [DataMember(Name="done_at", EmitDefaultValue=false)]
        public string DoneAt { get; set; }

        /// <summary>
        /// 출금 금액/수량
        /// </summary>
        /// <value>출금 금액/수량</value>
        [DataMember(Name="amount", EmitDefaultValue=false)]
        public string Amount { get; set; }

        /// <summary>
        /// 출금 수수료
        /// </summary>
        /// <value>출금 수수료</value>
        [DataMember(Name="fee", EmitDefaultValue=false)]
        public string Fee { get; set; }

        /// <summary>
        /// 원화 환산 가격
        /// </summary>
        /// <value>원화 환산 가격</value>
        [DataMember(Name="krw_amount", EmitDefaultValue=false)]
        public string KrwAmount { get; set; }

        /// <summary>
        /// 출금 유형 - default : 일반출금 - internal : 바로출금  String 
        /// </summary>
        /// <value>출금 유형 - default : 일반출금 - internal : 바로출금  String </value>
        [DataMember(Name="transaction_type", EmitDefaultValue=false)]
        public string TransactionType { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class WithdrawCoin {\n");
            sb.Append("  Type: ").Append(Type).Append("\n");
            sb.Append("  Uuid: ").Append(Uuid).Append("\n");
            sb.Append("  Currency: ").Append(Currency).Append("\n");
            sb.Append("  Txid: ").Append(Txid).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  DoneAt: ").Append(DoneAt).Append("\n");
            sb.Append("  Amount: ").Append(Amount).Append("\n");
            sb.Append("  Fee: ").Append(Fee).Append("\n");
            sb.Append("  KrwAmount: ").Append(KrwAmount).Append("\n");
            sb.Append("  TransactionType: ").Append(TransactionType).Append("\n");
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
            return this.Equals(input as WithdrawCoin);
        }

        /// <summary>
        /// Returns true if WithdrawCoin instances are equal
        /// </summary>
        /// <param name="input">Instance of WithdrawCoin to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(WithdrawCoin input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Type == input.Type ||
                    (this.Type != null &&
                    this.Type.Equals(input.Type))
                ) && 
                (
                    this.Uuid == input.Uuid ||
                    (this.Uuid != null &&
                    this.Uuid.Equals(input.Uuid))
                ) && 
                (
                    this.Currency == input.Currency ||
                    (this.Currency != null &&
                    this.Currency.Equals(input.Currency))
                ) && 
                (
                    this.Txid == input.Txid ||
                    (this.Txid != null &&
                    this.Txid.Equals(input.Txid))
                ) && 
                (
                    this.State == input.State ||
                    (this.State != null &&
                    this.State.Equals(input.State))
                ) && 
                (
                    this.CreatedAt == input.CreatedAt ||
                    (this.CreatedAt != null &&
                    this.CreatedAt.Equals(input.CreatedAt))
                ) && 
                (
                    this.DoneAt == input.DoneAt ||
                    (this.DoneAt != null &&
                    this.DoneAt.Equals(input.DoneAt))
                ) && 
                (
                    this.Amount == input.Amount ||
                    (this.Amount != null &&
                    this.Amount.Equals(input.Amount))
                ) && 
                (
                    this.Fee == input.Fee ||
                    (this.Fee != null &&
                    this.Fee.Equals(input.Fee))
                ) && 
                (
                    this.KrwAmount == input.KrwAmount ||
                    (this.KrwAmount != null &&
                    this.KrwAmount.Equals(input.KrwAmount))
                ) && 
                (
                    this.TransactionType == input.TransactionType ||
                    (this.TransactionType != null &&
                    this.TransactionType.Equals(input.TransactionType))
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
                if (this.Type != null)
                    hashCode = hashCode * 59 + this.Type.GetHashCode();
                if (this.Uuid != null)
                    hashCode = hashCode * 59 + this.Uuid.GetHashCode();
                if (this.Currency != null)
                    hashCode = hashCode * 59 + this.Currency.GetHashCode();
                if (this.Txid != null)
                    hashCode = hashCode * 59 + this.Txid.GetHashCode();
                if (this.State != null)
                    hashCode = hashCode * 59 + this.State.GetHashCode();
                if (this.CreatedAt != null)
                    hashCode = hashCode * 59 + this.CreatedAt.GetHashCode();
                if (this.DoneAt != null)
                    hashCode = hashCode * 59 + this.DoneAt.GetHashCode();
                if (this.Amount != null)
                    hashCode = hashCode * 59 + this.Amount.GetHashCode();
                if (this.Fee != null)
                    hashCode = hashCode * 59 + this.Fee.GetHashCode();
                if (this.KrwAmount != null)
                    hashCode = hashCode * 59 + this.KrwAmount.GetHashCode();
                if (this.TransactionType != null)
                    hashCode = hashCode * 59 + this.TransactionType.GetHashCode();
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
