// Hacker Rank Tutorial: Virtual Functions 
// Matthew Morris 
// 21 Jun 2017 
//
#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
using namespace std;

class Person
{
public:
	// Member data 
	string name;
	int age;

	// Member functions 
	void virtual get_data()
	{
		cout << "Parent Person Class" << endl;
		cin >> name;
		cin >> age;
	}
	void virtual put_data()
	{
		cout << "Parent Person C lass" << endl;
		cout << name << endl;
		cout << age << endl;
	}
};

class Professor : public Person
{
public:
	// Define member data 
	int publications;
	int cur_id;

	// Define member functions
	void get_data()
	{
		cin >> name; 
		cin >> age;
		cin >> publications;
	}
	void put_data()
	{
		cout << name << endl;
		cout << age << endl;
		cout << publications << endl;
	}
};

class Student : public Person
{
	// Define member data
	int marks[6];
	int cur_id;

	// Define member functions 
	void get_data()
	{
		cin >> name;
		cin >> age;
		//cin >> marks[6];
	}
	void put_data()
	{
		cout << name << endl;
		cout << age << endl;
		//cout << marks[6] << endl;
	}
};
///////////////////////////////////////////////////////////////////////////////
int main()
{
	return 0;
}
