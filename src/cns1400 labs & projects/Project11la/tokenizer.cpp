#include "tokenizer.h"
#include <iostream>
using namespace std;

StringTokenizer:: StringTokenizer(char* phrase, char d) // parameterized constructor
{
	Ptr = phrase;
	delimeter = d;	
}

char* StringTokenizer:: next () // function to swap spaces to NULL
{
	int counter = 0;
	char* Ptr2;
	Ptr2 = Ptr;
	while (*Ptr2 != delimeter)
	{
		if (*Ptr2 == NULL)
		{
			break;
		}
		counter++;
		Ptr2++;
	}	
	if (*Ptr2 == delimeter)
		{
			*Ptr2 = '\0';
			Ptr2 -= counter;
			Ptr = Ptr + counter +1;
		}
	else if 	(*Ptr2 == NULL)
	{
		Ptr2 -= counter;
		Ptr = Ptr + counter;
	}
	return Ptr2;
}

void StringTokenizer:: parser ()     // create a StringTokenizer object
{
char *token;                // declare a char pointer to hold the address returned by next( )
token = next();      // get address of the first token
while (*token != NULL)       // keep getting tokens until a NULL is returned
{
   cout << token << endl;
   token = next();
}
}
