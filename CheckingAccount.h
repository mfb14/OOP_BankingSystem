#pragma once
#include"Account.h"
#include<iostream>
#include<string>

class Account;

class CheckingAccount:public Account
{
public:
	//Constructor function CheckingAccount
	CheckingAccount(double,long,double=0,double=0.5);
	// credit (add) an amount to the account balance and
	//subtract the charge fee.
	void credit(double);
	//subtracts an amount from the balance.If the balance
	//is negative after subtraction, then subtract the transaction 
	//fee from the balance.
	bool debit(double);
	//Return account type
	string getAccountType();
	//print information
	void print();
	//subtracts an interest from the balance. 
	void endOfDay();

private:
	double transectionFee;// fee charged per transaction 
	double creditInterestRate; //daily interest rate for the credited amount.
	double chargeFee();
		
	
};

