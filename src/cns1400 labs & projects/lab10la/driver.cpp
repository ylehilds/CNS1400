// File Prologue
// Author: Lehi Alcantara
// Course: CNS 1400
// section: 001
// Professor: Neil B. Harrison
// Project: Lab Ten
// Date Written: Mar 21, 2006
// --------------------------------------

// I declare that the following source code was written
// solely by me. I understand that copying any source
// code, in whole or in part, constitutes cheating, and
// that I will receive a zero in this assignment if I am
// found in violation of this policy.

#include <iostream>
using namespace std;

#include "lines.h"

void printLine(const Line&);
void printPoint(const Point&);
void printRectangle(Rectangle&);




int main ( )
{
	Point pOne(3,4);
	Point pTwo(7,7);
	cout << "\nPoint pOne: ";
	printPoint(pOne);
	cout << "\nPoint pTwo: ";
	printPoint(pTwo);
	
	
	Line lOne(pOne, pTwo);
	cout << "\nLine lOne: "; 
	printLine(lOne);
	cout << endl;
	Rectangle pass (pOne, pTwo);
	cout << "Rectanggle info:" << endl;
	printRectangle(pass);
	
	
	system("PAUSE");
	return 0;
}

void printPoint(const Point& p)
{
	cout << "(" << p.getXCoord( ) << "," 
	                      << p.getYCoord( ) << ")";
}

void printLine(const Line& aline)
{
	Point p1 = aline.getStartPoint( );
	Point p2 = aline.getEndPoint( );
                printPoint(p1);
	cout << " to ";
	printPoint(p2);
}
void printRectangle(Rectangle& rangle) // stand alone function
{
	Point r1 = rangle.getUpperLeft_Point();
	Point r2 = rangle.getBottomRight_Point();
	cout << "Bottom Left Corner Coordinates are: " << "(" << rangle.getUpperLeft_Point().getXCoord() << ", " << rangle.getUpperLeft_Point().getYCoord() << ")" << endl;
	cout << "Upper Right Corner Coordinates are: " << "(" << rangle.getBottomRight_Point().getXCoord() << ", " << rangle.getBottomRight_Point().getYCoord() << ")" << endl;
	cout << "Area is: " << rangle.getArea() << endl;
	cout << "The perimeter is: " << rangle.getPerimeter () << endl;
}

