#include <iostream>
using namespace std;
void function( const int[], int);
int main ()
{
	int Lehi_Array [] = {1,2,3,4,5,6,7,8,9,10};
	//int Size = 10;
	/*for (int i = 0; i < Size; i++)
	{
		cout << Lehi_Array[i] << endl;
	}*/
	function(Lehi_Array, 10);
	return 0;
}
void function(const int Lehi_Array[], int )
{
	int Size = 10;
	for (int i = 0; i < Size; i++)
	{
		cout << Lehi_Array[i] << endl;
	}
}

