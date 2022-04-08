// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Project Three
// Date Written: Feb 10, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
const int SECOND_SPACING = 6;// constants declarations
const int FIRST_SPACING = 2;// constants declarations
const int INCREMENT = 1;// constants declarations
int main()
{
	cout << "Author: Lehi Alcantara" << endl;
	cout << "Section: 001" << endl;
	cout << "Project three" << endl << endl;
	int months = 1;// variables declaration
	int adults = 1;// variables declaration
	int babies = 0;// variables declaration
	int lastbabies = 0;// variables declaration
	int lastadults = 1;// variables declaration
	int monthexceed =0;// variables declaration
	
	cout <<"Table of rabbits population, in pairs, for 12 months.";
	cout << endl;
	cout << setw(3) << "Months\t" << "Adults\t" << "Babies\t" << "Total" << endl;
	for (months = 1; months <= 15; months+= INCREMENT) // for loop to get rabbits calculation
	{	
		cout << setiosflags(ios::left) << setw (FIRST_SPACING) << months<< "\t" << setw (SECOND_SPACING) << adults << "\t" << setw (SECOND_SPACING) << babies <<"\t" << setw (SECOND_SPACING)<< babies+adults;
		if (babies + adults >= 500 && monthexceed ==0) // conditional statement so that the loop will recognize the month that the cages will be run out.
		{
			monthexceed = months;
		}
			babies = lastadults;
			adults = lastbabies + lastadults;
			lastbabies = babies;
			lastadults = adults;
		cout << endl;
	}	
	cout << endl << "It will run out of cages on month: "<< monthexceed << endl;
	system ("PAUSE");
	return 0;
}
