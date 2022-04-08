// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Project Ten
// Date Written: April 07, 2007
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.


#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main ()
{
	cout << "Author: Lehi Alcantara" << endl;
	cout << "Section: 001" << endl;
	cout << "Project Ten" << endl;
	cout << "------------------------------------------------------------------------------"<< endl;
	bool check = true;
	char readArray[50][256];
	char FinalArray[50][256];
	ifstream file;
	string fileSong;
	for (int i =0; i < 50; i++) // loop to move next sentence to fill blank spaces
	{
		for (int j =0; j < 256;  j++)
		{
				readArray[i][j] = '\0';
		}
	}
	for (int i =0; i < 50; i++) // loop to move next sentence to fill blank spaces
	{
		for (int j =0; j < 256;  j++)
		{
			FinalArray[i][j] = '\0';
		}
	}
	
	do
	{
		cout <<"Please enter in the path name to song file: ";
		cin >> fileSong;
		file.open (fileSong.c_str());
		if (file.fail())
		{
			file.clear();
			cout <<"fail to open the file" << endl;
		}
		check = file.is_open();
	} while ( !check );
	cout << "file.fail(): " << file.fail() << endl;
	int r = 0;	
	cout << "There are 6 songs in the file: " << endl;
	while (file.getline(readArray[r],255))
	{
		cout << readArray[r] << endl;
		r++;
		if (file.eof())
		{
			break;
		}
	}
	file.close();
	cout << endl;
	
	
	for (int i =0; i < 50; i++) // create figure out the spaces a copy the words
	{
		
		int j = 0;
		int	jFinal = 0;	
		while ( isspace(readArray [i][j]))
		{
			j++;
		}
		bool spaceAlreadyAdded = false;
		while ( readArray[i][j] != '\0')
		{
			if ( isspace(readArray[i][j]))
			{
				if(!spaceAlreadyAdded)
				{
					FinalArray [i][jFinal] = readArray [i][j];
					jFinal++;
					spaceAlreadyAdded = true;
				}
				else 
				{
					// don't add this character
				}
			}
			else 
			{	
				spaceAlreadyAdded = false;
				FinalArray [i][jFinal] = readArray [i][j];
				jFinal++;
			}	
			j++;
		}
	}
	cout << "without the multiple spaces: " << endl;
	for (int i = 0; i < 50; i++) // loop get rid of multiple spaces
	{
		for (int j =0; j < 256;  j++)
		{
			if ( FinalArray[i][j] != '\0')
			cout << FinalArray [i][j];
		}
		if (FinalArray[i][0] != '\0')
			cout << endl;
	}	
	cout << endl;
cout << "First letter upper case: " << endl;
	for (int i = 0; i < 50; i++)// tp upper case the first letter
	{
		int j = 0;
		FinalArray [i][j] = toupper(FinalArray [i][j]);
	}
	for (int i = 0; i < 50; i++) // loop to move next sentence to fill blank spaces
	{
		for (int j =0; j < 256;  j++)
		{
			if ( FinalArray[i][j] != '\0')
				cout << FinalArray [i][j];
		}
		if (FinalArray[i][0] != '\0')
			cout << endl;
	}


	for (int a = 0; a < 6; a++) // to find the order 
	{
		char tempArray[256];		
		int lowest = 0;
		for ( int i = a; i < 6; i++)
		{
			int currentLowestPos = i;
			for (int j = a; j < 6; j++)
			{
				if (strcmp(FinalArray[currentLowestPos],FinalArray[j]) > 0)
				{
					currentLowestPos = j;
				}
			}
			if (strcmp(FinalArray[lowest],FinalArray[currentLowestPos]) > 0)
			{
				lowest = currentLowestPos;
			}
		}
		// tempArray = FinalArray[a];
		strcpy(tempArray, FinalArray[a]);
		// FinalArray[a] = FinalArray[lowest];
		strcpy(FinalArray[a], FinalArray[lowest]);
		// FinalArray[lowest] = tempArray;
		strcpy(FinalArray[lowest], tempArray);
	}
	cout << endl;
	cout << "The songs in alphabetical order: " << endl;
	for (int i = 1; i < 50; i++)  // to put into order alphabetically 
	{
		for (int j =0; j < 256;  j++)
		{
			if ( FinalArray[i][j] != '\0')
				cout << FinalArray [i][j];
		}
		if (FinalArray[i][0] != '\0')
			cout << endl;
	}
	
	system("PAUSE");
	return 0;
}
