// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Lab Four
// Date Written: Jan 31, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.





// Sample Program To Illustrate Debugger
// Calculates the gross pay for a Sales
// person. Sales over $40,000 get a 10% bonus
// Sales over $25,000 get a 5% bonus
// Total pay is the person's salary plus their bonus

#include <iostream>
using namespace std;

// declare constants - no magic numbers
const int BIG = 40000;
const int SMALL = 25000;
const double BIG_BONUS = 0.10;
const double SMALL_BONUS = 0.05;
const double TINY_BONUS = 0.03;
const double salary = 1000;

int main ( )
{
	// declare variables 
	double sales;
	double commission;
	double pay;
	
	
	cout << "\nPlease enter the person's Sales: ";
	cin >> sales;
    
	if (sales > BIG) // formula for sale's people that sold more than $40,000.
	{
		commission = sales * BIG_BONUS ;
		pay = salary + commission;
	}
	else if (sales >= SMALL && sales <= BIG) // formula for sale's people that sold between $25000 and $40,000.
	{
		commission = sales * SMALL_BONUS;
		pay = salary + commission;
	}
	else if (sales < SMALL) // formula for sale's people that sold less than $25,000.
	{
		commission = sales * TINY_BONUS;
		pay = salary + commission;
	}
		
	cout << "\nThis person's gross pay will be " << pay;
	cout << endl;
	system("PAUSE");
	return 0;
}

