#pragma once

#include <vector>
#include "OrderBookEntry.h"
class MerkelMain
{
public:
    MerkelMain();
    /** init the app and start it*/
    void init(); 
private:
    void loadOrderBook();
    void printMenu();
    void printHelp();
    void printMarketStatus();
    void enterOffer();
    void enterBid();
    void printWallet();
    void goNextTimeFrame();
    void getUserOption(int &userOption);
    void proccesUserOption(int userOption);
    
    std::vector<OrderBookEntry> _orders;

};