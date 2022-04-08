#ifndef section_header 
#define section_header
using namespace std;
class StringTokenizer
{
private:
	char* Ptr;
	char delimeter;
public:
	// Parameterized Constructor 
    // Purpose: Initializes the Pointer to inputted statement && delimeter initializes to the space.	
    // Parameters: 2, one pointer charactyer && one character (space) 
    // Returns: none 
    // Pre-conditions: none 
    // Post-conditions: none 
	StringTokenizer(char* , char);
	// Function Next() returns a pointer to the next token in the string
    // Purpose: Initializes the Pointer to inputted statement && delimeter initializes to the space.	
    // Parameters: 2, one pointer charactyer && one character (space) 
    // Returns: returns a pointer to the next token in the string 
    // Pre-conditions: none 
    // Post-conditions: none 
	char* next();
	// Function parser() function to display the string.
    // Purpose: displays the string untill NULL
    // Parameters: none
    // Returns: none
    // Pre-conditions: none 
    // Post-conditions: none 
	void parser ();
	
};
#endif
