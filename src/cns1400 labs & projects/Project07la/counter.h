// Header file for the Counter class.
// Purpose:keep track of count, as if a counter device.
// Author: Lehi Alcantara
// Course: CNS 1400
// Section: 001
// Professor: Neil B. Harrison
// Project: Project Seven

// ---------------------------------------------- 


#ifndef tokenGiverH 
#define tokenGiverH 

class Counter
{
private:
	 int number;
public: 
// addOne function 
// Purpose: keeps adding to the counter device
// Parameters: none 
// Returns: void
// Pre-conditions: type 1 
// Post-conditions: none 
	void addOne ();
// subOne function 
// Purpose: keeps subtracting to the counter device
// Parameters: none 
// Returns: void
// Pre-conditions: type 2 
// Post-conditions: none 
	void subOne ();
// reset function 
// Purpose: reset the counter to zero
// Parameters: none 
// Returns: void
// Pre-conditions: type 3 
// Post-conditions: none 
	void reset ();
// display function 
// Purpose: display the current value in counter
// Parameters: none 
// Returns: return the counter value to display 
// Pre-conditions: type 4 
// Post-conditions: none 
	int display ();
};
#endif
