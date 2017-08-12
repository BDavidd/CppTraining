#include "SalesData.h"
#include <iostream>

int main()
{
    SalesData sale;
    double price = 0.0;
    
    std::cin >> sale.bookNo >> sale.unitsSold >> price;
    sale.revenue = sale.unitsSold * price;

    std::cout << "The book with ISBN: " << sale.bookNo 
              << " was sold " << sale.unitsSold << " times"
              << " and generated $" << sale.revenue << " in revenue."
              << std::endl;

    return 0;
}
