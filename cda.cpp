// Program to Demstrate strucute types
#include <iostream>
using namespace std;

//Structure for a bank certificate deposit:
	struct CD_account
	{
		double balance;
		double interest_rate;
		int term; // months until maturity
	};

void get_data(CD_account& the_account);
//fucntion declaration 
//postcondition the_account.balance the_account.interest_rate
//have been given values that must be entered by the keyboard

int main(){

	//declare objects and functions in main programme
	CD_account account;
	get_data(account);

	//define doubles
	double rate_fraction, interest;

	//set struct values inside CDAccount
	rate_fraction = account.interest_rate/100.0;
	interest = account.balance*rate_fraction*(account.term/12.0);
	account.balance = account.balance + interest;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "When you CD matures in "
		 << account.term << "months, \n"
		 << "it will have an account balance of $"
		 << account.balance << "\n" << endl;
		 return 0;
}

// function definition get_data
void get_data(CD_account& the_account)
{
	cout << "Enter Account Balance: $";
	cin >> the_account.balance;
	cout << "Enter the interest rate: ";
	cin >> the_account.interest_rate;
	cout << "Enter the Term to maturity \n";
	cin >> the_account.term;

}












