#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	enum dayofweek {sunday,monday,tuesday,wednesday,thursday,friday,saturday};
	string day;
	dayofweek today;
	cout << "will I go to school today?\n";
	cout << "Let's determine by answering a couple of questions: \n";
	cout << "What is today's day? \n";
	cin >> day;
	
	if (day == "sunday") 
		today = sunday;
	else if (day == "saturday")
		today = saturday;
	else if (day == "monday")
		today = monday;
	else if (day == "tuesday")
		today =tuesday;
	else if (day == "wednesday")
		today = wednesday;
	else if (day == "thursday")
		today = thursday;
	else if (day == "friday")
		today = friday;
	else 
	{
		cout <<"invalid input\n";
		return -1;
	}
	if ((today == sunday) || (today ==saturday))
	{
		cout << "don't go to school today, because its a weekend, enjoy life!\n";
	}
	else 
	{
	cout << "What is today's temperature? \n";
	int temp;
	cin >> temp;
		if (temp<0)
	
		cout << "Stay home because it is too cold!\n";
	else
		cout << " go to school!\n"; 
	}
	return 0;
}
