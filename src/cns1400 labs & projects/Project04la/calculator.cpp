// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Project Four
// Date Written: Feb 17, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.


# include <iostream>
using namespace std;
 double add ( double, double ); // Function Prototypes
 double subtract ( double, double ); //Function Prototypes
 double multiply ( double, double ); //Function Prototypes
 double divide ( double, double ); //Function Prototypes
 /* Function Prologue:
 Purpose: calculates the inputted values like a calculator
 Parameters: input1 - first value, input3 - second value
 Returns: the answer for the equation
 Pre-condition: numbers and valid math operator like +,-,/,*
 Post-condition: answer of the equation is returned
 */
int main ()
{
 cout << "Author: Lehi Alcantara" << endl;
 cout << "Section: 001" << endl;
 cout << "Project Four" << endl << endl;
 double answer; // local variables
 char addition = '+'; // local variables
 char subtraction = '-'; // local variables
 char division = '/'; // local variables
 char multiplication = '*'; // local variables
 char yesno,input2; // local variables
 
 do // loop the whole code if user wants to try calculator again
 {
	double input1, input3; // local variables
  do  //validation loop to check if operators are correctly inputted 
   {
		cout << "Please input 2 numbers in an equation format number operator number" << endl << "\"example 2.6 - 1.5\" " << endl << "Restriction. Valid operations are \" + - * / \" "  << endl;
		cin >> input1;
		cin >> input2; 
		cin >> input3;
		cout << endl;
    } 
	while (!( input2 == addition || input2 == subtraction || input2 == multiplication || input2 == division));
   
    if (input2 == addition) // decides which Function to call
    {
		answer = add (input1, input3);
    }
    if (input2 == subtraction) // decides which Function to call
    {
		answer = subtract (input1, input3);
    }
    if (input2 == multiplication) // decides which Function to call
    {
		answer = multiply (input1, input3); 
    }
	if (input2 == division) // decides which Function to call
	{
		answer = divide (input1, input3);
	}
	cout << endl << input1 << " " << input2 << " " << input3 << "  = " << answer << endl << endl;
		do //validation loop to check if the answer of using calculator again is valid or not
		{
			cout << "Would you like to try the calculator again? type \"y\" for yes, \"n\" for no? " << endl;
			cin >> yesno;
			cin.ignore ( 80, '\n'); // get rid of extra characters
			cout << endl;
		if (!( yesno == 'y' || yesno == 'n'))
			{ 
				cout << "Invalid input" << endl;
			}
		}	
		while (!( yesno == 'y' || yesno == 'n'));
	
}
	while (yesno == 'y');
	system ("PAUSE");
	return 0;
}

double add ( double number1, double number2) // Function add
{
	return (number1 + number2);
}
double subtract ( double number1, double number2) // Function subtract
{
	return (number1 - number2);
}
double multiply ( double number1, double number2) // Function multiply
{
	return (number1 * number2);
}
double divide ( double number1, double number2) // Function divide
{
	return (number1 / number2);
}

