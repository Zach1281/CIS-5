/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on November 2, 2018 1:17 PM
 * Purpose: Project 1
 */

#include <iostream>//I/O Library
#include <cstdlib>// Random Number Library
#include <ctime> //Time Library
#include <cmath> // Math Library
using namespace std;

int main() 
{
    
    int x0,x1,x2,x3,x4,x5,x6,x7,x8;//dice roll variable
    int numC1, numC2, numC3;//player decision on number to choose for knock out
    int score11 = 0, score21 = 0;
    int score12, score22, score13, score23;//trying to keep track of score with player and round respectively 
    srand(time(NULL));
    int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, b = 0, v = 0, g = 0, h =0;//defining variables for random number generation
    char choice1, choice2, choice3, choice4;
    cout << "Hello! This is a two player game called Knock Out!\n";//Declaring what the game is and what the rules are for the game here
    cout << "The rules are as follows.\n";
    cout << "1.) Each player chooses a number. A number can be chosen more than once.\n";
    cout << "2.) Players take turns throwing dice, once each turn. Add the number of both dice for the score.\n"; 
    cout << "3.) If a player throws a number that was chosen, they are Knocked Out! They therefore do not score points for that round.\n"; 
    cout << "Are you ready to play? Y/N?\n"; 
    cin >> choice1;
    while (choice1 == 'Y' || choice1 == 'y')//While loop for choice in starting the game
    {
        cout << "Enter a number to attempt to eliminate your competition.\n";
        cin >> numC1;
        if (numC1<=12)//if loop for making sure the player chooses the correct number
        {
            while (i < 1)//random number generator for computer number selection
            {
                i = i + 1;
                cout << "Your opponent is picking a number.\n"; 
                x0 = (rand() % 12) + 1;
                cout << "Your opponent chose the number " << x0 << endl;
            }
        }
        else //making sure the player chooses the correct number
        {
            cout << "Enter a valid number (between 1-12).\n";
        }
        cout << "Are you ready to roll your dice? Y/N?\n";
        cin >> choice2;
        while (choice2 == 'Y' || choice2 == 'y')//another while loop for the choice to continue and break up the rounds
        {
            while (j < 1)//random number generator 
            {   
                j = j + 1;
                x1 = (rand() % 12) + 1;
                cout << "Your number is: " << x1 << "." << endl;
            }
            while (k < 1)
            {
                k = k + 1;
                cout << "Your opponent now has their opportunity to roll.\n"; 
                x2 = (rand() % 12) + 1;
                cout << "Your opponent rolled a " << x2 << "." << endl;
            }
            if (x1 == x0 || x1 == numC1)
            {
                score21 = x2;
                cout << "No points this round! Player 1's Score: " << score11 << endl;
                cout << "Player 2's Score: " << score21 << endl;
            }
            else if (x2 == numC1 || x2 == x0)
            {
                score11 = x1;
                cout << "Player 1's Score: " << score11 << endl;
                cout << "No points this round! Player 2's Score: " << score21 << endl;
            }
            else
            {
                score11 = x1;
                score21 = x2;
                cout << "Player 1's Score: " << score11 << endl;
                cout << "Player 2's Score: " << score21 << endl;
            }
            cout << "Round 2!" << endl;
            cout << "Pick your number!\n";
            cin >> numC2;
            if (numC2 <= 12)
            {
                while (m < 1)
                {
                    cout << "Your opponent is picking their number.\n";
                    m = m + 1;
                    x3 = (rand() % 12) + 1;
                    cout << "Their number is " << x3 << endl;
                }
            }
            else 
            {
                cout << "Pick a valid number between 1-12.\n"; 
            }
            cout << "Roll again? Y/N?\n";
            cin >> choice3;
            while (choice3 == 'Y' || choice3 == 'y')
            {
                while (n < 1)
                {
                    n = n + 1;
                    x4 = (rand() % 12) + 1;
                    cout << "Your number is: " << x4 << endl;
                }
                while (b < 1)
                {
                    b = b + 1;
                    cout << "Your opponent now has their opportunity to roll.\n"; 
                    x5 = (rand() % 12) + 1;
                    cout << "Your opponent rolled a " << x5 << "." << endl;
                }
                if (x4 == x3 || x4 == numC2)
                {
                    score12 = score11;
                    score22 = score21 + x5;                    
                    cout << "No Points this round! Player 1's Score: " << score12 << endl;
                    cout << "Player 2's Score: " << score22 << endl;
                }
                else if (x5 == numC2 || x5 == x3)
                {
                    score12 = score11 + x4;
                    score22 = score21;
                    cout << "Player 1's Score: " << score12 << endl;
                    cout << "No points this round! Player 2's Score: " << score22 << endl;
                }
                else
                {
                    score12 = score11 + x4;
                    score22 = score21 + x5;
                    cout << "Player 1's Score: " << score12 << endl;
                    cout << "Player 2's Score: " << score22 << endl;
                }
                cout << "Final Round!\n"; 
                cout << "Pick your final KNOCK OUT number!\n";
                cin >> numC3;
                if (numC3 <= 12)
                {
                    while (v < 1)
                    {
                        cout << "Your opponent is picking their number.\n";
                        v = v + 1;
                        x6 = (rand() % 12) + 1;
                        cout << "Their number is " << x6 << endl;
                    }
                }
                else 
                {
                    cout << "Pick a valid number between 1-12.\n"; 
                }
                cout << "Roll again? Y/N?\n";
                cin >> choice4;
                while (choice4 == 'Y' || choice4 == 'y')
                {
                    while (g < 1)
                    {
                        g = g + 1;
                        x7 = (rand() % 12) + 1;
                        cout << "Your number is: " << x7 << endl;
                    
                    while (h < 1)
                    {
                        h = h + 1;
                        cout << "Your opponent now has their opportunity to roll.\n"; 
                        x8 = (rand() % 12) + 1;
                        cout << "Your opponent rolled a " << x8 << "." << endl;
                    }
                    if (x7 == x6 || x7 == numC3)
                    {
                        score13 = score12;
                        score23 = score22 + x8;
                        cout << "No Points this round! Player 1's Score: " << score13 << endl;
                        cout << "Player 2's Score: " << score23 << endl;
                    }
                    else if (x8 == numC3 || x8 == x6)
                    {
                        score13 = score12 + x7;
                        score23 = score22;
                        cout << "Player 1's Score: " << score13 << endl;
                        cout << "No points this round! Player 2's Score: " << score23 << endl;
                    }
                    else if (score13 > score23)
                    {
                        score13 = score12 + x7;
                        score23 = score22 + x8;
                        cout << "Player 1 has won!\n";
                        cout << "Player 1's Score: " << score13 << endl;
                        cout << "Player 2's Score: " << score23 << endl;
                    }
                    else if (score23 > score13)
                    {
                        cout << "Player 2 has won!\n";
                        cout << "Player 2 Total Score: " << score23 << endl;
                        cout << "Player 1 Total Score: " << score13 << endl;
                    }
                }}
            }
        }
    }
    return 0;
}

