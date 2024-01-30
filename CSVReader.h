#pragma once

#include<vector>
#include "OrderBookEntry.h"

class CSVReader
{

public:
    CSVReader();

    static std::vector<OrderBookEntry> readCSV(const std::string& fileName);

private:
    static std::vector<std::string> tokenise(const std::string& csvLine, char separator);

    static OrderBookEntry stringsToOBE(const std::vector<std::string>&  tokens);
};
