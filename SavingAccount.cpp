#include "SavingAccount.h"



//SAvingAccount Constructor
SavingAccount::SavingAccount(double _balance, long aCN, double _interestRate)
	:Account(_balance, aCN),interestRate(_interestRate)
{
}

//To Calculate Interest
double SavingAccount::calculateInterest() {
	return interestRate;
}
//Return Account Type
string SavingAccount::getAccountType() {

	return "Saving Account";
}
//To Calculate debit
bool SavingAccount::debit(double amount) {
	double temp = Account::getBalance();
	if (Account::getBalance() - amount>=0)
	{
		temp=temp- amount;
		cout << temp;
		return true;
	}
	else
	{
		cout << "Invalid Amount!!";
		return false;
	}
}
//To calculate print and print End Of Day Value
void SavingAccount::endOfDay() {
	cout << "\nEnd Of Day:" << (Account::getBalance() + interestRate);
}
//To print information About SavingAccount
void SavingAccount::print() {
	Account::print();
	/*cout << "\nAccount Type:" << getAccountType();*/
	cout << "\nInterest Rate:" << interestRate;
	endOfDay();
	cout << "\n";
}

