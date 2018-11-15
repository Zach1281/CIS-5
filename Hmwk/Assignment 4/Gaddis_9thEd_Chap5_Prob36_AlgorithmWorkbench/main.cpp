/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on October 15, 2018, 8:20 PM
 * Purpose: HW 4
 */

#include <iostream>
using namespace std;

int main() 
{
    float x1, x2;
    char choice;
    do{
        cout << "Enter two numbers, they will be added.\n";
        cin >> x1 >> x2;
        cout << x1 + x2;
        cout << '\n';
        cout << "Do you wish to repeat the calculation? Y/N?\n";
                cin >> choice;
    }while ((choice == 'Y') || (choice == 'y'));
        
    


    return 0;
}

