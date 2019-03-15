#pragma once
#include"Account.h"
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class Account;

class Customer
{
public:

	
	//Customer constructor function
	Customer(string ="noname",string="noaddress",string="noname@gmail.com");
	//Pure virtual function which print information about customer
	virtual void print()const = 0;
	//Compare the given account number with the customer's account
	Account *getAccount(long);
	//return customer type
	virtual string getCustomerType();
	//This function allows us to add a new account
	bool addNewAccount(Account*);
	//return Name
	string getName()const;
	//return address
	string getAddress()const;
	//return email
	string getEmail()const;
	//Customer destructor
	
private:
	string name;//Customer name
	string address;//Customer address
	string email;//Customer email
	vector<Account *> accounts;//Account's vector(to store) 

};

