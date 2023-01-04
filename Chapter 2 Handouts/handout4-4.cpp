#include <iostream>
using namespace std;

int main()
{
    double mealCost, tax, taxPercent, tipPercent, tip, purchasePrice;
    mealCost = 44.50;
    taxPercent = 6.75;
    tipPercent = 15;

    tax = mealCost * (taxPercent / 100);

    tip = (tipPercent / 100) * (mealCost + tax);

    purchasePrice = tax + tip + mealCost;

    cout << "The meal cost is $" << mealCost << ", the tax amount is $" << tax
         << ", the tip amount is $" << tip << ", and the total bill is $" << purchasePrice << ".";

    return 0;
}