// Program to demonstrate an example of a class
#include <iostream>
using namespace std;

class day_of_year{
public:
	//member function declaration
	void output();

	int month;
	int day;
};

int main(){

	// create day_of_year objects
	day_of_year today, birthday;

	cout << "Enter today's date:\n";
	cout << "Enter month as a number: ";
	cin >> today.month;
	cout << "Enter the day of the month: ";
	cin >> today.day;
	cout << "Enter your birthday:\n";
	cout << "Enter month as a number: ";
	cin >> birthday.month;
	cout << "Enter the day of the month: ";
	cin >> birthday.day;

	cout << "Todays date is: ";
	// call memeber function day_of_year 'output'
	today.output();
	cout << "Your Birthday is: ";
	birthday.output();

	if (today.month == birthday.month && 
		today.day == birthday.day) 
		cout << "Happy Birthday!\n";
	else
    	cout << "Happy Unbirthday!\n";

    return 0;
}

// uses iostream 
// we do not need to use the dot operator for today.month here
// because the object day_of_year such as today, birthday has not been 
// created yet.
void day_of_year::output()
{
	cout << "month = " << month
		 << ", day = " << day << endl;
}






