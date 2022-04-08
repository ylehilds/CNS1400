// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Project Nine
// Date Written: Mar 31, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

#include "section.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string course = "001";
	string instructor = "Neil Harrison";
	Section Student(course, instructor); // creation of a object Section
	cout << "Author: Lehi Alcantara" << endl;
	Student.printStrings();
	cout << "Project Nine" << endl;
	cout << "------------------------------------------------------------------------------"<< endl;
	string file;
	do 
	{
		cout << "Enter in a file path for the students scores: " << endl;
		cin >> file;
		if (file != "c:\\grades.txt")
		{
			cout << "invalid file! " << endl;
		}
	} while (file != "c:\\grades.txt");
	Student.readData(file);
	cout << "The Sorted Scores: " << endl;
	Student.sort();
	Student.print();
	cout << "The highest score is : " << Student.highestScore() << endl;
	cout << "The lowest score is : " << Student.lowestscore() << endl;
	cout << "The average score is : " << Student.averageScore() << endl;
	system("PAUSE");
	return 0;
}
