#include <iostream>
#include <string>
using namespace std;
const double BIG_RATE = 1.05;
const double SMALL_RATE = 1.03;
int main()
{
string account_type;
int checks_used;
double end_balance;
char s;
char p;
cout << "What type of account is this:" << endl;
cout << "Type 's' for a standard account" << endl;
cout << "Type 'p' for a standard account" << endl;
cin >> account_type;
while ( account_type != 's' || account_type != 'p')
{

	cout << "sorry, invalid data" << endl;
	cout << "What type of account is this:" << endl;
	cout << "Type 's' for a standard account" << endl;
	cout << "Type 'p' for a standard account" << endl;
	cin >> account_type;
	
}
	return 0;
}
