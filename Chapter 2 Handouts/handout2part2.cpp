#include <iostream>
using namespace std;

int main()
{
    double soil, seeds, fence, pay;

    cout << "How much is the soil? ";
    cin >> soil;

    cout << "How much did the seeds cost? ";
    cin >> seeds;

    cout << "How much did the fence cost? ";
    cin >> fence;

    pay = soil + seeds + fence;

    cout << "You have spent $" << pay << endl;
    return 0;
}