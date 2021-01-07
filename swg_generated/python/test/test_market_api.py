# coding: utf-8

"""
    Upbit Open API

    ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com]   # noqa: E501

    OpenAPI spec version: 1.1.6
    Contact: ujhin942@gmail.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from __future__ import absolute_import

import unittest

import swagger_client
from swagger_client.api.market_api import MarketApi  # noqa: E501
from swagger_client.rest import ApiException


class TestMarketApi(unittest.TestCase):
    """MarketApi unit test stubs"""

    def setUp(self):
        self.api = swagger_client.api.market_api.MarketApi()  # noqa: E501

    def tearDown(self):
        pass

    def test_market_info_all(self):
        """Test case for market_info_all

        마켓 코드 조회  # noqa: E501
        """
        pass


if __name__ == '__main__':
    unittest.main()
