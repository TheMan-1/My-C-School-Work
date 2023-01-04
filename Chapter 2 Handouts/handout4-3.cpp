#include <iostream>
using namespace std;

int main()
{
    double purchase, stateTax, countySalesTax, totalTaxamount, purchasePrice;
    purchase = 95;
    stateTax = 6.5;
    countySalesTax = 2;
    totalTaxamount = purchase * ((stateTax / 100) + (countySalesTax / 100));
    purchasePrice = totalTaxamount + purchase;

    cout << "The purchase price is $" << purchasePrice << ", the state tax is " << stateTax
         << " percent, the county tax is " << countySalesTax << " percent, and the total tax amount is $"
         << totalTaxamount << ".";

    return 0;
}