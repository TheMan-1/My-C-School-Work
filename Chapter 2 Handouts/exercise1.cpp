#include <iostream>
using namespace std;

int main()
{
    string name;
    int age, ageNow, time, yearBorn, yearNow;

    cout << "What is your name? ";
    cin >> name;

    cout << "What year were you born? ";
    cin >> yearBorn;

    cout << "What year would you like to see? ";
    cin >> time;

    cout << "What year is it now? ";
    cin >> yearNow;

    age = time - yearBorn;
    ageNow = yearNow - yearBorn;

    cout << name << ", you were born in " << yearBorn << ", in the year " << time
         << " you would be " << age << " years old, and your age now is " << ageNow << "!";
    return 0;
}