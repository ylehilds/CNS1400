// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Extra credit
// Date Written: Mar 08, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.


// This program will make diamond shapes

#include <iostream>
using namespace std;
int main()
{
	int size, i, j; // local variables
	
	do 
	{
		cout << "Enter a size" << endl;
		cin >> size;
		if (size ==0) // exit the program
		{
			cout << "Good Bye!" << endl;
			exit (1);
		}
		if (size < 3 || size > 79 || size%2 == 0) // conditions
		{
			cout << "Size must be >= 3, <= 79, and odd" << endl;
		}
		else
		{
			int numStars = 1; // local variables, number of stars to be printed out.
			int leftStars = numStars/2; // local variables
			int rightStars = numStars/2; // local variables			
			for (int i=0; (i < size/2); i++) // local variables
			{
				for (int j=0;  j < size ; j++) // loop to make the first half of the diamond
				{
					if (j == size/2 ||  (j >= size/2 - leftStars && j <= size/2 + rightStars)) // conditions to print out stars for the diamond shape
					{
						cout << "*";
					}
					else // conditions to print out the blanked spaces for the diamond shape
					{
						cout << " ";
					}
				}
				numStars += 2; // local variables, increasing number of stars to be printed out.
				leftStars = numStars/2; // local variables to take care of the left part of the diamond
			    rightStars = numStars/2; // local variables to take care of the right part of the diamond
				cout << "\n";
			}
			 numStars = size - 2; // local variable reseted, decreasing number of stars to be printed out.
			 leftStars = numStars/2; // local variables to take care of the left part of the diamond
			 rightStars = numStars/2; // local variables to take care of the right part of the diamond
			for (int i = 0; i< size; i++) // loop to print out the middle row
			{
				cout << "*";
			}
			cout << endl;
			for (int i=0; (i < size/2); i++)
			{
				for (int j=0;  j < size ; j++)
				{
					if (j == size/2 ||  (j >= size/2 - leftStars && j <= size/2 + rightStars)) // conditions to print out stars for the diamond shape
					{
						cout << "*";
					}
					else // conditions to print out the blanked spaces for the diamond shape
					{
						cout << " ";
					}
				}
				numStars -= 2;// local variable decreasing number of stars
				leftStars = numStars/2;// local variables
			    rightStars = numStars/2;// local variables
				cout << "\n";
			}
			
		}	
		cout << endl;
	} while (size !=0); // loop for execution of program, until size is zero.

	system ("PAUSE");
	return 0;
}

