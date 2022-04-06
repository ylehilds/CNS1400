#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
 int main ()
 {
	 string statement;
	ifstream Lehi ("c:\\great.txt");
	if (Lehi.fail())
	{
		cout << "fail to open file";
	}
	while (!Lehi.eof())
	{
		Lehi >> statement;
		if (!Lehi.eof())
	{
		cout << "fail to open file";
	}
		cout << statement << endl;
	}
	return 0;
 }
 /*string statement = " Lehi is the coolest guy ever, allright!";
	ofstream File ("Lehi's_test.txt");
	File << statement;
	File.close();
 */