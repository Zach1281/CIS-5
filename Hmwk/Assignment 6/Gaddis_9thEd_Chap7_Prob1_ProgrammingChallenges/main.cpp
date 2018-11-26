/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on November 25, 2018, 12:50 PM
 * Purpose: HW 6
 */

#include <iostream>
using namespace std;

int main() 
{
    int num[10];
    int x0, small, large;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a number " << ": ";
        cin >> num[i];
    }
    
    small = num[0];
    large = num[0];
    
    for (int i = 1; i <= 9; i++)
    {
        x0 = num[i];
        if (x0 < small)
            small = x0;
        if (x0 > large)
            large = x0;
    }
    
    cout << "Largest number is: " << large << endl;
    cout << "Smallest number is: " << small << endl;


    return 0;
}

