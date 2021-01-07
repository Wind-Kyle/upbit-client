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
    /// Order
    /// </summary>
    [DataContract]
    public partial class Order :  IEquatable<Order>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="Order" /> class.
        /// </summary>
        /// <param name="uuid">주문의 고유 아이디.</param>
        /// <param name="side">주문 종류.</param>
        /// <param name="ordType">주문 방식.</param>
        /// <param name="price">주문 당시 화폐 가격.</param>
        /// <param name="state">주문 상태.</param>
        /// <param name="market">마켓의 유일키.</param>
        /// <param name="createdAt">주문 생성 시간.</param>
        /// <param name="volume">사용자가 입력한 주문 양.</param>
        /// <param name="remainingVolume">체결 후 남은 주문 양.</param>
        /// <param name="reservedFee">수수료로 예약된 비용.</param>
        /// <param name="remainingFee">남은 수수료.</param>
        /// <param name="paidFee">사용된 수수료.</param>
        /// <param name="locked">거래에 사용중인 비용.</param>
        /// <param name="executedVolume">체결된 양.</param>
        /// <param name="tradesCount">해당 주문에 걸린 체결 수.</param>
        public Order(string uuid = default(string), string side = default(string), string ordType = default(string), string price = default(string), string state = default(string), string market = default(string), string createdAt = default(string), string volume = default(string), string remainingVolume = default(string), string reservedFee = default(string), string remainingFee = default(string), string paidFee = default(string), string locked = default(string), string executedVolume = default(string), decimal? tradesCount = default(decimal?))
        {
            this.Uuid = uuid;
            this.Side = side;
            this.OrdType = ordType;
            this.Price = price;
            this.State = state;
            this.Market = market;
            this.CreatedAt = createdAt;
            this.Volume = volume;
            this.RemainingVolume = remainingVolume;
            this.ReservedFee = reservedFee;
            this.RemainingFee = remainingFee;
            this.PaidFee = paidFee;
            this.Locked = locked;
            this.ExecutedVolume = executedVolume;
            this.TradesCount = tradesCount;
        }
        
        /// <summary>
        /// 주문의 고유 아이디
        /// </summary>
        /// <value>주문의 고유 아이디</value>
        [DataMember(Name="uuid", EmitDefaultValue=false)]
        public string Uuid { get; set; }

        /// <summary>
        /// 주문 종류
        /// </summary>
        /// <value>주문 종류</value>
        [DataMember(Name="side", EmitDefaultValue=false)]
        public string Side { get; set; }

        /// <summary>
        /// 주문 방식
        /// </summary>
        /// <value>주문 방식</value>
        [DataMember(Name="ord_type", EmitDefaultValue=false)]
        public string OrdType { get; set; }

        /// <summary>
        /// 주문 당시 화폐 가격
        /// </summary>
        /// <value>주문 당시 화폐 가격</value>
        [DataMember(Name="price", EmitDefaultValue=false)]
        public string Price { get; set; }

        /// <summary>
        /// 주문 상태
        /// </summary>
        /// <value>주문 상태</value>
        [DataMember(Name="state", EmitDefaultValue=false)]
        public string State { get; set; }

        /// <summary>
        /// 마켓의 유일키
        /// </summary>
        /// <value>마켓의 유일키</value>
        [DataMember(Name="market", EmitDefaultValue=false)]
        public string Market { get; set; }

        /// <summary>
        /// 주문 생성 시간
        /// </summary>
        /// <value>주문 생성 시간</value>
        [DataMember(Name="created_at", EmitDefaultValue=false)]
        public string CreatedAt { get; set; }

        /// <summary>
        /// 사용자가 입력한 주문 양
        /// </summary>
        /// <value>사용자가 입력한 주문 양</value>
        [DataMember(Name="volume", EmitDefaultValue=false)]
        public string Volume { get; set; }

        /// <summary>
        /// 체결 후 남은 주문 양
        /// </summary>
        /// <value>체결 후 남은 주문 양</value>
        [DataMember(Name="remaining_volume", EmitDefaultValue=false)]
        public string RemainingVolume { get; set; }

        /// <summary>
        /// 수수료로 예약된 비용
        /// </summary>
        /// <value>수수료로 예약된 비용</value>
        [DataMember(Name="reserved_fee", EmitDefaultValue=false)]
        public string ReservedFee { get; set; }

        /// <summary>
        /// 남은 수수료
        /// </summary>
        /// <value>남은 수수료</value>
        [DataMember(Name="remaining_fee", EmitDefaultValue=false)]
        public string RemainingFee { get; set; }

        /// <summary>
        /// 사용된 수수료
        /// </summary>
        /// <value>사용된 수수료</value>
        [DataMember(Name="paid_fee", EmitDefaultValue=false)]
        public string PaidFee { get; set; }

        /// <summary>
        /// 거래에 사용중인 비용
        /// </summary>
        /// <value>거래에 사용중인 비용</value>
        [DataMember(Name="locked", EmitDefaultValue=false)]
        public string Locked { get; set; }

        /// <summary>
        /// 체결된 양
        /// </summary>
        /// <value>체결된 양</value>
        [DataMember(Name="executed_volume", EmitDefaultValue=false)]
        public string ExecutedVolume { get; set; }

        /// <summary>
        /// 해당 주문에 걸린 체결 수
        /// </summary>
        /// <value>해당 주문에 걸린 체결 수</value>
        [DataMember(Name="trades_count", EmitDefaultValue=false)]
        public decimal? TradesCount { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Order {\n");
            sb.Append("  Uuid: ").Append(Uuid).Append("\n");
            sb.Append("  Side: ").Append(Side).Append("\n");
            sb.Append("  OrdType: ").Append(OrdType).Append("\n");
            sb.Append("  Price: ").Append(Price).Append("\n");
            sb.Append("  State: ").Append(State).Append("\n");
            sb.Append("  Market: ").Append(Market).Append("\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  Volume: ").Append(Volume).Append("\n");
            sb.Append("  RemainingVolume: ").Append(RemainingVolume).Append("\n");
            sb.Append("  ReservedFee: ").Append(ReservedFee).Append("\n");
            sb.Append("  RemainingFee: ").Append(RemainingFee).Append("\n");
            sb.Append("  PaidFee: ").Append(PaidFee).Append("\n");
            sb.Append("  Locked: ").Append(Locked).Append("\n");
            sb.Append("  ExecutedVolume: ").Append(ExecutedVolume).Append("\n");
            sb.Append("  TradesCount: ").Append(TradesCount).Append("\n");
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
            return this.Equals(input as Order);
        }

        /// <summary>
        /// Returns true if Order instances are equal
        /// </summary>
        /// <param name="input">Instance of Order to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(Order input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Uuid == input.Uuid ||
                    (this.Uuid != null &&
                    this.Uuid.Equals(input.Uuid))
                ) && 
                (
                    this.Side == input.Side ||
                    (this.Side != null &&
                    this.Side.Equals(input.Side))
                ) && 
                (
                    this.OrdType == input.OrdType ||
                    (this.OrdType != null &&
                    this.OrdType.Equals(input.OrdType))
                ) && 
                (
                    this.Price == input.Price ||
                    (this.Price != null &&
                    this.Price.Equals(input.Price))
                ) && 
                (
                    this.State == input.State ||
                    (this.State != null &&
                    this.State.Equals(input.State))
                ) && 
                (
                    this.Market == input.Market ||
                    (this.Market != null &&
                    this.Market.Equals(input.Market))
                ) && 
                (
                    this.CreatedAt == input.CreatedAt ||
                    (this.CreatedAt != null &&
                    this.CreatedAt.Equals(input.CreatedAt))
                ) && 
                (
                    this.Volume == input.Volume ||
                    (this.Volume != null &&
                    this.Volume.Equals(input.Volume))
                ) && 
                (
                    this.RemainingVolume == input.RemainingVolume ||
                    (this.RemainingVolume != null &&
                    this.RemainingVolume.Equals(input.RemainingVolume))
                ) && 
                (
                    this.ReservedFee == input.ReservedFee ||
                    (this.ReservedFee != null &&
                    this.ReservedFee.Equals(input.ReservedFee))
                ) && 
                (
                    this.RemainingFee == input.RemainingFee ||
                    (this.RemainingFee != null &&
                    this.RemainingFee.Equals(input.RemainingFee))
                ) && 
                (
                    this.PaidFee == input.PaidFee ||
                    (this.PaidFee != null &&
                    this.PaidFee.Equals(input.PaidFee))
                ) && 
                (
                    this.Locked == input.Locked ||
                    (this.Locked != null &&
                    this.Locked.Equals(input.Locked))
                ) && 
                (
                    this.ExecutedVolume == input.ExecutedVolume ||
                    (this.ExecutedVolume != null &&
                    this.ExecutedVolume.Equals(input.ExecutedVolume))
                ) && 
                (
                    this.TradesCount == input.TradesCount ||
                    (this.TradesCount != null &&
                    this.TradesCount.Equals(input.TradesCount))
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
                if (this.Uuid != null)
                    hashCode = hashCode * 59 + this.Uuid.GetHashCode();
                if (this.Side != null)
                    hashCode = hashCode * 59 + this.Side.GetHashCode();
                if (this.OrdType != null)
                    hashCode = hashCode * 59 + this.OrdType.GetHashCode();
                if (this.Price != null)
                    hashCode = hashCode * 59 + this.Price.GetHashCode();
                if (this.State != null)
                    hashCode = hashCode * 59 + this.State.GetHashCode();
                if (this.Market != null)
                    hashCode = hashCode * 59 + this.Market.GetHashCode();
                if (this.CreatedAt != null)
                    hashCode = hashCode * 59 + this.CreatedAt.GetHashCode();
                if (this.Volume != null)
                    hashCode = hashCode * 59 + this.Volume.GetHashCode();
                if (this.RemainingVolume != null)
                    hashCode = hashCode * 59 + this.RemainingVolume.GetHashCode();
                if (this.ReservedFee != null)
                    hashCode = hashCode * 59 + this.ReservedFee.GetHashCode();
                if (this.RemainingFee != null)
                    hashCode = hashCode * 59 + this.RemainingFee.GetHashCode();
                if (this.PaidFee != null)
                    hashCode = hashCode * 59 + this.PaidFee.GetHashCode();
                if (this.Locked != null)
                    hashCode = hashCode * 59 + this.Locked.GetHashCode();
                if (this.ExecutedVolume != null)
                    hashCode = hashCode * 59 + this.ExecutedVolume.GetHashCode();
                if (this.TradesCount != null)
                    hashCode = hashCode * 59 + this.TradesCount.GetHashCode();
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
