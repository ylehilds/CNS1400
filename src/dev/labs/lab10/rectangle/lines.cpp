#include "lines.h"

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

void Line::setStartPoint(Point p1)
{
	startPoint = p1;
}

void Line::setEndPoint(Point p2)
{
	endPoint = p2;
}
