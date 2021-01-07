# coding: utf-8

"""
    Upbit Open API

    ## REST API for Upbit Exchange - Base URL: [https://api.upbit.com] - Official Upbit API Documents: [https://docs.upbit.com] - Official Support email: [open-api@upbit.com]   # noqa: E501

    OpenAPI spec version: 1.1.6
    Contact: ujhin942@gmail.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six


class MarketInfo(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'market': 'str',
        'korean_name': 'str',
        'english_name': 'str',
        'market_warning': 'str'
    }

    attribute_map = {
        'market': 'market',
        'korean_name': 'korean_name',
        'english_name': 'english_name',
        'market_warning': 'market_warning'
    }

    def __init__(self, market=None, korean_name=None, english_name=None, market_warning=None):  # noqa: E501
        """MarketInfo - a model defined in Swagger"""  # noqa: E501

        self._market = None
        self._korean_name = None
        self._english_name = None
        self._market_warning = None
        self.discriminator = None

        if market is not None:
            self.market = market
        if korean_name is not None:
            self.korean_name = korean_name
        if english_name is not None:
            self.english_name = english_name
        if market_warning is not None:
            self.market_warning = market_warning

    @property
    def market(self):
        """Gets the market of this MarketInfo.  # noqa: E501

        업비트에서 제공중인 시장 정보  # noqa: E501

        :return: The market of this MarketInfo.  # noqa: E501
        :rtype: str
        """
        return self._market

    @market.setter
    def market(self, market):
        """Sets the market of this MarketInfo.

        업비트에서 제공중인 시장 정보  # noqa: E501

        :param market: The market of this MarketInfo.  # noqa: E501
        :type: str
        """

        self._market = market

    @property
    def korean_name(self):
        """Gets the korean_name of this MarketInfo.  # noqa: E501

        거래 대상 암호화폐 한글명  # noqa: E501

        :return: The korean_name of this MarketInfo.  # noqa: E501
        :rtype: str
        """
        return self._korean_name

    @korean_name.setter
    def korean_name(self, korean_name):
        """Sets the korean_name of this MarketInfo.

        거래 대상 암호화폐 한글명  # noqa: E501

        :param korean_name: The korean_name of this MarketInfo.  # noqa: E501
        :type: str
        """

        self._korean_name = korean_name

    @property
    def english_name(self):
        """Gets the english_name of this MarketInfo.  # noqa: E501

        거래 대상 암호화폐 영문명  # noqa: E501

        :return: The english_name of this MarketInfo.  # noqa: E501
        :rtype: str
        """
        return self._english_name

    @english_name.setter
    def english_name(self, english_name):
        """Sets the english_name of this MarketInfo.

        거래 대상 암호화폐 영문명  # noqa: E501

        :param english_name: The english_name of this MarketInfo.  # noqa: E501
        :type: str
        """

        self._english_name = english_name

    @property
    def market_warning(self):
        """Gets the market_warning of this MarketInfo.  # noqa: E501

        유의 종목 여부 - NONE (해당 사항 없음) - CAUTION (투자유의)   # noqa: E501

        :return: The market_warning of this MarketInfo.  # noqa: E501
        :rtype: str
        """
        return self._market_warning

    @market_warning.setter
    def market_warning(self, market_warning):
        """Sets the market_warning of this MarketInfo.

        유의 종목 여부 - NONE (해당 사항 없음) - CAUTION (투자유의)   # noqa: E501

        :param market_warning: The market_warning of this MarketInfo.  # noqa: E501
        :type: str
        """

        self._market_warning = market_warning

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value
        if issubclass(MarketInfo, dict):
            for key, value in self.items():
                result[key] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, MarketInfo):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
