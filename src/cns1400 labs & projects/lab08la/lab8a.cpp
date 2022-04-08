// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Lab Eight
// Date Written: Feb 28, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	double low = 100, max = 0, grades, sum = 0; // local variables
	double number = 0;// local variables
	ifstream average ("grades.txt"); // file ifstream creation
	if (average.fail()) // data validation
    { 
	   cout << "did not open file";
	   exit (1);
	}
	else 
	{
		while (!average.eof()) // loop to read all data in the file
		{
			average >> grades;
			if (average.bad())
			{
				cout << "invalid input";
				exit (1);
			}
			if (!average.eof())
			{
			if (grades > max) // highest number
			{
				max = grades;
			}
			if (grades < low) // lowest number
			{
				low = grades;
			}
			sum = sum + grades; // sum of all numbers
			number++;
			
			}
		}
		cout << "lowest number is " << low << endl <<"highest number is " <<  max << endl << "average is " << fixed << setprecision (2) << sum/number << endl;
	}
		
	system("PAUSE");
	return 0;
}
