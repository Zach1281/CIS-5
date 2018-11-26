/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on November 25, 2018, 2:26 PM
 * Purpose: HW 7
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
    const int months = 12;
    int count = 0;
    string name[months] = { "January", "February", "March", "April", "May", "June", "July", "September", "October", "November", "December"};
    float rain[months], average, large, small;
    float year = 0;
    string largeMonth, smallMonth;
    
    for (count = 0; count < months; count++)
    {
        cout << "Enter the amount of rainfall (in inches) for " << name[count] << endl;
        cin >> rain[count];
        while (rain[count] < 0)
        {
            cout << "Enter a non-negative number.\n";
            cin >> rain[count];
        }
    }
    
    large = rain[0];
    small = rain[0];
    
    for (count = 1; count < months; count++)
    {
        if (rain[count] > large)
        {
            largeMonth = name[count];
            large = rain[count];
        }
        else if (rain[count] < small)
        {
            smallMonth = name[count];
            small = rain[count];
        }
    }
    
    average = year/months;
    
    cout << "Total Rainfall: " << year << endl;
    cout << "Average Rainfall: " << average << endl;
    cout << "Month with highest rainfall: " << largeMonth << " with " << large << " inches.\n";
    cout << "Month with lowest rainfall: " << smallMonth << " with " << small << " inches.\n";


    return 0;
}

