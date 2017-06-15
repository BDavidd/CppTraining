#include <iostream>
#include <string>
#include <map>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::map;

struct SalesData 
{
    string bookNo;
    unsigned int unitsSold = 0;
    double revenue = 0.0;
};

int main(int argc, char *argv[])
{
    SalesData sale;
    double price = 0.0;
    map<string, int> isbnMap;

    cout << "Enter a transaction: " << endl;
    cin >> sale.bookNo >> sale.unitsSold >> price;
    sale.revenue = sale.unitsSold * price;

    isbnMap[sale.bookNo] = 1;

    cout << "Enter the next transaction: " << endl;
    while (cin >> sale.bookNo >> sale.unitsSold >> price)
    {
        if (isbnMap.find(sale.bookNo) != isbnMap.end())
        {
            ++isbnMap[sale.bookNo];
        }
        else
        {
            isbnMap[sale.bookNo] = 1;
        }
        
        cout << "Enter the next transaction: " << endl;
    }

    cout << "The number of transactions for each ISBN: " << endl;

    for (const auto& isbn : isbnMap)
    {
        cout << isbn.first << " : " << isbn.second << endl;
    }

    return 0;
}
