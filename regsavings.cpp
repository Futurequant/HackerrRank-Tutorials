// A program to calculate Annual regular savings Calculator 
#include <iostream>
using namespace std; 

struct investments{

	double initial; 
	double regular;
	double interest_rate;
	double total;
	int years;

};

// Function Declaration for get_data
void get_data(investments& the_invest);\

int main(){

	investments invest; 
	get_data(invest);
	double balance;
	double rate_fraction;

	rate_fraction = 1.00 + (invest.interest_rate/100.0);
	balance = (invest.initial*rate_fraction) + invest.regular;

	for(int i=0; i<invest.years; i++){
		invest.total += (balance*rate_fraction) + invest.regular;
	}

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "At the end of your investment horizon in "
		 << invest.years << "years, \n"
		 << "the final value of your account will be  $"
		 << invest.total << "\n" << endl;
		 return 0;
}

// Define function get_data 
void get_data(investments& the_invest){

	cout << "Enter your inital deposit: ";
	cin >> the_invest.initial;
	cout << "How much do you plan to save regularly: ";
	cin >> the_invest.regular;
	cout << "Enter the annual interest rate you expect to earn: ";
	cin >> the_invest.interest_rate;
	cout << "Enter your time horizon in years: ";
	cin >> the_invest.years;
}









