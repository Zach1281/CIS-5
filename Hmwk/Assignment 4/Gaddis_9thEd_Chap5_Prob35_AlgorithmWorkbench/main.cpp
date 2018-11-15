/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 15, 2018, 7:35 PM
 * Purpose:
 */

#include <iostream>
using namespace std;

int main() 
{
    int x1, product;
    cout << "Enter a number less than or equal to 100.\n";
    while (product < 100)
    {
        cin >> x1;
        product = x1 * 10;
        cout << product;
        cout << "\n";
    }
    
  


    return 0;
}

