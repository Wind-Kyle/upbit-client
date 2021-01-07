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
    /// APIKey
    /// </summary>
    [DataContract]
    public partial class APIKey :  IEquatable<APIKey>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="APIKey" /> class.
        /// </summary>
        /// <param name="accessKey">accessKey.</param>
        /// <param name="expireAt">expireAt.</param>
        public APIKey(string accessKey = default(string), string expireAt = default(string))
        {
            this.AccessKey = accessKey;
            this.ExpireAt = expireAt;
        }
        
        /// <summary>
        /// Gets or Sets AccessKey
        /// </summary>
        [DataMember(Name="access_key", EmitDefaultValue=false)]
        public string AccessKey { get; set; }

        /// <summary>
        /// Gets or Sets ExpireAt
        /// </summary>
        [DataMember(Name="expire_at", EmitDefaultValue=false)]
        public string ExpireAt { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class APIKey {\n");
            sb.Append("  AccessKey: ").Append(AccessKey).Append("\n");
            sb.Append("  ExpireAt: ").Append(ExpireAt).Append("\n");
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
            return this.Equals(input as APIKey);
        }

        /// <summary>
        /// Returns true if APIKey instances are equal
        /// </summary>
        /// <param name="input">Instance of APIKey to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(APIKey input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.AccessKey == input.AccessKey ||
                    (this.AccessKey != null &&
                    this.AccessKey.Equals(input.AccessKey))
                ) && 
                (
                    this.ExpireAt == input.ExpireAt ||
                    (this.ExpireAt != null &&
                    this.ExpireAt.Equals(input.ExpireAt))
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
                if (this.AccessKey != null)
                    hashCode = hashCode * 59 + this.AccessKey.GetHashCode();
                if (this.ExpireAt != null)
                    hashCode = hashCode * 59 + this.ExpireAt.GetHashCode();
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
