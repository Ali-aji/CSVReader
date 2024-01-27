#pragma once

class MerkelMain
{
public:
    MerkelMain();
    /** init the app and start it*/
    void init(); 
private:
    void printMenu();
    void printHelp();
    void printMarketStatus();
    void enterOffer();
    void enterBid();
    void printWallet();
    void goNextTimeFrame();
    void getUserOption(int &userOption);
    void proccesUserOption(int userOption);

};