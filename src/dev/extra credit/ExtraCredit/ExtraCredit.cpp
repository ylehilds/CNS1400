#include <iostream>
using namespace std;
int main()
{
	int size, i, j, n, k, sum;
	
	do 
	{
		
		
		cout << "Enter a size" << endl;
		cin >> size;
		if (size ==0)
		{
			cout << "Good Bye!" << endl;
			exit (1);
		}
		if (size < 3 || size > 79 || size%2 == 0)
		{
			cout << "Size must be >= 3, <= 79, and odd" << endl;
		}
		else
		{
			for (int i=1; (i <= size/2); i++)
			{
				for (int j=0;  j < size ; j++)
				{
					cout << "*"; 
				}
			cout << "\n";
			}
			for (int i=0; i < size; i++)
			{
				cout << "*";
			}	
			cout << endl;
			for (int i=1; i <= size/2; i++)
			{
				for (int j=0;  j < size ; (j++))
				{
					cout << "*"; 
				}
			cout << "\n";
			}
		}	
		cout << endl;
	} while (size !=0);

	
	return 0;
}

