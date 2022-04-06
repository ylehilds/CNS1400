// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// Section: 001
// Professor: Neil B. Harrison
// Project: Project One
// Date Written: Jan 24, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
	cout << "Lehi Alcantara\n";
	cout << "CNS 1400 Section 001\n";
	cout << "Project One: Goodguys Delivery Services\n";
	cout << "-----------------------------------------------------------------------------\n";
	cout << "Enter in the start time for this trip in 24 hour clock time in the form hhmm:\n";
	int Time1; // local variable
	cin >> Time1;
	cout << "Enter in the end time for this trip in 24 hour clock time in the form hhmm:\n";
	int Time2; // local variable 
	cin >> Time2; 
	int onehundred = 100;
	int difference = ((Time2/onehundred)*60 + Time2%onehundred)-((Time1/onehundred)*60 + Time1%onehundred); // formula to get hours in minutes and also add the minutes
	difference = (difference * 3)/4; // formulat to get 25% off the old time
	int hour = difference/60; // formula to convert minutes to hours
	int min = difference%60; // formula to get the integer minutes
	int answer = hour *100 + min; // get the amount of hours an multiply by 100 so that we can add minutes to show in military hour format
	cout.fill('0'); // state this statement so that the answer will fill out zeros when necessary
	cout << "The new time is: " << setw(4) << Time1 + answer  << endl; // 
	
system ("PAUSE");	
return 0;

}
