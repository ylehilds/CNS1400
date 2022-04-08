//class ComplexNumber headre file...

#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H
#include <iostream>
using namespace std;
class ComplexNumber
{
public:
ComplexNumber();
ComplexNumber(double , double);
double getRealPart() const;
double getImaginaryPart() const;

private:
	double realPart;
	double imPart;
};

# endif
