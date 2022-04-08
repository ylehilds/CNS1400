// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Lab Seven
// Date Written: Feb 21, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.


// This program will make change



#include <iostream>
using namespace std;

// The function prototype
int computeChange(int& changeValue, int coinValue);

// some constants
const int COINS[ ] = {50, 25, 10, 5, 1};
const string COIN_NAMES[ ] = {"Halfs", "Quarters", "Dimes", "Nickels", "Pennies"};
const int NUM_COINS = 5;


int main ( ) 
{
	int money;  // the value we want to count change for
	
	cout << "\nI will make change for you.";
	cout << "\nEnter in an amount between 1 and 99: ";
	cin >> money;
	
	cout << "\nFor " << money << " you get:";
	for (int i = 0; i < NUM_COINS; i++)
	{
		cout << "\n" << computeChange(money, COINS[i]) << " " << COIN_NAMES[i];
	}
	cout << endl;
	
	system("PAUSE");
	return 0;
}

/* Function Prologue:
 Purpose: this function program calculates the change, as for how many halfs,quarters, dimes, nickels, pennies in an amount inputted by the user
 inputs: takes money amount input by user.
 Parameters: money - amount value inputted, COINS[i] - type of coins
 Returns: the total change according to the money amount inputted. showing the different coins you may get.
 Pre-condition: only positive integer numbers ( If different than positive integers, the program's results will not work as it should) 
 Post-condition: total change for the amount inputted
 */
int computeChange(int& changeValue, int coinValue)
{
	assert(changeValue>=0);
	// write the code here for the computeChange function
	int numcoins = changeValue/coinValue;
	changeValue = changeValue%coinValue;
	return numcoins;
}
