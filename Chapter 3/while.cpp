#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> vec(10);
    int i = 0;

    while (i < vec.size())
    {
        i++;
        vec[i - 1] = i;
        if (i == 3)
        {
            cout << "|Skipped";
            continue;
        }
        if (i == 8)
        {
            cout << "|Done";
            break;
        }
        cout << "|" << vec.at(i - 1);
    }

    return 0;
}