// Static Memeory Example
// 
// Matthew Morris 
#include <iostream>
#include <string>
using namespace std;
//
// Define Box Class 
class Box 
{
public:
	static int objectCount;
	// Constructor Definiton 
	Box(double l, double d, double h)
	{
	cout << "Constructor Called." << endl;
	length = l;
	depth = d;
	height = h;
	// Increase Object count each time 
	// Object is created
	objectCount++;
	}

	double Volume()
	{
		return length*depth*height;
	}
	
	static int getCount()
	{
		return objectCount;
	}

private:
	double length;
	double depth;
	double height;
};
//
// Initialise Static Member of Class Box
int Box::objectCount = 0;
// 
int main(void)
{

	cout << "Initial Stage Count: " << Box::getCount() << endl;
	std::string boxNum;

	for(int i=0l; i<10; i++){
	boxNum = std::to_string(i);
	Box boxNum(3.3,4.5,5.5);
	}

	// Print Total number of object created 
	cout << "Final Stage Count: " << Box::getCount() << endl;
	
	return 0;
}
