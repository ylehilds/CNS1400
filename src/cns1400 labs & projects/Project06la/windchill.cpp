// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Project Six
// Date Written: Mar 04, 2006  
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

#include <iostream>
# include <fstream>
#include <cmath>
using namespace std;
int main ()
{
	cout << "Author: Lehi Alcantara" << endl;
	cout << "Section: 001" << endl;
	cout << "Project Six" << endl;
	cout << "------------------------------------------------------------------------------"<< endl;
	double wind, temperature, weather, exponent; // local variables
	fstream data; // stream object declaration
	data.open ("c:\\windData.txt"); // file ifstream creation
	cout << "Attempting to open the file" << endl << endl;
	if (data.fail ()) //file open validation
	{
		cout << "File could not be opened";
		exit (1);
	}
	else
	{
		cout << "File opened successfully." << endl;
		while (!data.eof()) // loop to read all data in the file until end of file
		{
		data >> temperature >> wind;
		if (data.bad ())// data validation, to check for aany bad data
		{
			cout << "bad data information";
			exit (1);
		}
		if (!data.eof())// to stop compiler from reading after the end of file
		{
			exponent = pow (wind, 0.16);
			weather = 35.74 + 0.6215 * temperature - 35.75 * exponent + 0.4275 * temperature * exponent; 
			cout << " For a temperature in degrees F = " << temperature << endl;
			cout << " and a wind velocity  in mph = " << wind << endl;
			cout << " The wind chill factor = " << weather << "  degrees F " << endl << endl;
		}
		}
		data.close ( ); // close the file
	}
	system ("PAUSE");
return 0;
}
