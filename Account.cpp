#include "Account.h"
#include<iostream>
using namespace std;


Account::Account(double _balance,long _accountNumber):balance(_balance),accountNumber(_accountNumber)
{

}
Account::~Account()
{
}
void Account::credit(double amount) {
	balance += amount;
}
bool Account::debit(double amount) {
	//We checked out balance value after substruction.
	//If value is positive return true
	if (amount<=balance)
	{
		balance -= amount;
		cout << balance;
		return true;
	}
	//If value is negative return false
	else
	{
		cout << "Invalid Amount!!";
		return false;
	}
}
string Account::getAccountType() {
	return "Account Type!!";
}

//Print information about account
void Account::print(){
	/*cout << "Name:" << owner->getName();
	cout << "\nAddress:" << owner->getAddress();
	cout << "\nE-Mail:" << owner->getEmail();*/
	cout << "\nBalance:" << balance;
	cout << "\nAccount Number:" << accountNumber << endl;
	cout << getAccountType();
	cout << "\n";
}
double Account::getBalance(){
	return balance;
}
long Account::getAccountNumber() {
	return accountNumber;
}
bool Account::setAccountOwner(Customer *customer) {
	if (owner==customer)
	{
		owner = customer;
		return true;
	}
	else
	{
		return false;
	}
}