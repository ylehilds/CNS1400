#include "integer.h"
#include <iostream>
using namespace std;
int main()
{
	Integer myIntegers[3];
	myIntegers[0] = Integer(3);
	myIntegers[1] = Integer(17);
	myIntegers[2] = Integer(12);
	
for (int j = 0; j < 3; ++j)
	{
	    cout << myIntegers[j].getValue( ) << endl;
	}
return 0;
}
