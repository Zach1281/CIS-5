/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 4, 2018, 10:11 PM
 * Purpose:
 */

#include <iostream>
using namespace std;

int main() 
{
    double temp;
    cout << "Enter the a temperature.\n";
    cin >> temp;
    if (temp>=-50 && temp<=150)
    { cout << "The number is valid.\n" << endl;}
    else 
    { cout << "The number is not valid.\n" << endl;}


    return 0;
}

