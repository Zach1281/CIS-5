/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on September 8, 2018, 7:39 PM
 * Purpose: HW 1
 */
#include <iostream>
using namespace std;

int main() 
{
    int x1, x2;
    cout << "Enter two numbers:\n";
    cin >> x1 >> x2; 
    cout << "The sum of " << x1 << " and " << x2 << " is:\n";
    cout << x1 + x2; 
    cout << '\n';
    cout << "The product is:\n";
    cout << x1 * x2;
    return 0;
}

