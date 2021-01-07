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
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.UpbitOpenApi);
  }
}(this, function(expect, UpbitOpenApi) {
  'use strict';

  var instance;

  describe('(package)', function() {
    describe('TradeTicks', function() {
      beforeEach(function() {
        instance = new UpbitOpenApi.TradeTicks();
      });

      it('should create an instance of TradeTicks', function() {
        // TODO: update the code to test TradeTicks
        expect(instance).to.be.a(UpbitOpenApi.TradeTicks);
      });

      it('should have the property market (base name: "market")', function() {
        // TODO: update the code to test the property market
        expect(instance).to.have.property('market');
        // expect(instance.market).to.be(expectedValueLiteral);
      });

      it('should have the property tradeDateUtc (base name: "trade_date_utc")', function() {
        // TODO: update the code to test the property tradeDateUtc
        expect(instance).to.have.property('tradeDateUtc');
        // expect(instance.tradeDateUtc).to.be(expectedValueLiteral);
      });

      it('should have the property tradeTimeUtc (base name: "trade_time_utc")', function() {
        // TODO: update the code to test the property tradeTimeUtc
        expect(instance).to.have.property('tradeTimeUtc');
        // expect(instance.tradeTimeUtc).to.be(expectedValueLiteral);
      });

      it('should have the property timestamp (base name: "timestamp")', function() {
        // TODO: update the code to test the property timestamp
        expect(instance).to.have.property('timestamp');
        // expect(instance.timestamp).to.be(expectedValueLiteral);
      });

      it('should have the property tradePrice (base name: "trade_price")', function() {
        // TODO: update the code to test the property tradePrice
        expect(instance).to.have.property('tradePrice');
        // expect(instance.tradePrice).to.be(expectedValueLiteral);
      });

      it('should have the property tradeVolume (base name: "trade_volume")', function() {
        // TODO: update the code to test the property tradeVolume
        expect(instance).to.have.property('tradeVolume');
        // expect(instance.tradeVolume).to.be(expectedValueLiteral);
      });

      it('should have the property prevClosingPrice (base name: "prev_closing_price")', function() {
        // TODO: update the code to test the property prevClosingPrice
        expect(instance).to.have.property('prevClosingPrice');
        // expect(instance.prevClosingPrice).to.be(expectedValueLiteral);
      });

      it('should have the property changePrice (base name: "change_price")', function() {
        // TODO: update the code to test the property changePrice
        expect(instance).to.have.property('changePrice');
        // expect(instance.changePrice).to.be(expectedValueLiteral);
      });

      it('should have the property askBid (base name: "ask_bid")', function() {
        // TODO: update the code to test the property askBid
        expect(instance).to.have.property('askBid');
        // expect(instance.askBid).to.be(expectedValueLiteral);
      });

      it('should have the property sequentialId (base name: "sequential_id")', function() {
        // TODO: update the code to test the property sequentialId
        expect(instance).to.have.property('sequentialId');
        // expect(instance.sequentialId).to.be(expectedValueLiteral);
      });

    });
  });

}));
