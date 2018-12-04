/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on December 3, 2018, 4:27 PM
 * Purpose: HW 7
 */

#include <iostream>
using namespace std;

int search(int[], int, int);

int main() 
{
    int x0 = 18;
    int list[x0] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int aNum, result;
    
    cout << "Enter a valid account number.\n";
    cin >> aNum;
    
    result = search(list, x0, aNum);
    
    if(result == -1)
    {
        cout << "The account number " << aNum << " is invalid.\n";
    }
    else
    {
        cout << "The account number " << list[result] << " is valid.\n";
    }
        return 0;
}
    
    int search(int list[], int size, int value)
    {
        int index = 0, position = -1;
        bool found = false;
        while (!found && index < size)
        {
            if(list[index] == value)
            {
                found = true;
                position = index;
            }
            index++;
        }
        return position;
    }



