#include <iostream>
using namespace std;

int main()
{
    double gas, miles, perGallon;
    gas = 16;
    miles = 312;
    perGallon = miles / gas;

    cout << "This car gets " << perGallon << " miles per gallon!";
    return 0;
}