/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on September 20, 2018, 4:27 PM
 * Purpose: LAB 3
 */

#include <iostream>
using namespace std;

int main() 
{
    double galGas, totalTax, salesTax, gasPrice;
    const double sfTax = 0.674;
    cout << "Enter the price of gas per gallon the last time you put gas in your car.\n";
    cin >> gasPrice; 
    cout << '\n';
    salesTax = gasPrice * 0.08;
    cout << "The percentage gas tax on one gallon of gas is: "; 
    totalTax = salesTax + sfTax;
    cout << 100 * (totalTax/gasPrice);
    cout <<"%.";
    cout << '\n';
    cout << "Gas company profit per gallon is ";
    cout << gasPrice * 0.065; 
    cout << " and they make approximately 6.5% profit off of the price of one gallon of gas.";
    cout << '\n';
    cout << "Government profit per gallon: ";
    cout << sfTax; 
    cout << " and they make approximately 27.3123% profit off of the price of one gallon of gas.";
    
 
   
    
      
            


    return 0;
}

