// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// Professor: Neil B. Harrison
// Project: Lab three
// Date Written: Jan 23, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

#include <iostream>
using namespace std; 

// No Magic Numbers!
const int DELTA = 32;
const int NINE = 9;
const int FIVE = 5; 


int main( )
{
cout << "Please input the temperature in Celsius to convert to Fahrenheit: ";
double tempCelsius; // local variable
cin >> tempCelsius; // customer input
double tempFahrenheit = tempCelsius * NINE/FIVE + DELTA; // local variable 
cout << "\n";
cout << "The temperature from " << tempCelsius << " Celsius to Fahrenheit is: " << tempFahrenheit << "F" << endl; 

system("PAUSE");
return 0;
} 

// Here you must supply code that implements
// your algorithm to convert a temperature
// given in degrees Celsius to a temperature
// in degrees Fahrenheit.
// Values for temperatures in degrees Celsius
// will be given to the program by the user.

