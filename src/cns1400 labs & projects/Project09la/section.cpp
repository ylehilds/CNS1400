#include "section.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
void Section::arrayInitializer () // array initializer to zero
{
	const int SIZE = 30;
	for (int i=0; i < SIZE; i++)
	{
		array_of_scores[i]= 0;
	}
}
Section::Section (string theCourse, string theInstructor)// constructor that inializes the data members
{
	course = theCourse;
	instructor = theInstructor;
	studentNumber = 0;
	arrayInitializer ();
}
void Section::readData(string fileName) // read file method
{
	ifstream theDataFile(fileName.c_str());
	if (!theDataFile)
	{
		cout << "\nError opening file.";
		exit(1);
	}
	// read the scores into the array
	studentNumber = 0;
	int aScore;
	while(!theDataFile.eof())
	{
		theDataFile >> aScore;
		if (theDataFile.good())
		{
			if (!theDataFile.eof()) // and it was not an eof condition
			{
				array_of_scores[studentNumber++] = aScore;
			}
		}
	}
}
int Section::numberScores() // function that returns number of scores stored in the array 

{
	return studentNumber;
}
int Section::highestScore() // function that returns the highest score on the test
{
		
	int highest =0;
	if ( studentNumber > 0 )
	{
		highest = array_of_scores[0];
		int i;
		for (i = 1; i < studentNumber; i++)
		{
			if ( array_of_scores[i] > highest)
			{
				highest = array_of_scores[i];
			}
		}	return highest;

	}
	return 0;
}
double Section::averageScore()// function that calculates the average score on the test
{
	double sum = 0;
	for (int i = 0; i < studentNumber ; i++)
	{		
		sum = sum + array_of_scores[i];
	}	
	return sum/studentNumber;
}
int Section::lowestscore() // function that returns the lowest score on the test

{
	int lowest =100;
	if ( studentNumber > 0 )
	{
		lowest = array_of_scores[0];
		int i;
		for (i = 1; i < studentNumber; i++)
		{
			if ( array_of_scores[i] < lowest)
			{
				lowest = array_of_scores[i];
			}
		}	
		return lowest;
	}
	return 0;
}

int Section::scorePosition(int n) // function that takes in integer value as a parameter, and returns the score at that position in the array of scores. 

{
	return array_of_scores[n];
}
void Section::sort() // sort function
{
	int selected, temporary;
	for ( int left_array = 0; left_array < numberScores(); left_array++ )
	{
		selected = left_array;
		for ( int j = left_array + 1; j < numberScores(); j++ )
		{
			if (array_of_scores[j] < array_of_scores[selected])
			{
				selected = j;
				temporary = array_of_scores[selected];
				array_of_scores[selected] = array_of_scores[left_array];
				array_of_scores[left_array] = temporary;
			}
		}
	}
}
void Section::print() // print method
{
for (int i = 0; i < numberScores(); i++)
	{
		cout << "\t" << "\t"<< array_of_scores[i]; cout << endl;
	}
}
string Section::myCourse()
{
	return course;
}
string Section::myInstructor()
{
	return instructor;
}
void Section::printStrings()
{
	cout << "Section: " << myCourse() << endl;
	cout << "Professor: " << myInstructor() << endl;
}
