#pragma once
#include"Account.h"
#include"Customer.h"
#include<list>
#include<iterator>
#include<iostream>
#include<string>


using namespace std;
class Account;
class Customer;

class Bank
{
public:
	Bank();
	//To create Account
	bool createAccount(Account *);
	//To add new Customer 
	bool addCustomer(Customer *);
	//To print All information about Account
	void listAccount();
	//To print information about Customer
	void listCustomer();
	//To remove Account with given account number
	bool removeAccount(long=0.0);
private:
	
	string bankName;
	string bankID;
	list < Account *> Accounts;
	vector <Customer *> customers;
	list<Account *>::iterator iter;
};

