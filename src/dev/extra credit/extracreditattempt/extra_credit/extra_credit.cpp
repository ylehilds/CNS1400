# include <iostream>
using namespace std;
int main ()
{
	int input;
	do
	{
	cout <<"Please insert a diamond size number: ";
	cin >> input;
	
	if (input == 0) 
	{
		cout << "goodbye" << endl;
		break;
	}
	else if	(input < 3 || input > 79 || (input%2 == 0))
	{
		cout << "Invalid input" << endl;
	}
	else 
	{
		for (int i=1; i <= input; i++)
		{
			for (int j=1; j <=i ; (j++))
			{
				cout << " *"; 
			}
			cout << endl;
		}
	}
	}
	while (!(input==0));
	system ("PAUSE");
	return 0;
}

