#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main()
{
	char y,n;
	string answer;
	cout << "Would you like to roll a pair of dice? " << endl;
	cin answer;
	while (answer != "y" && answer != "n")
	{
		cout << "Sorry, invalid input." << endl;
		cin >> answer;
		if (answer == "n")
		{
			cout << "Goodbye" << endl; 
			break;
		}
		
	}
	
	return 0;
}
