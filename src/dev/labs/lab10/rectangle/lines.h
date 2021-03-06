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
