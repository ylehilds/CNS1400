// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// Professor: Neil B. Harrison
// Project: Lab two
// Date Written: Jan 16, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.


#include <iostream>
#include <string>
#include <iomanip>
using namespace std; 

int main( )
{
	// declarations
	string name;
	int age;
	float value;
	cout << " What is your full name?\n"; 
	// records the input of the user
	getline(cin, name);
	cout << " What is your age?\n";
	// records the input of the user
	cin >> age; 
	cout << " How much money do you have?\n";
	// records the input of the user
	cin >> value;
		cout << " The person's name is: " << name << "\n"; 
		cout << " The person's age is: " << age << "\n"; 
		cout << " The amount of money the person has is: $" << fixed << showpoint << setprecision(2) << value << "\n"; 
	system("PAUSE");
	return 0;
} 
