/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on September 18, 2018, 7:28 PM
 * Purpose: HW 2
 */

#include <iostream>
using namespace std;

int main() 
{
    double costMeter = 2.75, discount = 0.15, lengthCarpet, discountCost;
    discountCost = costMeter * discount;
    cout << "How many meters of carpet do you wish to purchase?\n";
    cin >> lengthCarpet;
    cout << "The price is:\n";
    while (lengthCarpet > 10) {
        
    }
    cout << lengthCarpet * costMeter; 
    cout << lengthCarpet * discountCost; 
    


    return 0;
}

