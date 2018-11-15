/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on November 11, 2018, 8:33 PM
 * Purpose: HW 5
 */

#include <iostream>
using namespace std;

int celsius(int f)
{
    cout << "Enter the temperature in fahrenheit.\n";
    cin >> f;
    return 0.56 * (f - 32);
}

int main() 
{
    cout << "Fahrenheit" << "\t" << "Celsius\n";
    cout << "-------------------------------\n";
    
    for(int f = 0; f <= 20; f++)
    {
        cout << f << "\t" << celsius(f) << endl;
    }
    return 0;
}

