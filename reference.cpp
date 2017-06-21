// Call by Reference Example 
//
// Matthew Morris 
// 
#include <iostream>
using namespace std;

class SampleClass{

public: 
	// Define array at compile time
	double contents[100];

	SampleClass(double d)
	{
		for(int i=0; i<100; i++)
		{
			contents[i] = d;
			d = ++d;
		}
	}
	virtual ~SampleClass(){
		cout << "SampleClass being deleted\n ";
	}
};

double sum(const SampleClass& myclass)
{
	double result = myclass.contents[0];
	for(int i = 0; i<100; i++)
	{
		result += myclass.contents[i];
	}
	return result;
};

int main()
{
	SampleClass sc(1.0);
	double total = sum(sc);
	cout << "Total sum of Array: " << total << endl;
}


