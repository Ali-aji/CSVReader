#include "CSVReader.h"
#include <iostream>
#include <fstream>

CSVReader::CSVReader(/* args */)
{
}

OrderBookEntry CSVReader::stringsToOBE(const std::vector<std::string> &tokens)
{
    
    double price, amount;
    if (tokens.size() != 5)
    {
        throw std::exception{};
    }
    try
    {
        price = std::stod(tokens[3]);
        amount = std::stod(tokens[4]);
    }
    catch (const std::exception &e)
    {
        std::cout << "bad values, please check";
        throw;
    }

    OrderBookEntry obj{price, amount, tokens[0], tokens[1], OrderBookEntry::stringToOrderBookType(tokens[2])};

    return obj;
}

std::vector<std::string> CSVReader::tokenise(const std::string &csvLine, char separator)
{
    std::vector<std::string> tokens;
    std::string token;
    signed int start, end;
    start = csvLine.find_first_not_of(separator, 0);

    do
    {
        end = csvLine.find_first_of(separator, start);
        if (start == csvLine.length() || start == end)
            break;

        if (end >= 0)
            token = csvLine.substr(start, end - start);

        else
            token = csvLine.substr(start, csvLine.length() - start);

        tokens.push_back(token);
        start = end + 1;

    } while (end != std::string::npos);

    return tokens;
}

std::vector<OrderBookEntry> CSVReader::readCSV(const std::string &fileName)
{
    std::vector<OrderBookEntry> entries;
    std::ifstream csvFile{fileName};
    std::string line;
    std::vector<std::string> tokens;

    if(csvFile.is_open())
    {
        while(std::getline(csvFile, line))
        {
            try {
                tokens = tokenise(line, ',');
                entries.push_back(stringsToOBE(tokens));
            } catch (const std::exception& e) {
                std::cout << "CSVReader::readCSV bad values   " << e.what() << std::endl;
            }
        }
        csvFile.close();
    }
    else
    {
        std::cout << " Can't open the file";
    }

    return entries;
}
