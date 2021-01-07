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
    define(['ApiClient', 'model/Deposit', 'model/DepositCompleteResponse', 'model/DepositTransferResponse', 'model/Error'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('../model/Deposit'), require('../model/DepositCompleteResponse'), require('../model/DepositTransferResponse'), require('../model/Error'));
  } else {
    // Browser globals (root is window)
    if (!root.UpbitOpenApi) {
      root.UpbitOpenApi = {};
    }
    root.UpbitOpenApi.DepositApi = factory(root.UpbitOpenApi.ApiClient, root.UpbitOpenApi.Deposit, root.UpbitOpenApi.DepositCompleteResponse, root.UpbitOpenApi.DepositTransferResponse, root.UpbitOpenApi.Error);
  }
}(this, function(ApiClient, Deposit, DepositCompleteResponse, DepositTransferResponse, Error) {
  'use strict';

  /**
   * Deposit service.
   * @module api/DepositApi
   * @version 1.1.6
   */

  /**
   * Constructs a new DepositApi. 
   * @alias module:api/DepositApi
   * @class
   * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
   * default to {@link module:ApiClient#instance} if unspecified.
   */
  var exports = function(apiClient) {
    this.apiClient = apiClient || ApiClient.instance;


    /**
     * Callback function to receive the result of the depositCoinAddress operation.
     * @callback module:api/DepositApi~depositCoinAddressCallback
     * @param {String} error Error message, if any.
     * @param {module:model/DepositCompleteResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * 개별 입금 주소 조회
     * ## 개별 입금 주소 조회  **NOTE**: 입금 주소 조회 요청 API 유의사항  입금 주소 생성 요청 이후 아직 발급되지 않은 상태일 경우 deposit_address가 null일 수 있습니다. 
     * @param {String} currency Currency symbol 
     * @param {module:api/DepositApi~depositCoinAddressCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/DepositCompleteResponse}
     */
    this.depositCoinAddress = function(currency, callback) {
      var postBody = null;

      // verify the required parameter 'currency' is set
      if (currency === undefined || currency === null) {
        throw new Error("Missing the required parameter 'currency' when calling depositCoinAddress");
      }


      var pathParams = {
      };
      var queryParams = {
        'currency': currency,
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['Bearer'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = DepositCompleteResponse;

      return this.apiClient.callApi(
        '/deposits/coin_address', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the depositCoinAddresses operation.
     * @callback module:api/DepositApi~depositCoinAddressesCallback
     * @param {String} error Error message, if any.
     * @param {Object} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * 전체 입금 주소 조회
     * ## 내가 보유한 자산 리스트를 보여줍니다.  **NOTE**: 입금 주소 조회 요청 API 유의사항  입금 주소 생성 요청 이후 아직 발급되지 않은 상태일 경우 deposit_address가 null일 수 있습니다. 
     * @param {module:api/DepositApi~depositCoinAddressesCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Object}
     */
    this.depositCoinAddresses = function(callback) {
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['Bearer'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = Object;

      return this.apiClient.callApi(
        '/deposits/coin_addresses', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the depositGenerateCoinAddress operation.
     * @callback module:api/DepositApi~depositGenerateCoinAddressCallback
     * @param {String} error Error message, if any.
     * @param {module:model/DepositCompleteResponse} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * 입금 주소 생성 요청
     * 입금 주소 생성을 요청한다.  **NOTE**: 입금 주소 생성 요청 API 유의사항  입금 주소의 생성은 서버에서 비동기적으로 이뤄집니다. 비동기적 생성 특성상 요청과 동시에 입금 주소가 발급되지 않을 수 있습니다. 주소 발급 요청 시 결과로 Response1이 반환되며 주소 발급 완료 이전까지 계속 Response1이 반환됩니다. 주소가 발급된 이후부터는 새로운 주소가 발급되는 것이 아닌 이전에 발급된 주소가 Response2 형태로 반환됩니다. 정상적으로 주소가 생성되지 않는다면 일정 시간 이후 해당 API를 다시 호출해주시길 부탁드립니다. 
     * @param {String} currency Currency 코드 
     * @param {module:api/DepositApi~depositGenerateCoinAddressCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/DepositCompleteResponse}
     */
    this.depositGenerateCoinAddress = function(currency, callback) {
      var postBody = null;

      // verify the required parameter 'currency' is set
      if (currency === undefined || currency === null) {
        throw new Error("Missing the required parameter 'currency' when calling depositGenerateCoinAddress");
      }


      var pathParams = {
      };
      var queryParams = {
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
        'currency': currency
      };

      var authNames = ['Bearer'];
      var contentTypes = ['multipart/form-data'];
      var accepts = ['application/json'];
      var returnType = DepositCompleteResponse;

      return this.apiClient.callApi(
        '/deposits/generate_coin_address', 'POST',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the depositInfo operation.
     * @callback module:api/DepositApi~depositInfoCallback
     * @param {String} error Error message, if any.
     * @param {module:model/Deposit} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * 개별 입금 조회
     * ## 개별 입금 조회 
     * @param {Object} opts Optional parameters
     * @param {String} opts.uuid 입금 UUID 
     * @param {String} opts.txid 입금 TXID 
     * @param {String} opts.currency Currency 코드 
     * @param {module:api/DepositApi~depositInfoCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/Deposit}
     */
    this.depositInfo = function(opts, callback) {
      opts = opts || {};
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
        'uuid': opts['uuid'],
        'txid': opts['txid'],
        'currency': opts['currency'],
      };
      var collectionQueryParams = {
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['Bearer'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = Deposit;

      return this.apiClient.callApi(
        '/deposit', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }

    /**
     * Callback function to receive the result of the depositInfoAll operation.
     * @callback module:api/DepositApi~depositInfoAllCallback
     * @param {String} error Error message, if any.
     * @param {Array.<module:model/Deposit>} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * 입금 리스트 조회
     * ## 입금 리스트 조회 
     * @param {Object} opts Optional parameters
     * @param {String} opts.currency Currency 코드 
     * @param {String} opts.state 출금 상태 - submitting : 처리 중 - submitted : 처리완료 - almost_accepted : 입금 대기 중 - rejected : 거절 - accepted : 승인됨 - processing : 처리 중 
     * @param {Array.<String>} opts.uuids 입금 UUID의 목록 
     * @param {Array.<String>} opts.txids 입금 TXID의 목록 
     * @param {Number} opts.limit 개수 제한 (default: 100, max: 100) 
     * @param {Number} opts.page 페이지 수, default: 1 
     * @param {String} opts.orderBy 정렬 방식 - asc : 오름차순 - desc : 내림차순 (default) 
     * @param {module:api/DepositApi~depositInfoAllCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link Array.<module:model/Deposit>}
     */
    this.depositInfoAll = function(opts, callback) {
      opts = opts || {};
      var postBody = null;


      var pathParams = {
      };
      var queryParams = {
        'currency': opts['currency'],
        'state': opts['state'],
        'limit': opts['limit'],
        'page': opts['page'],
        'order_by': opts['orderBy'],
      };
      var collectionQueryParams = {
        'uuids': {
          value: opts['uuids'],
          collectionFormat: 'multi'
        },
        'txids': {
          value: opts['txids'],
          collectionFormat: 'multi'
        },
      };
      var headerParams = {
      };
      var formParams = {
      };

      var authNames = ['Bearer'];
      var contentTypes = [];
      var accepts = ['application/json'];
      var returnType = [Deposit];

      return this.apiClient.callApi(
        '/deposits', 'GET',
        pathParams, queryParams, collectionQueryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, callback
      );
    }
  };

  return exports;
}));
