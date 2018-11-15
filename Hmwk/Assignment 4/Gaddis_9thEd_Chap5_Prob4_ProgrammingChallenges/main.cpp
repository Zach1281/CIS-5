/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 17, 2018, 6:39 PM
 * Purpose: HW 4
 */

#include <iostream>
using namespace std;

int main() 
{
    int x1 = 1;
    cout << "Time (min)     Calories Burned\n";
    cout << "------------------------------\n";
    while (x1 <= 6)
    {
        cout << x1 * 5 << "\t\t" << (x1 * 5) * 3.6 << endl;
        x1++;
    }
    
    
    
    


    return 0;
}

