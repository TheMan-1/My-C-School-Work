// This program calculates hourly wages, including overtime.
// It uses ttwo arithmetic operators, the addition operator
//  and the multiplication operator.
#include <iostream>
using namespace std;

int main()
{
    double basePayRate = 18.25,  // Base pay rate
        overtimePayRate = 27.38, // Overtime pay rate
        regularHours = 40.0,     // Regular hours worked
        overtimeHours = 10,      // Overtime hours worked
        regularWages,            // Computed regular wages
        overtimeWages,           // Computed overtime wages
        totalWages;              // computed total wages

    // calculate regular wages
    regularWages = basePayRate * regularHours;

    // Calculate overtime wages
    overtimeWages = overtimePayRate * overtimeHours;

    // Calculate total wages
    totalWages = regularWages + overtimeWages;

    // Display total wages
    cout << "Wages for this week are $" << totalWages << endl;
    return 0;
}