#include <iostream>
using namespace std;
int main()
{
	cout << "Please enter an integer number";
	int userInt;
	cin >> userInt;
	int firstNum = userInt/10;
	int secondNum = userInt%10;
	int sum;
	sum = firstNum + secondNum;
	if (sum%9 == 0)
	{
		cout << userInt << "The number is divisible by 9" << endl;
	}
	else
		cout << userInt << endl << "The number is not divisible by 9" << endl;
	return 0;
}
