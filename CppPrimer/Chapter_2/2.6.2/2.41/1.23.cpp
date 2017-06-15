#include <iostream>
#include <string>
#include <map>

struct SalesData 
{
    std::string bookNo;
    unsigned int unitsSold = 0;
    double revenue = 0.0;
};

int main(int argc, char *argv[])
{
    SalesData sale;
    double price = 0.0;
    std::map<std::string, int> isbnMap;

    std::cout << "Enter a transaction: " << std::endl;
    std::cin >> sale.bookNo >> sale.unitsSold >> price;
    sale.revenue = sale.unitsSold * price;

    isbnMap[sale.bookNo] = 1;

    std::cout << "Enter the next transaction: " << std::endl;
    while (std::cin >> sale.bookNo >> sale.unitsSold >> price)
    {
        if (isbnMap.find(sale.bookNo) != isbnMap.end())
        {
            ++isbnMap[sale.bookNo];
        }
        else
        {
            isbnMap[sale.bookNo] = 1;
        }
        
        std::cout << "Enter the next transaction: " << std::endl;
    }

    std::cout << "The number of transactions for each ISBN: " << std::endl;

    for (const auto& isbn : isbnMap)
    {
        std::cout << isbn.first << " : " << isbn.second << std::endl;
    }

    return 0;
}
