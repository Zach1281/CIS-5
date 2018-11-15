/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on November 11, 2018, 6:23 PM
 * Purpose: HW 5
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float getSales(string division)
{
    float sales;
    do
    {
        cout << "Enter the " << division << " division's sales for this quarter.\n";
        cin >> sales;
        if (sales <= 0)
        {
            cout << "Enter a non-negative value.\n";
        }
    }while(!(sales > 0));
    return sales;
}    
void findHighest(float ne, float nw, float se, float sw)
{
    float bestDiv;
    cout << "The most profitable division this quarter was the ";
    if (ne > nw && ne > se && ne > sw)
    {
        bestDiv = ne;
        cout << "northeast";
    }
    else if (nw > ne && nw > se && nw > sw)
    {
        bestDiv = nw;
        cout << "northwest";
    }
    else if (se > sw && se > ne && se > nw)
    {
        bestDiv = se;
        cout << "southeast";
    }
    else
    {
        bestDiv = sw;
        cout << "southwest";
    }
    cout << " division with $" << bestDiv << " in sales.\n";
}

int main() 
{
    float ne, nw, se, sw;
    ne = getSales("northeast");
    nw = getSales("northwest");
    se = getSales("southeast");
    sw = getSales("southwest");
    
    findHighest(ne, nw, se, sw);
 
    return 0;
}

