/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on November 25, 2018, 3:39 PM
 * Purpose: HW 6
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
    int type = 5;
    int count = 0;
    string salsa[type] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int sales[type];
    
    for (count = 0; count < type; count++)
    {
        int numSold;
            cout << salsa[count] << ": ";
            cin >> numSold;
            if (numSold < 0)
            {
                cout << "Enter a non-negative number.\n";
            }
        sales[count] = numSold;
    }
    
    int tot, high, low = 0;
    high = low = sales[0];
    
    cout << "\n\t Salsa Sales\n";
    cout << "------------------------\n";
    cout << fixed << showpoint << setprecision(2);
    
    for (count = 0; count < type; count++)
    {
        cout << salsa[count] << ": " << sales[count] << " jars" << endl;
        tot += sales[count];
        if (sales[count] > high)
        {
            high = sales[count];
        }
        else if (sales[count] < low)
        {
            low = sales[count];
        }
    }
    
    cout << "Total Sales: " << tot << endl;
    cout << "Highest Selling Salsa: ";
    
    for (count = 0; count < type; count++)
    {
        if (sales[count] == high)
        {
            cout << salsa[count] << " ";
        }
    }
    
    cout << endl;
    cout << "Lowest Selling Salsa: ";
    
    for (count = 0; count < type; count++)
    {
        if (sales[count] == low)
        {
            cout << salsa[count] << " ";
        }
    }
    return 0;
}


