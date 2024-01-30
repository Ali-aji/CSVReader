#pragma once
#include <string>

enum class OrderBookType
{
    bid,
    ask,
    unknown
};

class OrderBookEntry
{
public:
    OrderBookEntry(double price,
                   double amount,
                   std::string timesstamp,
                   std::string product,
                   OrderBookType orderType);
    static OrderBookType stringToOrderBookType(const std::string& s);
private:
    double _price;
    double _amount;
    std::string _timesstamp;
    std::string _product;
    OrderBookType _orderType;
};