#pragma once
#include"Account.h"
#include<string>
#include<iostream>


class Account;

class SavingAccount:public Account
{
public:
	//Constructor saving account
	SavingAccount(double,long,double=0.7);
	//Auxiliary function for calculating interest.
	double calculateInterest();
	//return account type for the SavingAccount 
	string getAccountType();
	
	//subtracts an amount from the balance if the balance
	//is bigger than zero after subtraction.
	bool debit(double);
	//to print informaition about saving accounts
	void print();
	//adds an interest to the balance. 
	void endOfDay();
	
private:
	double interestRate;

};

