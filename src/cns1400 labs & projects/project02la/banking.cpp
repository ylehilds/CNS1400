// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Project Two
// Date Written: Feb 02, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

// program will calculate the ending balance for a bank calculating the right interest 
// for each type of account, and charging checks fee depending on the account type
// and other conditions. 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 
const double BIG_RATE = 1.05; // constants declarations
const double SMALL_RATE = 1.03; // constants declarations
const int SET_RATE = 5000; // constants declarations

int main()
{
	double balance;
	string account_type;
	int checks_used;
	double end_balance;
	char s;
	char p;
	cout << "What type of an account is this: " << endl;
	cout << "Type \"s\" for a standard account or " << endl;
	cout << "Type \"p\" for a premium account: " << endl;
	cin >> account_type;
	while (account_type != "s" && account_type != "p") // loop that will accept only "s" or "p" for an input
	{
		cout << "Invalid input. Try again" << endl;
		cout << "What type of an account is this: " << endl;
		cin >> account_type;
	}
	if (account_type == "s") // input & formula to calculate exact customer's ending balance
	{
		cout << "Enter in the ending balance for this month: " << endl;
		cin >> end_balance;
		cout << "Enter in the number of checks written this month: " << endl;
		cin >> checks_used;
		cout << "The new ending balance is : $" << fixed << setprecision(2) << end_balance * SMALL_RATE - checks_used << endl;
		
	}

	else if (account_type == "p") // input & formula to calculate exact customer's ending balance
	{
		cout << "Enter in the ending balance for this month: " << endl;
		cin >> end_balance;
			if (end_balance >= SET_RATE) // "if" statement to calculate the interest rate for customer's ending balance
			{
			cout << "The new ending balance is : $" << fixed << setprecision(2)  << end_balance * BIG_RATE << endl;
			}
			else 
			{
				cout << "Enter in the number of checks written this month: " << endl;
				cin >> checks_used;
				cout << "The new ending balance is : $" << fixed << setprecision(2) << end_balance * SMALL_RATE - checks_used << endl;
			}
	}
	system("PAUSE");
	return 0;
}
