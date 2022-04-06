#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	int text_read, sum =0;
	string names;
	char filename[80];
	cout << "Enter the file name" << endl;
	cin >> filename;
	ifstream mydata;
	mydata.open (filename);
	if (mydata.fail())
	{
		cout << "file was not open successfully" << endl;
		exit (1);
	} 
	if (mydata.good())
	{
		cout << "File was open just fine" << endl; 
	}
	while (!mydata.eof())
		{
			
			mydata >> text_read;
			if (mydata.bad())
			{
				cout << "bad data" << endl;
				exit (1);
			}
			sum += text_read; 
			if (mydata.eof())
			{
				cout << "the sum of all the integers in the file is: " << sum << endl;
				
			}
			
		}
	
	system("PAUSE");
	return 0;
}
