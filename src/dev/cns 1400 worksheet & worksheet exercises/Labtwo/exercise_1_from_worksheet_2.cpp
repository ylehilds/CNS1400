#include <iostream>
#include <iomanip>
	using namespace std;
	
	int main ( )
	{
		double number;
		cout << "Enter the price as a decimal number (e.g. 5.43):";
		cin >> number;
		cout << "\nThe price you entered is " << fixed <<  setprecision(2) <<number << endl;
		system("PAUSE");	
		return 0;
	}  
