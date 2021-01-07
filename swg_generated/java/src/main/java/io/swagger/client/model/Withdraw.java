/*
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.1.6
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package io.swagger.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;

/**
 * Withdraw
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2021-01-07T06:19:05.031Z")



public class Withdraw {
  @SerializedName("type")
  private String type = null;

  @SerializedName("uuid")
  private String uuid = null;

  @SerializedName("currency")
  private String currency = null;

  @SerializedName("txid")
  private String txid = null;

  @SerializedName("state")
  private String state = null;

  @SerializedName("created_at")
  private String createdAt = null;

  @SerializedName("done_at")
  private String doneAt = null;

  @SerializedName("amount")
  private String amount = null;

  @SerializedName("fee")
  private String fee = null;

  @SerializedName("transaction_type")
  private String transactionType = null;

  public Withdraw type(String type) {
    this.type = type;
    return this;
  }

   /**
   * 입출금 종류
   * @return type
  **/
  @ApiModelProperty(example = "withdraw", value = "입출금 종류")
  public String getType() {
    return type;
  }

  public void setType(String type) {
    this.type = type;
  }

  public Withdraw uuid(String uuid) {
    this.uuid = uuid;
    return this;
  }

   /**
   * 출금의 고유 아이디
   * @return uuid
  **/
  @ApiModelProperty(example = "35a4f1dc-1db5-4d6b-89b5-7ec137875956", value = "출금의 고유 아이디")
  public String getUuid() {
    return uuid;
  }

  public void setUuid(String uuid) {
    this.uuid = uuid;
  }

  public Withdraw currency(String currency) {
    this.currency = currency;
    return this;
  }

   /**
   * 화폐를 의미하는 영문 대문자 코드
   * @return currency
  **/
  @ApiModelProperty(example = "XRP", value = "화폐를 의미하는 영문 대문자 코드")
  public String getCurrency() {
    return currency;
  }

  public void setCurrency(String currency) {
    this.currency = currency;
  }

  public Withdraw txid(String txid) {
    this.txid = txid;
    return this;
  }

   /**
   * 출금의 트랜잭션 아이디
   * @return txid
  **/
  @ApiModelProperty(example = "98c15999f0bdc4ae0e8a-ed35868bb0c204fe6ec29e4058a3451e-88636d1040f4baddf943274ce37cf9cc", value = "출금의 트랜잭션 아이디")
  public String getTxid() {
    return txid;
  }

  public void setTxid(String txid) {
    this.txid = txid;
  }

  public Withdraw state(String state) {
    this.state = state;
    return this;
  }

   /**
   * 출금 상태
   * @return state
  **/
  @ApiModelProperty(example = "DONE", value = "출금 상태")
  public String getState() {
    return state;
  }

  public void setState(String state) {
    this.state = state;
  }

  public Withdraw createdAt(String createdAt) {
    this.createdAt = createdAt;
    return this;
  }

   /**
   * 출금 생성 시간
   * @return createdAt
  **/
  @ApiModelProperty(example = "2019-02-28T15:17:51+09:00", value = "출금 생성 시간")
  public String getCreatedAt() {
    return createdAt;
  }

  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }

  public Withdraw doneAt(String doneAt) {
    this.doneAt = doneAt;
    return this;
  }

   /**
   * 출금 완료 시간
   * @return doneAt
  **/
  @ApiModelProperty(example = "2019-02-28T15:22:12+09:00", value = "출금 완료 시간")
  public String getDoneAt() {
    return doneAt;
  }

  public void setDoneAt(String doneAt) {
    this.doneAt = doneAt;
  }

  public Withdraw amount(String amount) {
    this.amount = amount;
    return this;
  }

   /**
   * 출금 금액/수량
   * @return amount
  **/
  @ApiModelProperty(example = "1", value = "출금 금액/수량")
  public String getAmount() {
    return amount;
  }

  public void setAmount(String amount) {
    this.amount = amount;
  }

  public Withdraw fee(String fee) {
    this.fee = fee;
    return this;
  }

   /**
   * 출금 수수료
   * @return fee
  **/
  @ApiModelProperty(example = "0", value = "출금 수수료")
  public String getFee() {
    return fee;
  }

  public void setFee(String fee) {
    this.fee = fee;
  }

  public Withdraw transactionType(String transactionType) {
    this.transactionType = transactionType;
    return this;
  }

   /**
   * 출금 유형 - default : 일반출금 - internal : 바로출금  String 
   * @return transactionType
  **/
  @ApiModelProperty(example = "default", value = "출금 유형 - default : 일반출금 - internal : 바로출금  String ")
  public String getTransactionType() {
    return transactionType;
  }

  public void setTransactionType(String transactionType) {
    this.transactionType = transactionType;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Withdraw withdraw = (Withdraw) o;
    return Objects.equals(this.type, withdraw.type) &&
        Objects.equals(this.uuid, withdraw.uuid) &&
        Objects.equals(this.currency, withdraw.currency) &&
        Objects.equals(this.txid, withdraw.txid) &&
        Objects.equals(this.state, withdraw.state) &&
        Objects.equals(this.createdAt, withdraw.createdAt) &&
        Objects.equals(this.doneAt, withdraw.doneAt) &&
        Objects.equals(this.amount, withdraw.amount) &&
        Objects.equals(this.fee, withdraw.fee) &&
        Objects.equals(this.transactionType, withdraw.transactionType);
  }

  @Override
  public int hashCode() {
    return Objects.hash(type, uuid, currency, txid, state, createdAt, doneAt, amount, fee, transactionType);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Withdraw {\n");
    
    sb.append("    type: ").append(toIndentedString(type)).append("\n");
    sb.append("    uuid: ").append(toIndentedString(uuid)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    txid: ").append(toIndentedString(txid)).append("\n");
    sb.append("    state: ").append(toIndentedString(state)).append("\n");
    sb.append("    createdAt: ").append(toIndentedString(createdAt)).append("\n");
    sb.append("    doneAt: ").append(toIndentedString(doneAt)).append("\n");
    sb.append("    amount: ").append(toIndentedString(amount)).append("\n");
    sb.append("    fee: ").append(toIndentedString(fee)).append("\n");
    sb.append("    transactionType: ").append(toIndentedString(transactionType)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

