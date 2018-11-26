/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on November 25, 2018, 5:07 PM
 * Purpose:
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    const int monkies = 3;
    const int days = 5;
    int food[monkies][days];
    float lbs, most, least;
    float tot = 0;
    
    cout << "Enter how many pounds of food each monkey ate each day.\n";
    
    for (int row = 0; row < days; row++)
    {
        for (int col = 0; col < days; col++)
        {
            do
            {
                cout << "Monkey " << (row + 1) << " on day " << (col + 1) << " ate: ";
                cin >> lbs;
                if (lbs < 0)
                {
                    cout << "Enter a non-negative number.\n";
                }
            }while (!(lbs > 0));
            food[row][col] = lbs;
            tot += lbs;
        }
    }
    
    least = most = food[0][0];
    
    for (int row = 0; row < monkies; row++)
    {
        for (int col = 0; col < monkies; col++)
        {
            if (food[row][col] < least)
            {
                least = food[row][col];
            }
            else if (food[row][col] > most)
            {
                most = food[row][col];
            }
        }
    }
    
    cout << "\n\t\t Weekly Food Report\n";
    cout << "\t\tTotal Food Eaten(lbs.)";
    cout << "-----------------------------------\n";
    cout << fixed << showpoint << setprecision(1);
    cout << "Average Amount of Food Eaten Per Day by Whole Monkey Family: ";
    cout << tot/15 << endl;
    cout << "Least Amount of Food Eaten by Any One Monkey: " << least << endl;
    cout << "Most Amount of Food Eaten by Any One Monkey: " << most << endl;


    return 0;
}

