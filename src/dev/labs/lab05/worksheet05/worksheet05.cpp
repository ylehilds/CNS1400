#include <iostream>
using namespace std;

const int MIN = 1;

int main( )
{
	for (int j = 10; j >= MIN; --j)
	{
		for (int k = 0; k < j; ++k)
		{
			cout << "*";
		} 
	cout << endl;
	}
	system("PAUSE");
	return 0;
}

