// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Project Eight
// Date Written: Mar 23, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

#include <iostream>
using namespace std;
#include <iomanip>
#include "complexNumber.h"

void printComplexNumber(const ComplexNumber&);

int main ()
{
	cout << "Author: Lehi Alcantara" << endl;
	cout << "Section: 001" << endl;
	cout << "Project Eight" << endl;
	cout << "------------------------------------------------------------------------------"<< endl;
	cout << "I will create a Complex number " << endl;
	cout << "Please enter in the value for the real part of the number: ";
	double a;
	cin >> a;
	cout << endl;
	cout << "Please enter in the value for the imaginary part of the number: ";
	double b;
	cin >> b;
	cout << endl;
	ComplexNumber test(a,b); // test parameter initialized*/
	/*ComplexNumber test;
	test.complex();*/
	printComplexNumber (test); // print function passing test object
	cout << "I will now create another complex numbers" << endl;
	cout << "Please enter in the value for the real part of the number: ";
	double c;
	cin >> c;
	cout << endl;
	cout << "Please enter in the value for the imaginary part of the number: ";
	double d;
	cin >> d;
	cout << endl;
	ComplexNumber comp2(c,d); // test parameter initialized
	printComplexNumber (comp2); // print function passing test object
	
	system("PAUSE");
	return 0;

}

void printComplexNumber( const ComplexNumber& n) // print function, stand alone
{
	double x = n.getRealPart();
	double y = n.getImaginaryPart();
	if (x==0 && y==1) // if statements to follow the restrictions
		{
			cout <<"the value of the complex number I just created is: ";
			cout << fixed << setprecision(3) <<"i" << endl;
		}
	else if (x>0 && y==1)// if statements to follow the restrictions
		{
			cout <<"the value of the complex number I just created is: ";
			cout << fixed << setprecision(3) << x << " + " << "i"<< endl;
		}
	else if (x<0 && y==1)// if statements to follow the restrictions
		{
			cout <<"the value of the complex number I just created is: ";
			cout << fixed << setprecision(3) << x << " + " << "i" << endl;
		}
	else if (x==0 && y==0)// if statements to follow the restrictions
	{
		cout <<"the value of the complex number I just created is: ";
		cout << 0 << endl;
	}
	else if (x==0)// if statements to follow the restrictions
		{
			cout <<"the value of the complex number I just created is: ";
			cout << fixed << setprecision(3) <<y <<"i" << endl;
		}
	else if (y==0) // if statements to follow the restrictions
		{
			cout <<"the value of the complex number I just created is: ";
			cout << fixed << setprecision(3) << x << endl;
		}
	else if (y>0 && x>0) // if statements to follow the restrictions
		{
			cout <<"the value of the complex number I just created is: ";
			cout << fixed << setprecision(3) << x <<" + " << y <<"i" << endl;
		}
	else if (y<0 && x<0)// if statements to follow the restrictions
	{
		cout <<"the value of the complex number I just created is: ";
		cout << fixed << setprecision(3) << x <<" " << y <<"i" << endl;
	}
	else if (y>0 && x<0)// if statements to follow the restrictions
	{
		cout <<"the value of the complex number I just created is: ";
		cout << fixed << setprecision(3) << x <<" + " << y <<"i" << endl;
	}
	else if (y<0 && x>0)// if statements to follow the restrictions
	{
		cout <<"the value of the complex number I just created is: ";
		cout << fixed << setprecision(3) << x <<" " << y <<"i" << endl;
	}
	
}	
	

