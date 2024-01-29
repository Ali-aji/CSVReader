#include <iostream>
#include "MerkelMain.h"

MerkelMain::MerkelMain()
{

}

void MerkelMain::init()
{
    loadOrderBook();
    int input;
    while (true)
    {
        printMenu();
        getUserOption(input);
        proccesUserOption(input);
    }

}

void MerkelMain::loadOrderBook()
{
    _orders.push_back( OrderBookEntry{116.26935391, 0.00913224, "3/17/2020  5:01:55 PM", "ETH/USDT", OrderBookType::bid});
    _orders.push_back( OrderBookEntry{120.9347855, 0.13778321, "3/17/2020  5:01:55 PM", "ETH/USDT", OrderBookType::ask});
    _orders.push_back( OrderBookEntry{10499.8598143, 0.00163503, "3/17/2020  5:01:55 PM", "DOGE/USDT", OrderBookType::bid});

}

void MerkelMain::printMenu()
{
    std::cout << "-- Menu --" << std::endl;

    std::cout << "1: Help" << std::endl;

    std::cout << "2: Print exchange status" << std::endl;

    std::cout << "3: Make an offer" << std::endl;

    std::cout << "4: Make a bid" << std::endl;

    std::cout << "5: Print wallet" << std::endl;

    std::cout << "6: Continue" << std::endl;

    std::cout << "==============" << std::endl;
}

void MerkelMain::printHelp()
{
    std::cout << "Help - choose options from the menu" << std::endl;
    std::cout << "and follow the on screen instructions." << std::endl;
}

void MerkelMain::printMarketStatus()
{
    std::cout << "OrderBook contains: " << _orders.size()<< " entries" << std::endl;
}

void MerkelMain::enterOffer()
{
    std::cout << "Make an offer - enter the amount" << std::endl;
}

void MerkelMain::enterBid()
{
    std::cout << "Make an bid - enter the amount" << std::endl;
}

void MerkelMain::printWallet()
{
    std::cout << "Your wallet is empty" << std::endl;
}

void MerkelMain::goNextTimeFrame()
{
    std::cout << "Going to next time frame" << std::endl;
}

void MerkelMain::getUserOption(int &userOption)
{
    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
}

void MerkelMain::proccesUserOption(int userOption)
{

    if (userOption == 0)
    {
        std::cout << "Invalid choice - choose 1 to 6" << std::endl;
    }

    if (userOption == 1)
    {
        printHelp();
    }

    if (userOption == 2)
    {
        printMarketStatus();
    }
    if (userOption == 3)
    {
        enterOffer();
    }
    if (userOption == 4)
    {
        enterBid();
    }
    if (userOption == 5)
    {
        printWallet();
    }
    if (userOption == 6)
    {
        goNextTimeFrame();
    }
}