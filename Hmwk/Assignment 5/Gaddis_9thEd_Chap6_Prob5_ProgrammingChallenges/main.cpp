/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on November 11, 2018, 7:41 PM
 * Purpose: HW 5
 */

#include <iostream>
#include <cmath>
using namespace std;

int fallingDistance(int t)
{
   return 0.5 * 9.8 * pow(t,2);
}

int main() 
{
    cout << "Time(s)" << "\t" << "Distance(m)\n";
    cout << "--------------------------------\n";
    
    for(int t = 1; t <= 10; t++)
    {
        cout << t << "\t" << fallingDistance(t) << endl;
    }


    return 0;
}

