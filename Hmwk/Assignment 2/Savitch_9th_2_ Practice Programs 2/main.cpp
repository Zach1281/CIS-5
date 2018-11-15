/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on September 18, 2018, 3:02 PM
 * Purpose: HW 2
 */

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() 
{ char choice; 
do{ 
    double x1; 
    int x2;  
    cout << " Input two numbers\n";
    cin >> x1 >> x2;     
    cout << x1 << " to the power of " << x2 << " equals ";
    cout << pow(x1, x2);
    cout << '\n';           
    cout << " Rerun calculation? y/n";
    cout << '\n';
    cin >> choice; 
}while (choice == 'y');
    return 0;
}
   

