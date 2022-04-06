//enum example 
#include <iostream> 
#include <string> 

using namespace std; 
int main ()
{ 
enum month {jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec}; 
month planner = dec;//the value stored in dec is 12 
string holiday;//the value is assigned in the switch statement 
int selection;//the user will assign the value of selection 


cout << "Pick a month. Enter 1 for january, 2 for february... \n"; 
cin >> selection; 



switch (selection)//this switch statement will assign a holiday based on the month the 
//user selected 
{ 
case jan: 
holiday = "New Years"; 
break; 

case feb: 
holiday = "Ground Hogs Day"; 
break; 

case mar: 
holiday = "St Patricks Day"; 
break; 

case apr: 
holiday = "Easter"; 
break; 

case may: 
holiday = "Cinco de Mayo"; 
break; 

case jun: 
holiday = "NO SCHOOL!"; 
break; 

case jul: 
holiday = "Independance Day"; 
break; 

case aug: 
holiday = "School Starts"; 
break; 

case sep: 
holiday = "Labor Day"; 
break; 

case oct: 
holiday = "Halloween"; 
break; 

case nov: 
holiday = "Thanksgiving"; 
break; 

case dec: 
holiday = "Christmas"; 
break; 


default: // if a number other than 1 through 12 is entered this is the assignment to holiday 
cout << "Invalid input "; 
holiday = "No Holiday for you!"; 
break; 
} 
cout << "The holiday this month is: " << holiday << "\n";//prints out the holiday assigned in switch statement 
cout << "The most commercialized holiday is in month number : " << planner << endl; 

system("PAUSE"); 
return 0; 
}
