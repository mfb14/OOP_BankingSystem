#include "CheckingAccount.h"

using namespace std;

//Constructor Checking Account
CheckingAccount::CheckingAccount(double _balance,long aCN,double trFee,double cIRate)
	:Account(_balance,aCN),transectionFee(trFee),creditInterestRate(cIRate)
{
}
//Function of the credit
//It is calculating according to given information.
void CheckingAccount::credit(double amount) {
	double temp=Account::getBalance();
	temp=Account::getBalance()-chargeFee() + amount;
	
}
//Debit function
//It is calculating according to given information
bool CheckingAccount::debit(double amount) {
	//We checked out balance value after substruction.
	//If value is positive return true
	if (Account::getBalance()-amount<0)
	{
		cout<<Account::getBalance() +- transectionFee;
		return true;
	}
	else
	{
		cout << "Invalid Amount!!";
		return false;
	}
}
//To  calculate chargeFee value
double CheckingAccount::chargeFee(){
	 
	return (getBalance() - transectionFee);
}
//return Account type
string CheckingAccount::getAccountType() {
	return "Checking Account";
}

//This function helps to calculate and print End of Day
void CheckingAccount::endOfDay() {
	cout << "\nEnd Of Day:"
		 << Account::getBalance() - (creditInterestRate * chargeFee());
}
//This function helps to print CheckingAccount information
void CheckingAccount::print(){
	Account::print();
	/*cout << "\nAccount Type:"<<getAccountType();*/
	cout << "\nTransection Fee:"<<transectionFee;
	cout << "\nCredit Interest Rate:" << creditInterestRate;
	endOfDay();
	cout << "\n";
}
