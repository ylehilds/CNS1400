#include <iostream>
using namespace std;
int main()
{
	cout << "please enter a number" << endl;
	int numOne;
	cin >> numOne;
	cout << "please enter a second number" << endl;
	int numTwo;
	cin >> numTwo;
	if (numOne > numTwo) 
		{
			cout << " the biggest number is: " << numOne << endl;
		}
	else if (numOne < numTwo)
		{
			cout << " the biggest number is: " << numTwo << endl;
		}
	if (numOne == numTwo)
	{
		cout << numOne << " & " << numTwo << " are equal" << endl;
	}

return 0;

}
