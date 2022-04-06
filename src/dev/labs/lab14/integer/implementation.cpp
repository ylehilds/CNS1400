# include "integer.h"
using namespace std;
 Integer:: Integer()
{
theValue = 0;
}
 Integer:: Integer(int n)
{
	theValue = n;
}
int Integer:: getValue( )
{
	return theValue;
}

