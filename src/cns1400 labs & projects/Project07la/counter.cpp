// implementation file. what the functions do.

#include "counter.h"
#include <iostream>

using namespace std;

	void Counter::addOne () // increment function
	 {
		number++;
	 }
	 void Counter::subOne () // decrement function
	 {
		number--;
	 }
	 void Counter::reset () // reset function
	 {
		number=0;
	 }
	 int Counter::display () // display function
	 {
		return number;
	 }
 