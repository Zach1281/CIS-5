/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on September 8, 2018, 8:29 PM
 * Purpose: HW 1
 */

#include <iostream>
using namespace std;

int main() 
{
    int t;
    float a = 9.8;
    cout << "Enter the time in air:\n";
    cin >> t; 
    cout << "The distance in meters per second the object has fallen is:\n";
    cout << (t * t * a)/2;

    return 0;
}

