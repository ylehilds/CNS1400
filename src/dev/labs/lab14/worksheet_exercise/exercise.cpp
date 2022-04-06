	#include <iostream>
	using namespace std;

	int* getPointer(int);

	int main( )
	{
		// Try to get a pointer to an integer variable
 		int * intPtr1 = getPointer(5);
         // get another one
	     int * intPtr2 = getPointer(3);

		// print the integer values

		cout << "\nThe value of the integer is " << *intPtr1;
		cout << "\nThe value of the integer is " << *intPtr2;
		cout << endl;

		system("PAUSE");
		return 0;
	}

	int *getPointer(int n)
	{
		// allocate local storage and return its address
		int x = n;
		return &x;
	}

