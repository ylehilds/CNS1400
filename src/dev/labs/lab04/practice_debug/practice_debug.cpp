// Sample Program To Illustrate Debugger
// Calculates the gross pay for a Sales
// person. Sales over $40,000 get a 10% bonus
// Sales over $25,000 get a 5% bonus
// Total pay is the person's salary plus their bonus

#include <iostream>
using namespace std;

// declare constants - no magic numbers
const int BIG = 40000;
const int SMALL = 25000;
const int BIG_BONUS = 10;
const int SMALL_BONUS = 5;

int main ( )
{
	double sales;
	double salary;
	double commission;
	int pay;
	
	cout << "\nPlease enter the person's Sales: ";
	cin >> sales;
    
	if (sales > BIG)
	{
		Commission = sales * BIG_BONUS;
	}
	else
	{
		commission = sales * SMALL_BONUS
	}

	pay = salary + commission;
	cout << "\nThis person's gross pay will be " << pay;
	
	cout << endl;
	system("PAUSE");
	return 0;
}

