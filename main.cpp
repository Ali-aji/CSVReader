#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "MerkelMain.h"



int main()
{

    MerkelMain app;
    app.init();
    return 0;
}


// std::vector<OrderBookEntry> orders;

// orders.push_back( OrderBookEntry{116.26935391, 0.00913224, "3/17/2020  5:01:55 PM", "ETH/USDT", OrderBookType::bid});
// orders.push_back( OrderBookEntry{120.9347855, 0.13778321, "3/17/2020  5:01:55 PM", "ETH/USDT", OrderBookType::ask});
// orders.push_back( OrderBookEntry{10499.8598143, 0.00163503, "3/17/2020  5:01:55 PM", "DOGE/USDT", OrderBookType::bid});

// while (true)
// {
//     MerkelMain app;
//     app.printMenu();
//     int userOption;
//     app.getUserOption(userOption);
//     app.proccesUserOption(userOption);
// }