/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on December 3, 2018, 4:40 PM
 * Purpose: HW 7
 */

#include <iostream>
using namespace std;

int search(int[], int, int);

int main() 
{
    int num = 10;
    int tick[num] = {13579, 26792, 26791, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int winNum, find;
    
    cout << "Enter your lucky numbers.\n";
    cin >> winNum;
    
    find = search(tick, num, winNum);
    
    if(find == -1)
    {
        cout << "Not a winning ticket, better luck next time.\n";
    }
    else
    {
        cout << "You have a winning ticket!\n";
    }
    
    return 0;
}

int search(int list[], int size, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;
    while (!found && index < size)
    {
        if (list[index] == value)
        {
            position = index;
            found = true;
        }
        index++;
    }
    return position;
}

