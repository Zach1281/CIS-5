/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on September 18, 2018, 4:46 PM
 * Purpose: HW 2
 */

#include <iostream>
using namespace std;

int main() 
{
    double mph, minutes, decimalSeconds;
    int wholeMinutes, seconds; 
    cout << " Enter your miles per hour.\n"; 
    cin >> mph; 
    minutes = 60/mph;  
    wholeMinutes = minutes;
    decimalSeconds = minutes - wholeMinutes; 
    seconds = decimalSeconds * 60;
    cout << " Your pace is " << wholeMinutes << " minutes and " << seconds << " seconds.";
    


    return 0;
}

