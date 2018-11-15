/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on November 11, 2018, 7:04 PM
 * Purpose: HW 5
 */

#include <iostream>
using namespace std;

int getNumAccidents(string region)
{
    float accidents;
    do
    {
        cout << "Enter the number of accidents reported in the " << region << " during the last year.\n";
        cin >> accidents;
        if (accidents < 0)
        {
            cout << "Enter a non-negative value.\n";
        }
    }while(!(accidents > 0));
    return accidents;
}

void findLowest(float n, float e, float w, float s)
{
    float safeReg;
    cout << "The safest region to drive in is the ";
    if (n < e && n < w && n < s)
    {
        safeReg = n;
        cout << "north";
    }
    else if (e < n && e < w && e < s)
    {
        safeReg = e;
        cout << "east";
    }
    else if (w < n && w < e && w < s)
    {
        safeReg = w;
        cout << "west";
    }
    else 
    {
        safeReg = s;
        cout << "south";
    }
    cout << " with " << safeReg << " accident(s).\n";
}

int main() 
{
    float n, w ,e ,s;
    n = getNumAccidents("north");
    w = getNumAccidents("west");
    e = getNumAccidents("east");
    s = getNumAccidents("south");
    
    findLowest(n, w ,e, s);
    
    return 0;
}

