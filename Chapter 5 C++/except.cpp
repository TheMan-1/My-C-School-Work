#include <stdexcept>
#include <typeinfo>
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string lang = "C++";
    int num = 1000000000;
    cout << "Program continues..." << endl;

    try
    {
        lang.replace(100, 1, "C");
    }

    catch (out_of_range &e)
    {
        cerr << "Range Exception : " << e.what() << endl;
        cerr << "Exception Type : " << typeid(e).name();
        cerr << endl
             << "Program terminated." << endl;
        return -1;
    }

    lang.resize(3 * num);

    catch (exception &e)
    {
        cerr << "Exception : " << e.what() << endl;
        cerr << "Exception Type : " << typeid(e).name() << endl;
    }

    ifstream reader("nonsuch.txt");
    if (!reader)
        throw logic_error("File not found");

    return 0;
}