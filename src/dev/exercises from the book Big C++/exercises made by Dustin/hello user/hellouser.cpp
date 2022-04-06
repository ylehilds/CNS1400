#include <iostream>
#include <string>
using namespace std;

int main() 
{
	cout << "Hello, Lehi!\n";
	cout << "What would you like me to do?\n";
	
	
	
	string userinput;
	getline(cin, userinput);
	
	
	cout << "this is what you typed: " <<userinput << "\n";
	
	
	
	/* another way of doing.
	cin >> userinput;
	cout << "this is what you typed: " <<userinput << "\n";
	*/




	return 0;
}