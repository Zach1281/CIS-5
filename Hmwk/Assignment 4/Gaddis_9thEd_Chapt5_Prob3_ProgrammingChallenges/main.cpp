/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 17, 2018, 6:20 PM
 * Purpose: HW 4
 */

#include <iostream>
using namespace std;

int main() 
{
    int x1 = 0;
    cout << "Years  Distance Risen (mm)";
    cout << "--------------------------";
    while (x1 <= 25)
    {
        cout << x1 << "\t" << x1 * 1.5 << endl;
        x1++;
    }


    return 0;
}

