#include <iostream>
#include <string>

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
    
    std::cout << "Enter a transaction: " << std::endl;
    std::cin >> sale.bookNo >> sale.unitsSold >> price;
    sale.revenue = sale.unitsSold * price;

    SalesData genSale;
    unsigned int totalUnitsSold = sale.unitsSold;
    double totalRevenue = sale.revenue;

    std::cout << "Enter the next transaction: " << std::endl;
    while (std::cin >> genSale.bookNo >> genSale.unitsSold >> price)
    {
        if (genSale.bookNo == sale.bookNo)
        {
            std::cout << "Enter the next transaction: " << std::endl;
            totalUnitsSold += genSale.unitsSold;
            totalRevenue += genSale.unitsSold * price;
        }
        else
        {
            break;
        }
    }

    std::cout << "The book having ISBN: " << sale.bookNo
              << " was sold " << totalUnitsSold << " times"
              << " and the total revenue gained: $" << totalRevenue;
    if (totalUnitsSold > 0)
    {
        std::cout << " with an average price of $" << totalRevenue / totalUnitsSold; 
    }
    std::cout << std::endl;

    return 0;
}
