#include <string>
#include <iostream>
using namespace std;

int main()
{
    string name;

    cin.ignore(256, '\n');
    cout << "Please enter your full name : ";
    cin >> name;
    cout << "Welcome " << name << endl;
    cout << "Please re-enter your full name: ";
    getline(cin, name);
    cout << "Thanks, " << name << endl;

    return 0;
}