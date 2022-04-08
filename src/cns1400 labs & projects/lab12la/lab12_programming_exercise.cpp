// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Lab Twelve
// Date Written: April 04, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	cout << "Please insert a sentence (less than 100 characters in length)" << endl;
	cout << "and I will correct it if multiple spaces are inputted: " << endl;
	char userInput [150];
	cin.getline (userInput, 149);
	int length = strlen (userInput);
	int dest = 0;
		
	for (int i =0; i <=length; i++) // loop to move next sentence to fill blank spaces
	{
		if (userInput[i]!=' ')
			userInput[dest++] = userInput[i];
		else if (userInput[i+1]!=' ')
			userInput[dest++] = userInput[i];
		/*while (userInput[i] != c && userInput[dest++] == c)
		{
			userInput[dest++] = userInput [i];
		}
		//else if (userInput[i] ==c)
		//{
		//	userInput[dest] = userInput [i];
		//}*/
		
	}
	bool got_spaces = true; 
	for (int i=0; i < length; i++) // this are some statements to upper case the first letter of the sentence
    //and then to lower case any letter after the upper case letter.
	{
		if (isspace (userInput[i]))
		{
			got_spaces = true;
		}
		else 
		{
			if (got_spaces)
			{
				userInput[i] = toupper(userInput[i]);
				got_spaces = false;
			}
			else
			{
				userInput[i] = tolower(userInput[i]);
				
			}
		}
	}
			cout << endl;
			cout << "What you have written should be: " << userInput << endl;
	
	system("PAUSE");
	return 0;
}
