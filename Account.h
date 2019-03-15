#pragma once
#include"Customer.h"
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
class Customer;

class Account
{
public:
	Account(double=0,long=0);
	~Account();
	virtual void credit(double amount);
	virtual bool debit(double amount);
	virtual string getAccountType()=0;
	virtual void print();
	virtual void endOfDay() = 0;
	double getBalance();
	long getAccountNumber();
	bool setAccountOwner(Customer *);

private:

	double balance;//Balance
	long accountNumber;//Uniqe number
	Customer *owner;//point account's owner.
};

