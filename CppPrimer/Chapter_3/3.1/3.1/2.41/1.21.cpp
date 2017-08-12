#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::cerr;
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
    SalesData sale1;
    SalesData sale2;
    double price = 0.0;

    cout << "Please enter the first transaction: " << endl;
    cin >> sale1.bookNo >> sale1.unitsSold >> price;
    sale1.revenue = sale1.unitsSold * price;

    cout << "Please enter the second transaction: " << endl;
    cin >> sale2.bookNo >> sale2.unitsSold >> price;
    sale2.revenue = sale2.unitsSold * price;

    if (sale1.bookNo == sale2.bookNo)
    {
        unsigned int totalUnitsSold = sale1.unitsSold + sale2.unitsSold;
        double totalRevenue = sale1.revenue + sale2.revenue;

        cout << "The book having ISBN: " << sale1.bookNo
             << " was sold " << totalUnitsSold << " times"
             << " and the total revenue gained: $" << totalRevenue;
        if (totalUnitsSold > 0)
        {
            cout << " with an average price of $" << totalRevenue / totalUnitsSold; 
        }

        cout << endl;
    }
    else
    {
        cerr << "The ISBN of the two transactions must match" << endl;
    }

    return 0;
}
