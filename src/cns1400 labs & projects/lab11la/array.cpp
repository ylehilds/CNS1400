// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Lab Eleven
// Date Written: Mar 28, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main ( )
{
	// array of grades to be assigned
	// 91 - 100 is an A
	// 81 -  90 is a B
	// 71 -  80 is a C
	// 61 -  70 is a D
	// Below 61 is an E
	char grades[] = {'A', 'B', 'C', 'D', 'E'};

	// declare a place to hold scores read from a file 
	vector <int> scores; // vector
	scores.push_back(5); // adding elements to the vector
	
	// declare the stream object and open the file
	ifstream theDataFile("c:\\scores.txt");
	if (!theDataFile)
	{
		cout << "\nError opening file.";
		exit(1);
	}
	
	// read the scores into the array
	int index = 0;
	int aScore;
	while(!theDataFile.eof( ))
	{
		theDataFile >> aScore;
		if(!theDataFile.good( )) // the read failed ...
		{
			if (!theDataFile.eof( )) // and it was not an eof condition
			{
				cout << "\nError reading file.";
				exit(1);
			}
			break; // it was an eof, so break out of the loop
		}
		scores[index++] = aScore;
	}
	
	// print out the values just read and give each a grade
	for (int i = 0; i < index; i++)
	{
		cout << scores[i] ;
		if (scores[i] < 61)
			cout << "-" <<grades[4];  // grade is an 'E'
		else if (scores[i] < 71)
			cout << "-" << grades[3];  // grade is a 'D'
		else if (scores[i] < 81)
			cout << "-" << grades[2];  // grade is a 'C'
		else if (scores[i] < 91)
			cout << "-" << grades[1];  // grade is a 'B'
		else
			cout << "-" << grades[0];  // grade is an 'A'
		cout << endl;
	}

	system("PAUSE");
	return 0;
}

