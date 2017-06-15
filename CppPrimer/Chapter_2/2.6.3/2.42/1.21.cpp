#include <iostream>
#include "SalesData.h"

int main(int argc, char *argv[])
{
    SalesData sale1;
    SalesData sale2;
    double price = 0.0;

    std::cout << "Please enter the first transaction: " << std::endl;
    std::cin >> sale1.bookNo >> sale1.unitsSold >> price;
    sale1.revenue = sale1.unitsSold * price;

    std::cout << "Please enter the second transaction: " << std::endl;
    std::cin >> sale2.bookNo >> sale2.unitsSold >> price;
    sale2.revenue = sale2.unitsSold * price;

    if (sale1.bookNo == sale2.bookNo)
    {
        unsigned int totalUnitsSold = sale1.unitsSold + sale2.unitsSold;
        double totalRevenue = sale1.revenue + sale2.revenue;

        std::cout << "The book having ISBN: " << sale1.bookNo
                  << " was sold " << totalUnitsSold << " times"
                  << " and the total revenue gained: $" << totalRevenue;
        if (totalUnitsSold > 0)
        {
            std::cout << " with an average price of $" << totalRevenue / totalUnitsSold; 
        }

        std::cout << std::endl;
    }
    else
    {
        std::cerr << "The ISBN of the two transactions must match" << std::endl;
    }

    return 0;
}
