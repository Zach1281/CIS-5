/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on November 11, 2018, 3:42 PM
 * Purpose: HW 5
 */

#include <iostream>
using namespace std;

float calculateRetail()
{
    float wCost, mPer;
    do{
        cout << "Enter the item's wholesale cost.\n";
        cin >> wCost;
        if (wCost < 0)
        {
            cout << "Enter a non-negative integer.\n";
        }
    }
    while (!(wCost > 0));
    do{
        cout << "Enter the item's markup percentage.\n";
        cin >> mPer;
        if (mPer < 0)
        {
            cout << "Enter a non-negative integer.\n";
        }
    }
    while (!(mPer > 0));
    
    mPer *= 0.01; 
    return (wCost * mPer) + wCost;
}
int main() 
{
    float rPrice = calculateRetail();
    cout << "The item's retail price is " << rPrice << ".\n";
    return 0;
}



