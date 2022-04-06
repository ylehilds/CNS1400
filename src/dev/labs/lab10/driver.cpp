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
	
	printRectangle(pOne, pTwo);
	cout << endl;
	
	
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
void printRectangle(Rectangle& rangle)
{
	cout << "Upper Left Corner Coordinates: " << "(" << rangle.getUpperLeft_Point().getXCoord() << ", " << rangle.getUpperLeft_Point().getYCoord() << ")";
	cout << "Bottom Right Corner Coordinates: " << "(" <<  rangle.getBottomRight_Point().getXCoord() << ", " << rangle.getBottomRight_Point().getYCoord() << ")";;
	cout << "area is: " << rangle.getArea() << endl;
	cout << "the perimeter is: " << rangle.getPerimeter () << endl;
}

