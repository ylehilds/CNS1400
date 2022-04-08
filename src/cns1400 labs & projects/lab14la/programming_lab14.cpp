// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Lab Fourteen
// Date Written: April 17, 2007
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

# include <iostream>
using namespace std;
int main()
{
	int j, size, num;
	do
	{
	cout <<"Please input a sequence of integer and I will reverse the order." << endl;
	cout <<"How many integers would you like to input?" << endl;
	cin >> size;
	if (size <= 0) // condition of sequence integer numbers
	{
		cout << "Sequence must be positive and non-zero!" << endl;
		cout <<"Please try again!" << endl;
	} 
	} while ( size <= 0);
	int *someInts = new int[size]; 
	for (int i = 0; i < size ; i++) // loop to implement the array located on the heap
	{
		cout <<"Please input an integer: " << endl;
		cin >> num;
		someInts [i] = num;
	}
	int length = size;
	j = length-1; // minus one so that we dont't display an additional member of the array, that we don't want.
	for (int i= 0; i <= length; i++) // loop to reverse the order of the inputted integers
	{
		if (i >= j)
		{
			break;
		}
		int temp = someInts[i];
		someInts[i]= someInts[j];
		someInts[j] = temp;
		j--;
	}
	cout <<"The reverse order of the inputtded integers is : "<< "\n" << endl;
	for (int i = 0; i < size; i++) // loop to display the reversed sequence of integers
	{
		cout << someInts[i] << endl;
	}
	delete [] someInts; // deleting the array located in dynamically allocated storage.
	cout << endl;
	system("PAUSE");
	return 0;
	
}

