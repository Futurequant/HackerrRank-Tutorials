// Birthdays to demonstrate class implementation 
//
#include <iostream>
using namespace std;

class day_of_year
{
	public:
	void output();
	void input();

	void set(int new_month, int new_date);
	//Precondition: new_month and new_date from a possible date
	//Postcondition: The date is reset according to the arguments

	int get_month();
	//Returns the month as a int i.e 1 for January, 2 for February

	int get_date();
	//Returns the day of the month i.e 25 for 25th

	private:
		// private member functions 
		void check_date();
		// private member variables
		int month;
		int day;
};

int main()
{
	day_of_year today, bach_birthday;
	cout << "Enter today's date\n";
	today.input();
	cout << "Todays date is ";
	today.output();

	bach_birthday.set(3, 21);
	cout << "J. S. Bachs's birthday is ";
	bach_birthday.output();

	if(today.get_month() == bach_birthday.get_month() && 
		today.get_date() == bach_birthday.get_date())
		cout << "Happy Birthday J Bach!\n";
	else
		cout << "Happy Unbirthday!\n";

	return 0;
}

//uses iostream 
void day_of_year::input()
{
	cout << "Enter the month as a number: ";
	cin >> month;
	cout << "Enter the date as a number: ";
	cin >> day;
	check_date();
}

void day_of_year::output()
{
	cout << "month = " << month
		 << ", day = " << day << endl;
}

void day_of_year::set(int new_month, int new_day)
{
	month = new_month;
	day = new_day;
	check_date();
}

void day_of_year::check_date()
{
	if ((month < 1) || (month > 12) || (day < 1) || (day > 31))
	{
		cout << "Invalid input, aborting program";
		exit(1);
	}
}

int day_of_year::get_month()
{
	return month;
}

int day_of_year::get_date()
{
	return day;
}









