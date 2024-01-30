#include "OrderBookEntry.h"

OrderBookEntry::OrderBookEntry(double price,
                   double amount,
                   std::string timesstamp,
                   std::string product,
                   OrderBookType orderType)
        : _price(price),
        _amount(amount),
        _timesstamp(timesstamp),
        _product(product),
        _orderType(orderType)
    {

    }

OrderBookType OrderBookEntry::stringToOrderBookType(const std::string& s)
{
    if(s == "ask")
        return OrderBookType::ask;
    if(s == "bid")
        return OrderBookType::bid;
    
    return OrderBookType::unknown;
}