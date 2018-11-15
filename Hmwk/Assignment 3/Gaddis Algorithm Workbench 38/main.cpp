/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 4, 2018, 10:14 PM
 * Purpose:
 */

#include <iostream>
using namespace std;

int main() 
{
    double hours;
    cout << "Enter the number of hours.\n";
    cin >> hours;
    if (hours>=0 && hours<=80)
    { cout << "The number is valid.\n" << endl;}
    else 
    { cout << "The number is not valid.\n" << endl;}


    return 0;
}

