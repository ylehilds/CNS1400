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
//ComplexNumber(const ComplexNumber&);
//void complex();
//double getReal()const;
double getRealPart() const;
double getImaginaryPart() const;
ComplexNumber addComplexNumbers(ComplexNumber&) const;
ComplexNumber subComplexNumbers(ComplexNumber&) const;

private:
	double realPart;
	double imPart;
};

# endif
