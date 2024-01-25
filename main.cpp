#include <iostream>

void printMenu()
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

void printHelp()
{
    std::cout << "Help - choose options from the menu" << std::endl;
    std::cout << "and follow the on screen instructions." << std::endl;
}

void printMarketStatus()
{
    std::cout << "Market looks good" << std::endl;
}

void enterOffer()
{
    std::cout << "Make an offer - enter the amount" << std::endl;
}

void enterBid()
{
    std::cout << "Make an bid - enter the amount" << std::endl;
}

void printWallet()
{
    std::cout << "Your wallet is empty" << std::endl;
}

void goNextTimeFrame()
{
    std::cout << "Going to next time frame" << std::endl;
}

void getUserOption(int& userOption)
{
    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
}

void proccesUserOption(int userOption)
{
    // if (userOption == 101)
    // {
    // std::cout << "See you later" << std::endl;
    // }
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

int main()
{
    while (true)
    { 
        printMenu();
        int userOption;
        getUserOption(userOption);
        proccesUserOption(userOption);        
    }
    return 0;
}