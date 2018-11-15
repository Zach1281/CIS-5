/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 15, 2018, 8:35 PM
 * Purpose: HW 4
 */

#include <iostream>
using namespace std;

int main() 
{
    int x1;
    int x2 = 0;
    
    cout << "Enter a positive integer.\n";
    cin >> x1;
    for (int num = 1; num <= x1; num++)
    {
        x2 += num;
    }
    
    cout << "The sum of all numbers up to the number you entered is " << x2 << ".";
    return 0;
}

