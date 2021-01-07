/*
 * Upbit Open API
 * ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com] 
 *
 * OpenAPI spec version: 1.1.6
 * Contact: ujhin942@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.4.17
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.UpbitOpenApi) {
      root.UpbitOpenApi = {};
    }
    root.UpbitOpenApi.Wallet = factory(root.UpbitOpenApi.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';

  /**
   * The Wallet model module.
   * @module model/Wallet
   * @version 1.1.6
   */

  /**
   * Constructs a new <code>Wallet</code>.
   * @alias module:model/Wallet
   * @class
   */
  var exports = function() {
  };

  /**
   * Constructs a <code>Wallet</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/Wallet} obj Optional instance to populate.
   * @return {module:model/Wallet} The populated <code>Wallet</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      if (data.hasOwnProperty('currency'))
        obj.currency = ApiClient.convertToType(data['currency'], 'String');
      if (data.hasOwnProperty('wallet_state'))
        obj.walletState = ApiClient.convertToType(data['wallet_state'], 'String');
      if (data.hasOwnProperty('block_state'))
        obj.blockState = ApiClient.convertToType(data['block_state'], 'String');
      if (data.hasOwnProperty('block_height'))
        obj.blockHeight = ApiClient.convertToType(data['block_height'], 'Number');
      if (data.hasOwnProperty('block_updated_at'))
        obj.blockUpdatedAt = ApiClient.convertToType(data['block_updated_at'], 'String');
    }
    return obj;
  }

  /**
   * 화폐를 의미하는 영문 대문자 코드
   * @member {String} currency
   */
  exports.prototype.currency = undefined;

  /**
   * 입출금 상태 - working : 입출금 가능 - withdraw_only : 출금만 가능 - deposit_only : 입금만 가능 - paused : 입출금 중단 - unsupported : 입출금 미지원 
   * @member {String} walletState
   */
  exports.prototype.walletState = undefined;

  /**
   * 블록 상태 - normal : 정상 - delayed : 지연 - inactive : 비활성 (점검 등) 
   * @member {String} blockState
   */
  exports.prototype.blockState = undefined;

  /**
   * 블록 높이
   * @member {Number} blockHeight
   */
  exports.prototype.blockHeight = undefined;

  /**
   * 블록 갱신 시각
   * @member {String} blockUpdatedAt
   */
  exports.prototype.blockUpdatedAt = undefined;

  return exports;

}));
