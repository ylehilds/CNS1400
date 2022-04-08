// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Lab Five
// Date Written: Feb 07, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

// The program will aske user if he/she would like to roll a pair of dices, if y, for yes,
// the program will randomly pick 2 values for dice and display it, if values are 6 & 6
// then it will display boxcars, if values are 1 & 1 then it will display snake-eyes
// if anything else it will display the values, prompt user if he/she would like to play
// again, if y, for yes, he/she will play it again, if n,for no, it will terminate the program.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
int main()
{
	
	char answer,y,n; // variables statement

	do
	{
		cout << "Would you like to roll a pair of dice? " << endl;
		cin >> answer;
		cin.ignore (80, '\n'); // get rid of extra characters when inputted
		while (!(answer == 'y' || answer == 'n')) // validation loop when answer is not n or y.
		{
		cout << "Sorry, invalid input." << endl;
		cout << "Would you like to roll a pair of dice? " << endl;
		cin >> answer;
		}
		if (answer == 'n') // end of the program
		{
			cout << "goodbye" << endl; 
			break;
		}
		else if (answer == 'y')// calculation of dice random numbers (d1 & d2)
		{
		int seed = static_cast<int>(time(0)); /* gets a number from the time-of-day clock in the computer. 
		And then converts that to an integer. The reason we would that is so the time-of-day clock. */
		srand(seed); //the seed will be different every time the program is run. 
		  for (int i = 0; i < 1; i++)
			{
			 int d1 = 1 + rand( ) % 6;// numbers from 1 to 6 formula
			 int d2 = 1 + rand( ) % 6;// numbers from 1 to 6 formula
				 cout << d1 << " " << d2 << endl;
			 if (d1 == 6 && d2 == 6)
			  {
				  cout << "You rolled boxcars\n";
			  }	
			 if (d1 == 1 && d2 == 1)
			  {
				  cout << "You rolled snake-eyes\n";
			  }
		     else 
			  {
				cout << "You rolled: " << d1 <<" & " << d2 << endl;
				
			  }
			}
			
		}
	}	while (answer == 'y'); // the "do while loop" is done whenever answer is "y"
	
	system("PAUSE");
	return 0;
	
}
