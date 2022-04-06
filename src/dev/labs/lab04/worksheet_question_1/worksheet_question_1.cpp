/*const int FREEZING = 32;
	const string SAT = "Saturday" ;
	const string SUN = "Sunday";

	int currTemp ;
	string today ;
if ( ! (today == SUN || today == SAT) ) */
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int currTemp ;
	const int FREEZING = 32;
	const string SAT = "Saturday" ;
	const string SUN = "Sunday";
	string today ;
	cout << "Will I got to work today? Lets's find out by answering a few questions: \n";
	cout << "What is today's day?\n";
	cin >> today;
	cout << "What is the temperature outside in Fahrenheit? \n";
	cin >> currTemp;
	if  ( today != SUN && today != SAT && currTemp > FREEZING)
		cout << "Go to work\n";
		
	else if ( today != SUN && today != SAT && currTemp < FREEZING)
			cout << "go to work and dress warmly\n";
			
	else if ( today == SUN || today == SAT)
			cout << "yeah! No work today!\n";
		

	return 0;
}
