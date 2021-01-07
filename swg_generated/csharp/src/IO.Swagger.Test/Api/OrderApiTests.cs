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
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using NUnit.Framework;

using IO.Swagger.Client;
using IO.Swagger.Api;
using IO.Swagger.Model;

namespace IO.Swagger.Test
{
    /// <summary>
    ///  Class for testing OrderApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    [TestFixture]
    public class OrderApiTests
    {
        private OrderApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new OrderApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of OrderApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOfType' OrderApi
            //Assert.IsInstanceOfType(typeof(OrderApi), instance, "instance is a OrderApi");
        }

        
        /// <summary>
        /// Test OrderCancel
        /// </summary>
        [Test]
        public void OrderCancelTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string uuid = null;
            //string identifier = null;
            //var response = instance.OrderCancel(uuid, identifier);
            //Assert.IsInstanceOf<Order> (response, "response is Order");
        }
        
        /// <summary>
        /// Test OrderChance
        /// </summary>
        [Test]
        public void OrderChanceTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string market = null;
            //var response = instance.OrderChance(market);
            //Assert.IsInstanceOf<OrderChance> (response, "response is OrderChance");
        }
        
        /// <summary>
        /// Test OrderInfo
        /// </summary>
        [Test]
        public void OrderInfoTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string uuid = null;
            //string identifier = null;
            //var response = instance.OrderInfo(uuid, identifier);
            //Assert.IsInstanceOf<OrderInfo> (response, "response is OrderInfo");
        }
        
        /// <summary>
        /// Test OrderInfoAll
        /// </summary>
        [Test]
        public void OrderInfoAllTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string market = null;
            //string state = null;
            //List<string> states = null;
            //List<string> uuids = null;
            //List<string> identifiers = null;
            //string kind = null;
            //decimal? page = null;
            //decimal? limit = null;
            //string orderBy = null;
            //var response = instance.OrderInfoAll(market, state, states, uuids, identifiers, kind, page, limit, orderBy);
            //Assert.IsInstanceOf<List<Order>> (response, "response is List<Order>");
        }
        
        /// <summary>
        /// Test OrderNew
        /// </summary>
        [Test]
        public void OrderNewTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string market = null;
            //string side = null;
            //string volume = null;
            //string price = null;
            //string ordType = null;
            //string identifier = null;
            //var response = instance.OrderNew(market, side, volume, price, ordType, identifier);
            //Assert.IsInstanceOf<NewOrder> (response, "response is NewOrder");
        }
        
        /// <summary>
        /// Test OrderOrderbook
        /// </summary>
        [Test]
        public void OrderOrderbookTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //List<string> markets = null;
            //var response = instance.OrderOrderbook(markets);
            //Assert.IsInstanceOf<List<Orderbook>> (response, "response is List<Orderbook>");
        }
        
    }

}
