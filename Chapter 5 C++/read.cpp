#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    char letter;
    int i;

    ifstream reader("poem.txt");

    if (!reader)
    {
        cout << "Error opening input file" << endl;
        return -1;
    }

    else
        for (i = 0; !reader.eof(); i++)
        {
            reader.get(letter);
            cout << letter;
        }

    reader.close();
    cout << "Iterations : " << i << endl;

    return 0;
}