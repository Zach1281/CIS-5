/* 
 * File:   main.cpp
 * Author: Zachary Romero
 * Created on September 28, 2018, 8:25 PM
 * Purpose:
 */

//Libraries Here
#include <iostream>//I/O Library
using namespace std;

//Program Execution Begins Here
int main() 
{
    int month, day;//Declare Variables Here
    char choice; 
    do{//Loop Begins Here
    cout << "Enter in your birth month numerically.\n";
    cin >> month;
    cout << "Enter in your birth day.\n";
    cin >> day;
    if ((day>=21 && day<=31 && month == 3) || (day>=1 && day<=19 && month == 4))
    { cout << "You are an Aries.\n";
      cout << "You are gonna be a cool kid today.\n";
      cout << "You would be most comfortable with a Leo and/or a Sagittarius.\n" << endl;}
    else if ((day>=20 && day<=31 && month == 4) || (day>=1 && day<=20 && month == 5))
    { cout << "You are a Taurus.\n";
      cout << "You are gonna be in trouble today.\n";
      cout << "You would be most comfortable with a Virgo and/or a Capricorn.\n" << endl;}
    else if ((day>=21 && day<=31 && month == 5) || (day>=1 && day<=21 && month == 6))
    { cout << "You are a Gemini.\n";
      cout << "You need help.\n";
      cout << "You would be most comfortable with a Libra and/or an Aquarius.\n" << endl;}
    else if ((day>=22 && day<=31 && month ==6) || (day>=1 && day<=22 && month ==7))
    { cout << "You are a Cancer.\n";
      cout << "You don't have cancer.\n";
      cout << "You would be most comfortable with a Scorpio and/or a Pisces.\n" << endl;}
    else if ((day>=23 && day<=31 && month ==7) || (day>=1 && day<=22 && month == 8))
    { cout << "You are a Leo.\n ";
      cout << "You are a tiger.\n";
      cout << "You would be most comfortable with an Aries and/or a Sagittarius.\n" << endl;}
    else if ((day>=23 && day<=31 && month ==8) || (day>=1 && day<=22 && month ==9))
    { cout << "You are a Virgo.\n ";
      cout << "You are so not cool.\n ";
      cout << "You would be most comfortable with a Taurus and/or a Capricorn.\n" << endl;}
    else if ((day>=23 && day<=31 && month ==9) || (day>=1 && day<=22 && month ==10))
    { cout << "You are a Libra.\n";
      cout << "You are a liger.\n";
      cout << "You would be most comfortable with a Gemini and/or an Aquarius.\n" << endl;}
    else if ((day>=23 && day<=31 && month ==10) || (day>=1 && day<=21 && month ==11))
    { cout << "You are a Scorpio.\n";
      cout << "You are a scorpion.\n";
      cout << "You would be most comfortable with a Cancer and/or a Pisces.\n" << endl;}
    else if ((day>=22 && day<=31 && month ==11) || (day>=1 && day<=21 && month == 12))
    { cout << "You are a Sagittarius.\n"; 
      cout << "You will feel lost.\n";
      cout << "You would be most comfortable with an Aries and/or a Leo.\n" << endl;}
    else if ((day>=22 && day<=31 && month ==12) || (day>=1 && day<=19 && month ==1))
    { cout << "You are a Capricorn.\n";
      cout << "Look up.\n";
      cout << "You would be most comfortable with a Taurus and/or a Virgo.\n" << endl;}
    else if ((day>=20 && day<=31 && month ==1) || (day>=1 && day<=18 && month ==2))
    { cout << "You are an Aquarius.\n";
      cout << "Watch your back.\n";
      cout << "You would be most comfortable with a Gemini and/or a Libra.\n" << endl;}
    else if ((day>=19 && day<=31 && month ==2) || (day>=1 && day<=20 && month ==3))
    { cout << "You are a Pisces.\n";
      cout << "The floor is falling.\n";
      cout << "You would be most comfortable with a Cancer and/or a Scorpio.\n" << endl;}
    cout << "Do you wish to restart the program? Y/N.\n";
            cin >> choice;
    }while ((choice == 'Y') || (choice == 'y'));//Loop Ends Here
   //Output
   
   
    //End
    return 0;
    
}


