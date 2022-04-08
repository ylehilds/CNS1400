class Point
{
private:
	int xCoord;
	int yCoord;
public:
	Point( );
	Point(int, int);
	int getXCoord( )const;
	int getYCoord( )const;
	void setXCoord(int);
	void setYCoord(int);
};

class Line
{
private:
	Point startPoint;
	Point endPoint;
public:
	Line( );
	Line(Point, Point);	
	Point getStartPoint( )const;
	Point getEndPoint( )const;
	void setStartPoint(Point);
	void setEndPoint(Point);
};
class Rectangle // rectangle class
{
private:
	Point UpperLeft_Point;
	Point BottomRight_Point;
public:
	Rectangle();
	Rectangle(Point, Point);
	void setUpperLeft_Point (Point);  
	void setBottomRight_Point (Point);
	Point getUpperLeft_Point ();  
	Point getBottomRight_Point ();
	int getHeight ();
	int getWidth ();
	int getArea ();
	int getPerimeter ();
	
};


