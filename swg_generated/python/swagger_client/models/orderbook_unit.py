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


class OrderbookUnit(object):
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
        'ask_price': 'float',
        'bid_price': 'float',
        'ask_size': 'float',
        'bid_size': 'float'
    }

    attribute_map = {
        'ask_price': 'ask_price',
        'bid_price': 'bid_price',
        'ask_size': 'ask_size',
        'bid_size': 'bid_size'
    }

    def __init__(self, ask_price=None, bid_price=None, ask_size=None, bid_size=None):  # noqa: E501
        """OrderbookUnit - a model defined in Swagger"""  # noqa: E501

        self._ask_price = None
        self._bid_price = None
        self._ask_size = None
        self._bid_size = None
        self.discriminator = None

        if ask_price is not None:
            self.ask_price = ask_price
        if bid_price is not None:
            self.bid_price = bid_price
        if ask_size is not None:
            self.ask_size = ask_size
        if bid_size is not None:
            self.bid_size = bid_size

    @property
    def ask_price(self):
        """Gets the ask_price of this OrderbookUnit.  # noqa: E501

        매도호가  # noqa: E501

        :return: The ask_price of this OrderbookUnit.  # noqa: E501
        :rtype: float
        """
        return self._ask_price

    @ask_price.setter
    def ask_price(self, ask_price):
        """Sets the ask_price of this OrderbookUnit.

        매도호가  # noqa: E501

        :param ask_price: The ask_price of this OrderbookUnit.  # noqa: E501
        :type: float
        """

        self._ask_price = ask_price

    @property
    def bid_price(self):
        """Gets the bid_price of this OrderbookUnit.  # noqa: E501

        매수호가  # noqa: E501

        :return: The bid_price of this OrderbookUnit.  # noqa: E501
        :rtype: float
        """
        return self._bid_price

    @bid_price.setter
    def bid_price(self, bid_price):
        """Sets the bid_price of this OrderbookUnit.

        매수호가  # noqa: E501

        :param bid_price: The bid_price of this OrderbookUnit.  # noqa: E501
        :type: float
        """

        self._bid_price = bid_price

    @property
    def ask_size(self):
        """Gets the ask_size of this OrderbookUnit.  # noqa: E501

        매도 잔량  # noqa: E501

        :return: The ask_size of this OrderbookUnit.  # noqa: E501
        :rtype: float
        """
        return self._ask_size

    @ask_size.setter
    def ask_size(self, ask_size):
        """Sets the ask_size of this OrderbookUnit.

        매도 잔량  # noqa: E501

        :param ask_size: The ask_size of this OrderbookUnit.  # noqa: E501
        :type: float
        """

        self._ask_size = ask_size

    @property
    def bid_size(self):
        """Gets the bid_size of this OrderbookUnit.  # noqa: E501

        매수 잔량  # noqa: E501

        :return: The bid_size of this OrderbookUnit.  # noqa: E501
        :rtype: float
        """
        return self._bid_size

    @bid_size.setter
    def bid_size(self, bid_size):
        """Sets the bid_size of this OrderbookUnit.

        매수 잔량  # noqa: E501

        :param bid_size: The bid_size of this OrderbookUnit.  # noqa: E501
        :type: float
        """

        self._bid_size = bid_size

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
        if issubclass(OrderbookUnit, dict):
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
        if not isinstance(other, OrderbookUnit):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
