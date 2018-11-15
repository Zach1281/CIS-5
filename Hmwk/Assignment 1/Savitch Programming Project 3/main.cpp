/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on September 8, 2018, 8:10 PM
 * Purpose: HW 1
 */

#include <iostream>
using namespace std;

int main() 
{
    int n, d, q;
    cout << "Enter the amount of nickels\n";
    cin >> n; 
    cout << '\n' << "Enter the amount of dimes\n";
    cin >> d; 
    cout <<'\n' << "Enter the amount of quarters\n";
    cin >> q;
    cout <<'\n' << "The total amount of change is:\n";
    cout << 5 * n + 10 * d + 25 * q;

    return 0;
}

