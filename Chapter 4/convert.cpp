#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
    string term = "100";
    int number = 100;

    int num;
    string text;
    stringstream stream;
    stream >> term;
    stream >> num;
    num /= 4;
    cout << "Integer value: " << num << endl;
    stream.str("");
    stream.clear();
    stream << number;

    stream >> text;
    text += "Per Cent";
    cout << "String value:" << text << endl;

    return 0;
}