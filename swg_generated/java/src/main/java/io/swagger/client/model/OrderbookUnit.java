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
 * OrderbookUnit
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2021-01-07T06:19:05.031Z")



public class OrderbookUnit {
  @SerializedName("ask_price")
  private Double askPrice = null;

  @SerializedName("bid_price")
  private Double bidPrice = null;

  @SerializedName("ask_size")
  private Double askSize = null;

  @SerializedName("bid_size")
  private Double bidSize = null;

  public OrderbookUnit askPrice(Double askPrice) {
    this.askPrice = askPrice;
    return this;
  }

   /**
   * 매도호가
   * @return askPrice
  **/
  @ApiModelProperty(example = "6956000.0", value = "매도호가")
  public Double getAskPrice() {
    return askPrice;
  }

  public void setAskPrice(Double askPrice) {
    this.askPrice = askPrice;
  }

  public OrderbookUnit bidPrice(Double bidPrice) {
    this.bidPrice = bidPrice;
    return this;
  }

   /**
   * 매수호가
   * @return bidPrice
  **/
  @ApiModelProperty(example = "6954000.0", value = "매수호가")
  public Double getBidPrice() {
    return bidPrice;
  }

  public void setBidPrice(Double bidPrice) {
    this.bidPrice = bidPrice;
  }

  public OrderbookUnit askSize(Double askSize) {
    this.askSize = askSize;
    return this;
  }

   /**
   * 매도 잔량
   * @return askSize
  **/
  @ApiModelProperty(example = "0.24078656", value = "매도 잔량")
  public Double getAskSize() {
    return askSize;
  }

  public void setAskSize(Double askSize) {
    this.askSize = askSize;
  }

  public OrderbookUnit bidSize(Double bidSize) {
    this.bidSize = bidSize;
    return this;
  }

   /**
   * 매수 잔량
   * @return bidSize
  **/
  @ApiModelProperty(example = "0.00718341", value = "매수 잔량")
  public Double getBidSize() {
    return bidSize;
  }

  public void setBidSize(Double bidSize) {
    this.bidSize = bidSize;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    OrderbookUnit orderbookUnit = (OrderbookUnit) o;
    return Objects.equals(this.askPrice, orderbookUnit.askPrice) &&
        Objects.equals(this.bidPrice, orderbookUnit.bidPrice) &&
        Objects.equals(this.askSize, orderbookUnit.askSize) &&
        Objects.equals(this.bidSize, orderbookUnit.bidSize);
  }

  @Override
  public int hashCode() {
    return Objects.hash(askPrice, bidPrice, askSize, bidSize);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class OrderbookUnit {\n");
    
    sb.append("    askPrice: ").append(toIndentedString(askPrice)).append("\n");
    sb.append("    bidPrice: ").append(toIndentedString(bidPrice)).append("\n");
    sb.append("    askSize: ").append(toIndentedString(askSize)).append("\n");
    sb.append("    bidSize: ").append(toIndentedString(bidSize)).append("\n");
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

