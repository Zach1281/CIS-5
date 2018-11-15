/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 4, 2018, 10:05 PM
 * Purpose:
 */

#include <iostream>
using namespace std;

int main() 
{
    double value;
    cout << "Enter value in sales.\n";
    cin >> value;
    if (value<10000)
    { cout << "10% commission rate.\n" << endl;}
    else if (value>=10000 && value<15000)
    { cout << "15% commission rate.\n" << endl;}
    else if (value>=15000)
    { cout << "20% commission rate.\n" << endl;}


    return 0;
}

