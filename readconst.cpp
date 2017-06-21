// Read Only Const Member Functions
//
//
class Point
{
private:
	void init(double xs, double ys);

	// Properties for x and y co-ords
	double x;
	double y;

public:

	// Constructors and destructor
	Point();
	Point(double xs, double ys);
	Point(const Point&, source);
	virtual ~Point();

	// Selectors 
	double X() const;
	double Y() const;
};
//
// Define Constructors 
Point::Point()
{
	// Default Constructor 
	init(0.0,0.0);
}

Point::Point(const Point &source)
{
	// Copy Constructor 
	init(source.x, source.y);
}

void Point::init(double xs, double ys)
{
	// Initialise the point
	x = xs;
	y = ys;
}
//
// Define Member Functions 
double Point::X() const
{
	return x;
}
double Point::Y() const
{
	return y;
}
//
// Define Modifier Functions
void X(double NewX);     // Set x
void Y(double NewY);     // Set y
void Point::X(double NewX)
{
	// Set New X
	x = NewX;
}
void Point::Y(double NewY)
{
	// Set New Y
	y = NewY;
}
