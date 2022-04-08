// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Lab Six
// Date Written: Feb 14, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.


#include <iostream>
using namespace std;

// Write down your function prototype for the isLeap function here

// Function Prologue
// Function Prototypes
// Leap year--------------------------------------------------------------------
// Purpose: calculates when a year is leap or not
// Parameter: year- the year user inputted              
// Returns: boolean answer - True or False.
// Pre-condition: Valid integer input to work correctly, no strings nor characters acceptable.
// Post-condition: leap year answer is returned.

bool isLeap(int); // boolean function declaration

int main ( )
{
	int year; // local variables
	char decision; // local variables
	
	do // displays question to input a year and then calculates if leap or no by calling bool isLeap(int) function
	{
		cout << "\nEnter in a year (for example, 1923): ";
		cin >> year;
		if (isLeap(year) )
			cout << '\n' << year << " is a leap year.";
		else
			cout << '\n' << year << " is not a leap year.";
		
		do
		{
			cout << "\nDo another year (y or n): ";
			cin >> decision;
		} while (decision != 'y' && decision != 'n'); // validation to keep running program again or no
	} while (decision == 'y');
	
	system("PAUSE");
	return 0;
}

// write the code for the function isLeap here.

bool isLeap (int year)
{
	if ( year%4 == 0 ) // validates if number is divisible by 4
	{
		if ((year%100 ==0) && (year%400 != 0)) // validates if is divisible by 100 and not by 400
			return false;
		else return true; // returns true if divisible by 100 and by 400
	}
	else return false; // if not divisible by 4, boolean function returns false, year is not leap
		
}
