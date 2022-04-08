// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Project Five
// Date Written: Feb 24, 2006  
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
// function Prototypes
void getData(double&, double&);
void getData(double&, double&, double&);
double computeUnitCost(double, double);
double computeUnitCost(double, double, double);

int main()
{
	cout << "Author: Lehi Alcantara" << endl;
	cout << "Section: 001" << endl;
	cout << "Project Five" << endl << endl;
	
	double diameter, price, length, width; //local variables
	char square = 's';//local variables
	char round = 'r';//local variables
	char input, again;//local variables
	char yesresponse = 'y';//local variables
	char noresponse = 'n';//local variables
	cout << "Pizza Price Comparison Calculator." << endl;
	do // loop the whole code if user wants to try again the pizza calculator
	{
	do // validation loop of type of pizza
	{
	cout << "Please enter in the type of the pizza:" << endl;
	cout << "\"r\"  for a round pizza OR \"s\"  for a square pizza. " << endl;
	cin >> input;
	cout << endl;
	if (!(input == square || input == round))
	{		
		cout << "Invalid input" << endl;
	}	
	}
	while (!(input == square || input == round));
	if (input == round) // round function void call and return function call
	{
		getData(diameter, price);
		double answer = computeUnitCost(diameter, price);
		cout <<"The price per square inch for this pizza is: $";
		cout << fixed << setprecision(2) << answer << endl << endl;
	}
	else if (input == square)// square function void call and return function call
	{
		getData(length, width, price);// round function void call
		double answer = computeUnitCost(length, width, price); //return function call
		cout <<"The price per square inch for this pizza is: $";
		cout << fixed << setprecision(2) << answer << endl;
	}
	do // validation loop if answer is y or n
	{
	cout <<"Would you like to try another calculation (\"y\" or \"n\")?" << endl;
	cin >> again;
	cin.ignore ( 80, '\n'); // get rid of extra characters
	cout << endl;
	if ( again != yesresponse && again != noresponse)
	{
		cout << "invalid input" << endl;
	}
	}
	while (again != yesresponse && again != noresponse);
	}
	while (again == yesresponse);
	system ("PAUSE");
return 0;
}
/* Function Prologue:
 Purpose: this void function program prompts user for some information and saves it
 inputs: takes diameter and price amount input by user.
 Parameters: diameter - diameter value inputted, price - price of the pizza
 Returns: no returns
 Pre-condition: only non-zero positive integer numbers 
 Post-condition: gets values by reference for diameter and price
 */
void getData(double& diameter, double& price)  // void function prompts user for some information and saves it
{
	do // validation loop for input non zero and positive
	{
	cout << " Enter in the diameter of the pizza: ";
	cin >> diameter;
	cout << endl;
	if (diameter <= 0)
	{
		cout << " Invalid input, the diameter must be a non-zero positive value" << endl;
	}
	}
	while (diameter <= 0);
	do // validation loop for input non zero and positive
	{
	cout << " Enter in the price of the pizza: ";
	cin >> price;
	cout << endl;
	if (price <= 0)
	{
		cout << " Invalid input, the price must be a non-zero positive value" << endl;
	}
	}
	while (price <= 0);
}
/* Function Prologue:
 Purpose: this function program calculates area from user information input
 inputs: takes diameter and price amount input by user.
 Parameters: diameter - diameter value , price - price of the pizza
 Returns: returns the answer of area divided by price
 Pre-condition: only non-zero positive integer numbers 
 Post-condition: gets values by value for diameter and price
 */
 double computeUnitCost(double diameter, double price)   // function prompts user for some information and return back to main
{
	const double PI = 3.14159;
	double radius = diameter/2;
	double area =  PI * (pow(radius, 2));
	double cost = price/area;
	return cost;
}

/* Function Prologue:
 Purpose: this void function program prompts user for some information and saves it
 inputs: takes length,width and price amount input by user.
 Parameters: length - length of pizza, width - width of pizza and price - price of the pizza
 Returns: no returns
 Pre-condition: only non-zero positive integer numbers 
 Post-condition: gets values by reference for length, width and price
 */
void getData(double& length, double& width, double& price) // void function prompts user for some information and saves it
{
	do // validation loop for input non zero and positive
	{
	cout << " Enter in the length of the pizza: ";
	cin >> length;
	cout << endl;
	if (length <= 0)
	{
		cout << " Invalid input, the length must be a non-zero positive value" << endl;
	}
	}
	while (length <= 0);
	do  // validation loop for input non zero and positive
	{
	cout << " Enter in the width of the pizza: ";
	cin >> width;
	cout << endl;
	if (width <= 0)
	{
		cout << " Invalid input, the width must be a non-zero positive value" << endl;
	}
	}
	while (width <= 0);
	do // validation loop for input non zero and positive
	{
	cout << " Enter in the price of the pizza: ";
	cin >> price;
	cout << endl;
	if (price <= 0)
	{
		cout << " Invalid input, the price must be a non-zero positive value" << endl;
	}
	}
	while (price <= 0);
}
/* Function Prologue:
 Purpose: this function program calculates area from user information input
 inputs: takes length and width amount and price inputted by user.
 Parameters: length - length of pizza , width - width of pizza, price - price of the pizza
 Returns: returns the answer of area divided by price
 Pre-condition: only non-zero positive integer numbers 
 Post-condition: gets values by value for lebgth, width and price
 */
double computeUnitCost(double length, double width, double price)  // function prompts user for some information and return back to main
{
	double area = length * width;
	double cost = price/area;
	return cost;
}
