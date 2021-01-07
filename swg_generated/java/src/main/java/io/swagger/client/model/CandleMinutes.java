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
import java.math.BigDecimal;

/**
 * CandleMinutes
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2021-01-07T06:19:05.031Z")



public class CandleMinutes {
  @SerializedName("market")
  private String market = null;

  @SerializedName("candle_date_time_utc")
  private String candleDateTimeUtc = null;

  @SerializedName("candle_date_time_kst")
  private String candleDateTimeKst = null;

  @SerializedName("opening_price")
  private Double openingPrice = null;

  @SerializedName("high_price")
  private Double highPrice = null;

  @SerializedName("low_price")
  private Double lowPrice = null;

  @SerializedName("trade_price")
  private Double tradePrice = null;

  @SerializedName("timestamp")
  private BigDecimal timestamp = null;

  @SerializedName("candle_acc_trade_price")
  private Double candleAccTradePrice = null;

  @SerializedName("candle_acc_trade_volume")
  private Double candleAccTradeVolume = null;

  @SerializedName("unit")
  private BigDecimal unit = null;

  public CandleMinutes market(String market) {
    this.market = market;
    return this;
  }

   /**
   * 마켓명
   * @return market
  **/
  @ApiModelProperty(example = "KRW-BTC", value = "마켓명")
  public String getMarket() {
    return market;
  }

  public void setMarket(String market) {
    this.market = market;
  }

  public CandleMinutes candleDateTimeUtc(String candleDateTimeUtc) {
    this.candleDateTimeUtc = candleDateTimeUtc;
    return this;
  }

   /**
   * 캔들 기준 시각 (UTC 기준)
   * @return candleDateTimeUtc
  **/
  @ApiModelProperty(example = "2018-04-18T10:16:00", value = "캔들 기준 시각 (UTC 기준)")
  public String getCandleDateTimeUtc() {
    return candleDateTimeUtc;
  }

  public void setCandleDateTimeUtc(String candleDateTimeUtc) {
    this.candleDateTimeUtc = candleDateTimeUtc;
  }

  public CandleMinutes candleDateTimeKst(String candleDateTimeKst) {
    this.candleDateTimeKst = candleDateTimeKst;
    return this;
  }

   /**
   * 캔들 기준 시각 (KST 기준)
   * @return candleDateTimeKst
  **/
  @ApiModelProperty(example = "2018-04-18T19:16:00", value = "캔들 기준 시각 (KST 기준)")
  public String getCandleDateTimeKst() {
    return candleDateTimeKst;
  }

  public void setCandleDateTimeKst(String candleDateTimeKst) {
    this.candleDateTimeKst = candleDateTimeKst;
  }

  public CandleMinutes openingPrice(Double openingPrice) {
    this.openingPrice = openingPrice;
    return this;
  }

   /**
   * 시가
   * @return openingPrice
  **/
  @ApiModelProperty(example = "8615000.0", value = "시가")
  public Double getOpeningPrice() {
    return openingPrice;
  }

  public void setOpeningPrice(Double openingPrice) {
    this.openingPrice = openingPrice;
  }

  public CandleMinutes highPrice(Double highPrice) {
    this.highPrice = highPrice;
    return this;
  }

   /**
   * 고가
   * @return highPrice
  **/
  @ApiModelProperty(example = "8618000.0", value = "고가")
  public Double getHighPrice() {
    return highPrice;
  }

  public void setHighPrice(Double highPrice) {
    this.highPrice = highPrice;
  }

  public CandleMinutes lowPrice(Double lowPrice) {
    this.lowPrice = lowPrice;
    return this;
  }

   /**
   * 저가
   * @return lowPrice
  **/
  @ApiModelProperty(example = "8611000.0", value = "저가")
  public Double getLowPrice() {
    return lowPrice;
  }

  public void setLowPrice(Double lowPrice) {
    this.lowPrice = lowPrice;
  }

  public CandleMinutes tradePrice(Double tradePrice) {
    this.tradePrice = tradePrice;
    return this;
  }

   /**
   * 종가
   * @return tradePrice
  **/
  @ApiModelProperty(example = "8616000.0", value = "종가")
  public Double getTradePrice() {
    return tradePrice;
  }

  public void setTradePrice(Double tradePrice) {
    this.tradePrice = tradePrice;
  }

  public CandleMinutes timestamp(BigDecimal timestamp) {
    this.timestamp = timestamp;
    return this;
  }

   /**
   * 해당 캔들에서 마지막 틱이 저장된 시각
   * @return timestamp
  **/
  @ApiModelProperty(example = "1.524046594584E12", value = "해당 캔들에서 마지막 틱이 저장된 시각")
  public BigDecimal getTimestamp() {
    return timestamp;
  }

  public void setTimestamp(BigDecimal timestamp) {
    this.timestamp = timestamp;
  }

  public CandleMinutes candleAccTradePrice(Double candleAccTradePrice) {
    this.candleAccTradePrice = candleAccTradePrice;
    return this;
  }

   /**
   * 누적 거래 금액
   * @return candleAccTradePrice
  **/
  @ApiModelProperty(example = "6.001889190054E7", value = "누적 거래 금액")
  public Double getCandleAccTradePrice() {
    return candleAccTradePrice;
  }

  public void setCandleAccTradePrice(Double candleAccTradePrice) {
    this.candleAccTradePrice = candleAccTradePrice;
  }

  public CandleMinutes candleAccTradeVolume(Double candleAccTradeVolume) {
    this.candleAccTradeVolume = candleAccTradeVolume;
    return this;
  }

   /**
   * 누적 거래량
   * @return candleAccTradeVolume
  **/
  @ApiModelProperty(example = "6.96780929", value = "누적 거래량")
  public Double getCandleAccTradeVolume() {
    return candleAccTradeVolume;
  }

  public void setCandleAccTradeVolume(Double candleAccTradeVolume) {
    this.candleAccTradeVolume = candleAccTradeVolume;
  }

  public CandleMinutes unit(BigDecimal unit) {
    this.unit = unit;
    return this;
  }

   /**
   * 분 단위(유닛)
   * @return unit
  **/
  @ApiModelProperty(example = "1.0", value = "분 단위(유닛)")
  public BigDecimal getUnit() {
    return unit;
  }

  public void setUnit(BigDecimal unit) {
    this.unit = unit;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    CandleMinutes candleMinutes = (CandleMinutes) o;
    return Objects.equals(this.market, candleMinutes.market) &&
        Objects.equals(this.candleDateTimeUtc, candleMinutes.candleDateTimeUtc) &&
        Objects.equals(this.candleDateTimeKst, candleMinutes.candleDateTimeKst) &&
        Objects.equals(this.openingPrice, candleMinutes.openingPrice) &&
        Objects.equals(this.highPrice, candleMinutes.highPrice) &&
        Objects.equals(this.lowPrice, candleMinutes.lowPrice) &&
        Objects.equals(this.tradePrice, candleMinutes.tradePrice) &&
        Objects.equals(this.timestamp, candleMinutes.timestamp) &&
        Objects.equals(this.candleAccTradePrice, candleMinutes.candleAccTradePrice) &&
        Objects.equals(this.candleAccTradeVolume, candleMinutes.candleAccTradeVolume) &&
        Objects.equals(this.unit, candleMinutes.unit);
  }

  @Override
  public int hashCode() {
    return Objects.hash(market, candleDateTimeUtc, candleDateTimeKst, openingPrice, highPrice, lowPrice, tradePrice, timestamp, candleAccTradePrice, candleAccTradeVolume, unit);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class CandleMinutes {\n");
    
    sb.append("    market: ").append(toIndentedString(market)).append("\n");
    sb.append("    candleDateTimeUtc: ").append(toIndentedString(candleDateTimeUtc)).append("\n");
    sb.append("    candleDateTimeKst: ").append(toIndentedString(candleDateTimeKst)).append("\n");
    sb.append("    openingPrice: ").append(toIndentedString(openingPrice)).append("\n");
    sb.append("    highPrice: ").append(toIndentedString(highPrice)).append("\n");
    sb.append("    lowPrice: ").append(toIndentedString(lowPrice)).append("\n");
    sb.append("    tradePrice: ").append(toIndentedString(tradePrice)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    candleAccTradePrice: ").append(toIndentedString(candleAccTradePrice)).append("\n");
    sb.append("    candleAccTradeVolume: ").append(toIndentedString(candleAccTradeVolume)).append("\n");
    sb.append("    unit: ").append(toIndentedString(unit)).append("\n");
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

