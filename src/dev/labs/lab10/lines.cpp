#include "lines.h"
#include <cmath>

Point::Point( )
{
	xCoord = 0;
	yCoord = 0;
}

Point::Point(int x, int y)
{
	xCoord = x;
	yCoord = y;
}

int Point::getXCoord( ) const
{
	return xCoord;
}

int Point::getYCoord( ) const
{
	return yCoord;
}

void Point::setXCoord(int x)
{
	xCoord = x;
}

void Point::setYCoord(int y)
{
	yCoord = y;
}

Line::Line( )
{
	startPoint.setXCoord(0);
	startPoint.setYCoord(0);
	endPoint.setXCoord(0);
	endPoint.setYCoord(0);
}

Line::Line(Point p1, Point p2)
{
	startPoint = p1;	
	endPoint = p2;
}

Point Line::getStartPoint( )const
{
	return startPoint;
}

Point Line::getEndPoint( ) const
{
	return endPoint;
}

Point Rectangle::getUpperLeft_Point ()  
{
	return UpperLeft_Point;
}
Point Rectangle::getBottomRight_Point ()
{
	return BottomRight_Point;
}
void Line::setStartPoint(Point p1)
{
	startPoint = p1;
}
void Line::setEndPoint(Point p2)
{
	endPoint = p2;
}
void Rectangle::setUpperLeft_Point (Point Left_Point)  
{
	UpperLeft_Point = Left_Point;
}
void Rectangle::setBottomRight_Point (Point Right_Point)
{
	BottomRight_Point = Right_Point;
}
int Rectangle::getHeight()
{
	return fabs(UpperLeft_Point.getYCoord()- BottomRight_Point.getYCoord());
}
int Rectangle::getWidth()
{
	return fabs(UpperLeft_Point.getXCoord() - BottomRight_Point.getXCoord());
}
int Rectangle :: getArea()
{
	return Rectangle::getHeight () * Rectangle::getWidth();
}
int Rectangle::getPerimeter()
{
	return Rectangle::getWidth() * 2 + Rectangle::getHeight() * 2;
}