/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on September 17, 2018, 2:01 PM
 * Purpose: HW 2
 */

#include <iostream>
using namespace std;

int main() 
{ char choice;
  do{
        int numberBoxes;
        float ouncesBox = 14;
        const double tonsBox = 35273.92;
        cout << " Enter the number of cereal boxes.\n";
        cin >> numberBoxes;
        cout << " Cereal in units of tons.\n";
        cout << (numberBoxes * ouncesBox)/tonsBox;
        cout << '\n';
        cout << " Number of boxes needed to yield a ton.\n";
        cout << tonsBox/(numberBoxes * ouncesBox);
        cout << '\n';
        cout << " Repeat calculation? y/n?";
        cin >> choice;
        cout << '\n';
}while (choice == 'y');
    
    return 0;
}

