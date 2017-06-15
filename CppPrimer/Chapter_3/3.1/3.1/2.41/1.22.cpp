#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

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

    cout << "Enter a transaction: " << endl;
    cin >> sale.bookNo >> sale.unitsSold >> price;
    sale.revenue = sale.unitsSold * price;

    SalesData genSale;
    unsigned int totalUnitsSold = sale.unitsSold;
    double totalRevenue = sale.revenue;

    cout << "Enter the next transaction: " << endl;
    while (cin >> genSale.bookNo >> genSale.unitsSold >> price)
    {
        if (genSale.bookNo == sale.bookNo)
        {
            cout << "Enter the next transaction: " << endl;
            totalUnitsSold += genSale.unitsSold;
            totalRevenue += genSale.unitsSold * price;
        }
        else
        {
            break;
        }
    }

    cout << "The book having ISBN: " << sale.bookNo
         << " was sold " << totalUnitsSold << " times"
         << " and the total revenue gained: $" << totalRevenue;
    if (totalUnitsSold > 0)
    {
        cout << " with an average price of $" << totalRevenue / totalUnitsSold; 
    }
    cout << endl;

    return 0;
}
