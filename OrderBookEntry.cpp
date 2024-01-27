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