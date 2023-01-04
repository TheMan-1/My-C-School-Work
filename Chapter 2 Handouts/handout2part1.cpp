#include <iostream>
using namespace std;

int main()
{
    double candy, rate, pay;

    cout << "How many candy bars did you sell? ";
    cin >> candy;

    cout << "How much do sell each candy bar for? ";
    cin >> rate;

    pay = candy * rate;

    cout << "You have earned $" << pay << endl;
    return 0;
}