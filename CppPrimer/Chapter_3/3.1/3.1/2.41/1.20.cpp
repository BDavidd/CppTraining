#include <string>
#include <iostream>

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

int main()
{
    SalesData sale;
    double price = 0.0;
    
    cin >> sale.bookNo >> sale.unitsSold >> price;
    sale.revenue = sale.unitsSold * price;

    cout << "The book with ISBN: " << sale.bookNo 
         << " was sold " << sale.unitsSold << " times"
         << " and generated $" << sale.revenue << " in revenue."
         << endl;

    return 0;
}
