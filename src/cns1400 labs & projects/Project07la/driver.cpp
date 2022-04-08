// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Project Seven
// Date Written: Mar 10, 2006  
// Purpose: to keep track of a counter program as if were a counter device.
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

#include "counter.h"
#include <iostream>


using namespace std;

int main ()
{
	cout << "Author: Lehi Alcantara" << endl;
	cout << "Section: 001" << endl;
	cout << "Project Six" << endl;
	cout << "--------------------------------------------------------------------------------"<< endl;
	int input;
	Counter numberCounter; // object creation
	numberCounter.reset(); // initialization to zero
	
		cout << "Counter Program:" << endl;
		cout << "Select from the following options, Type:" << endl;
		cout << "1 to increment the counter" << endl;
		cout << "2 to decrement the counter" << endl;
		cout << "3 to display the contents of the counter" << endl;
		cout << "4 to reset the counter to zero" << endl;
		cout << "5 to exit this program" << endl;
		do
		{
		do
		{
		cin >> input;
		if (input < 1 || input > 5) // validation
		{
			cout << "Invalid input, Please try again" << endl;
		}
		} while (input < 1 || input > 5); // validation
		
		if (input == 1)
		{
			numberCounter.addOne(); // addition function
		}
		if (input == 2)
		{
			numberCounter.subOne(); // subtraction function
		}
		if (input == 3)
		{
			cout << "counter is: " << numberCounter.display() << endl; // display function
		}
		if (input == 4)
		{
			numberCounter.reset(); // reset function
		}
		}while (input != 5); // loop untill user input number 5
	system("PAUSE");
	return 0;
	
}
