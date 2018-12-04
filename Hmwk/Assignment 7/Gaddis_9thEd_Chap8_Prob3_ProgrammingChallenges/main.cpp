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

int search(int array[], int size, int value)
{
    int position = -1;
    int first = 0;
    int middle, last = size -1;
    bool found = false;
    while (!found && first <= last)
    {
        middle = (first + last)/2;
        if (array[middle] == value)
        {
            position = middle;
            found = true;
        }
        else if (array[middle] > value)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }
    return position;
}

