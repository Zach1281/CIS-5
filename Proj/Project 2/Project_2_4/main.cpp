/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on November 5, 2018 9:03 PM
 * Purpose: Project 1
 */

#include <iostream>//I/O Library
#include <cstdlib>// Random Number Library
#include <ctime> //Time Library
#include <cmath> // Math Library
using namespace std;

int main() 
{
    int dice[12];//dice roll variable
    int num[3];//player decision on number to choose for knock out
    int score[2][4];//trying to keep track of score with player and round respectively 
    srand(time(NULL));
    //defining variables for random number generation
    char choice1,choice2,choice3,choice4,choice5,choice6;
    int i[12];
    cout << "Hello! This is a two player game called Knock Out!\n";//Declaring what the game is and what the rules are for the game here
    cout << "The rules are as follows.\n";
    cout << "1.) Each player chooses a number. A number can be chosen more than once.\n";
    cout << "2.) Players take turns throwing dice, once each turn. Add the number of both dice for the score.\n"; 
    cout << "3.) If a player throws a number that was chosen, they are Knocked Out! They therefore do not score points for that round.\n"; 
    cout << "Are you ready to play? Y/N?\n"; 
    cin >> choice1;
    while (choice1 == 'Y' || choice1 == 'y')//While loop for choice in starting the game
    {
        cout << "Enter the number you wish to eliminate your competition.\n";
        cin >> num[0];
        if (num[0] <= 12)
        {
            while (i[0] < 1)
            {
                cout << "Your opponent is picking their number.\n";
                i[0] = i[0] + 1;
                dice[0] = (rand() % 12) + 1;
                cout << "Their number is " << dice[0] << endl;
            }
        }
        else 
        {
            cout << "Pick a valid number between 1-12.\n"; 
        }
        cout << "Another Round? Y/N?\n";
        cin >> choice2;
        while (choice2 == 'Y' || choice2 == 'y')//another while loop for the choice to continue and break up the rounds
        {
            cout << "Enter your number to eliminate your competition.\n";
            cin >> num[1];
            for(int j=0;j<1;j++)
            {   
                dice[1] = (rand() % 12) + 1;
                cout << "Your number is: " << dice[1] << "." << endl;
            }
            for (i[2]=0;i[2]< 1;i[2]++)
            {
                cout << "Your opponent now has their opportunity to roll.\n"; 
                dice[2] = (rand() % 12) + 1;
                cout << "Your opponent rolled a " << dice[2] << "." << endl;
            }
            if (dice[1] == dice[0] || dice[1] == num[0])
            {
                score[2][1]= dice[2];
                cout << "No points this round! Player 1's Score: " << score[1][1] << endl;
                cout << "Player 2's Score: " << score[2][1] << endl;
            }
            else if (dice[2] == num[0] || dice[2] == dice[0])
            {
                score[1][1] = dice[1];
                cout << "Player 1's Score: " << score[1][1] << endl;
                cout << "No points this round! Player 2's Score: " << score[2][1] << endl;
            }
            else if (dice[1] == dice[0] && dice[2] == num[0])
            {
                cout << "No dice!\n";
                cout << "Player 1's Score: " << score[1][1] << endl;
                cout << "Player 2's Score: " << score[2][1] << endl;
            }
            else
            {
                score[1][1] = dice[1];
                score[2][1] = dice[2];
                cout << "Player 1's Score: " << score[1][1] << endl;
                cout << "Player 2's Score: " << score[2][1] << endl;
            }
            cout << "Round 2!\n";
            cout << "Pick your number!\n";
            cin >> num[1];
            if (num[1] <= 12)
            {
                for (i[3]=0;i[3]< 1;i[3])
                {
                    cout << "Your opponent is picking their number.\n";
                    dice[3] = (rand() % 12) + 1;
                    cout << "Their number is " << dice[3] << endl;
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
                while (i[4] < 1)
                {
                    i[4] = i[4] + 1;
                    dice[4] = (rand() % 12) + 1;
                    cout << "Your number is: " << dice[4] << endl;
                }
                while (i[5] < 1)
                {
                    i[5] = i[5] + 1;
                    cout << "Your opponent now has their opportunity to roll.\n"; 
                    dice[5] = (rand() % 12) + 1;
                    cout << "Your opponent rolled a " << dice[5] << "." << endl;
                }
                if (dice[4] == dice[3] || dice[4] == num[1])
                {
                    score[1][2] = score[1][1];
                    score[2][2] = score[2][1] + dice[5];                    
                    cout << "No Points this round! Player 1's Score: " << score[1][2] << endl;
                    cout << "Player 2's Score: " << score[2][2] << endl;
                }
                else if (dice[5] == num[1] || dice[5] == dice[3])
                {
                    score[1][2] = score[1][1] + dice[4];
                    score[2][2] = score[2][1];
                    cout << "Player 1's Score: " << score[1][2] << endl;
                    cout << "No points this round! Player 2's Score: " << score[2][2] << endl;
                }
                else if (dice[4] == dice[3] && dice[5] == num[1])
                {
                    cout << "No dice!\n";
                    score[1][2] = score[1][1];
                    score[2][2] = score[2][1];
                }
                else
                {
                    score[1][2] = score[1][1] + dice[4];
                    score[2][2] = score[2][1] + dice[5];
                    cout << "Player 1's Score: " << score[1][2] << endl;
                    cout << "Player 2's Score: " << score[2][2] << endl;
                }
                cout << "Round 3!\n";
                cout << "Pick your number!\n";
                cin >> num[2];
                if (num[2] <= 12)
                {
                    while (i[6] < 1)
                    {
                        cout << "Your opponent is picking their number.\n";
                        i[6] = i[6] + 1;
                        dice[6] = (rand() % 12) + 1;
                        cout << "Their number is " << dice[6] << endl;
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
                    while (i[7] < 1)
                    {
                        i[7] = i[7] + 1;
                        dice[7] = (rand() % 12) + 1;
                        cout << "Your number is: " << dice[7] << endl;
                    }
                    while (i[8] < 1)
                    {
                        i[8] = i[8] + 1;
                        cout << "Your opponent now has their opportunity to roll.\n"; 
                        dice[8] = (rand() % 12) + 1;
                        cout << "Your opponent rolled a " << dice[8] << "." << endl;
                    }
                    if (dice[7] == dice[6] || dice[4] == num[2])
                    {
                        score[1][2] = score[1][3];
                        score[2][2] = score[2][3] + dice[5];                    
                        cout << "No Points this round! Player 1's Score: " << score[1][3] << endl;
                        cout << "Player 2's Score: " << score[2][3] << endl;
                    }
                    else if (dice[8] == num[2] || dice[8] == dice[6])
                    {
                        score[1][3] = score[1][2] + dice[7];
                        score[2][3] = score[2][2];
                        cout << "Player 1's Score: " << score[1][3] << endl;
                        cout << "No points this round! Player 2's Score: " << score[2][3] << endl;
                    }
                    else if (dice[7] == dice[6] && dice[8] == num[2])
                    {
                        cout << "No dice!\n";
                        score[1][3] = score[1][2];
                        score[2][3] = score[2][2];
                    }
                    else
                    {
                        score[1][3] = score[1][2] + dice[7];
                        score[2][3] = score[2][2] + dice[8];
                        cout << "Player 1's Score: " << score[1][3] << endl;
                        cout << "Player 2's Score: " << score[2][3] << endl;
                    }
                    cout << "Final Round!\n"; 
                    cout << "Pick your final KNOCK OUT number!\n";
                    cin >> num[3];
                    if (num[3] <= 12)
                    {
                        while (i[9] < 1)
                        {
                            cout << "Your opponent is picking their number.\n";
                            i[9] = i[9] + 1;
                            dice[9] = (rand() % 12) + 1;
                            cout << "Their number is " << dice[9] << endl;
                        }
                    }
                    else 
                    {
                        cout << "Pick a valid number between 1-12.\n"; 
                    }
                    cout << "Roll again? Y/N?\n";
                    cin >> choice5;
                    while (choice5 == 'Y' || choice5 == 'y')
                    {
                        while (i[10] < 1)
                        {
                            i[10] = i[10] + 1;
                            dice[10] = (rand() % 12) + 1;
                            cout << "Your number is: " << dice[10] << endl;
                        }
                        while (i[11] < 1)
                        {
                            i[11] = i[11] + 1;
                            cout << "Your opponent now has their opportunity to roll.\n"; 
                            dice[11] = (rand() % 12) + 1;
                            cout << "Your opponent rolled a " << dice[11] << "." << endl;
                        }
                        if (dice[10] == dice[9] || dice[10] == num[3])
                        {
                            score[1][4] = score[1][3];
                            score[2][4] = score[2][3] + dice[11];
                            cout << "No Points this round! Player 1's Score: " << score[1][4] << endl;
                            cout << "Player 2's Score: " << score[2][4] << endl;
                        }
                        else if (dice[11] == num[3] || dice[11] == dice[9])
                        {
                            score[1][4] = score[1][3] + dice[10];
                            score[2][4] = score[2][3];
                            cout << "Player 1's Score: " << score[1][4] << endl;
                            cout << "No points this round! Player 2's Score: " << score[2][4] << endl;
                        }
                        else if (score[1][4] > score[2][4])
                        {
                            score[1][4] = score[1][3] + dice[10];
                            score[2][4] = score[2][3] + dice[11];
                            cout << "Player 1's Score: " << score[1][4] << endl;
                            cout << "Player 2's Score: " << score[2][4] << endl;
                        }
                        if (score[2][4] > score[1][4])
                        {
                            cout << "Player 1 Total Score: " << score[1][4] << endl;
                            cout << "Player 2 Total Score: " << score[2][4] << endl;
                            cout << "Player 2 has won!\n";
                        }
                        else //end result
                        {
                            cout << "Player 1 Total Score: " << score[1][4] << endl;
                            cout << "Player 2 Total Score: " << score[2][4] << endl;
                            cout << "Player 1 has won!\n";
                        }
                    }
                }
            }
        }
    }
    return 0;
}



