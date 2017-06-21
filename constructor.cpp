// Class with constructors 
#include <iostream>
using namespace std;

// Class for a Bank Acccount 
class BankAccount
{
public:
	BankAccount(int dollars, int cent, double rate);
	//initialises the account balanace to dollars and cent a
	//sets the bank accounts interest rate
	BankAccount(int dollars, double rate);
	//Initialise the bank account to dollars 
	//Initialise the interest rate
	BankAccount();
	//Initialises the Bank Account to 0.0
	void update();
	//Post condition: One year of simple interest has been added to
	//the account balance 
	double get_balance();
	//Returns the current account balance
	double get_rate();
	//returns the current bank account interest rate
	void output(ostream& outs);
	//Precondtion: If outs is a file output stream, then 
	//outs has already been connected to a file 
	//Postcondtion: Account balance and interest rate 
	//stream outs.

private:
	double balance;
	double interest_rate;
	double fraction(double percent);
	//Converts a percentage to a fraction. For example, fraction(50.3)
	//returns 0.503
};

int main()
{
	BankAccount account1(100, 2.3), account2;
	
	cout << "account 1 initalised as follows:\n";
	account1.output(cout);
	cout << "account 2 initialise as follows:\n";
	account2.output(cout);

	account1 = BankAccount(999, 99, 5.5);
	cout << "account1 reset to the following:\n";
	account1.output(cout);
	return 0;
}

BankAccount::BankAccount(int dollars, int cents, double rate)
{
	if ((dollars < 0) || (cents < 0) || (rate < 0))
	{
		cout << "Illegal values for money or interest rate\n";
		exit(1);
	}
	balance = dollars + 0.01*cents;
	interest_rate = rate;
}

BankAccount::BankAccount(int dollars, double rate)
	{
		if ((dollars < 0 ) ||  (rate < 0 ))
		{
			cout << "Illegale valies for money or interest rate\n";
			exit(1);
		}
		balance = dollars; 
		interest_rate = rate;
	}
BankAccount::BankAccount() : balance(0), interest_rate(0.0)
{
	//Body left intentionally blank default constructor definition
}
void BankAccount::update()
{
	balance=balance + fraction(interest_rate)*balance;
}

double BankAccount::fraction(double percent_value)
{
	return (percent_value/100.0);
}

double BankAccount::get_balance()
{
	return balance;
}

double BankAccount::get_rate()
{
	return interest_rate;
}

//uses iostream
void BankAccount::output(ostream& outs)
{
	outs.setf(ios::fixed);
	outs.setf(ios::showpoint);
	outs.precision(2);
	outs << "Account balance $" << balance << endl;
	outs << "Interest rate " << interest_rate << "%" << endl;

}

















