// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// Project: Lab one
// Date Written: Jan 10, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

#include <iostream>
using namespace std;

int main( )
{
	// My student information is stored in these string objects
	string name = "Lehi Alcantara";
	string course = "CNS 1400";
	string section = "001";
	string instructor = " Professor Neil B Harrison";
	string project = "Lab One";
	string date = "January 2007";
	
	// insert the strings into the stream object 'cout'
	cout << "\nName: " << name;
	cout << "\nCourse: " << course;
	cout << "\nSection: " << section;
	cout << "\nInstructor: " << instructor;
	cout << "\nProject: " << project;
	cout << "\nDate: " << date << endl;
	
	// pause and terminate program
	system ("Pause");
	return 0;
}
