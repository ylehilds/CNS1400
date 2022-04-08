// functions implementations source...
#include <iostream>
#include "complexNumber.h"
using namespace std;
ComplexNumber::ComplexNumber() // default constructor
{
	realPart = 0;
	imPart = 0;
}
ComplexNumber::ComplexNumber(double x, double y) // parameterized constructor
{
	realPart = x;
	imPart = y;
}

double ComplexNumber::getRealPart() const //getter
{
	return realPart;
}
double ComplexNumber::getImaginaryPart() const //setter
{
	return imPart;
}
/*ComplexNumber ComplexNumber::addComplexNumbers(ComplexNumber& c) const
{
	ComplexNumber temp;
	temp.realPart += c.getRealPart();
	temp.imPart += c.getImaginaryPart();
	return (temp);
}*/
/*void ComplexNumber::complex()
{
	cout << "I will create a Complex number " << endl;
	cout << "Please enter in the value for the real part of the number: ";
	cin >> realPart;
	cout << endl;
	cout << "Please enter in the value for the imaginary part of the number: ";
	cin >> imPart;
	cout << endl;
}*/

