#include <iostream>
using namespace std;

int main ( )
{
	const int SIZE = 5;

// declare an array of integer values
int myScores[5]= {5};

// now print out the array
for (int i = 0; i < SIZE; i++)
{
	cout << "\nmyScores[" << i << "] = " << myScores[i];
}

cout << endl;
system("PAUSE");
return 0;
}
