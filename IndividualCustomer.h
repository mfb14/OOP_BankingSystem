#pragma once
#include"Customer.h"
#include<iostream>
using namespace std;
class IndividualCustomer:public Customer
{
public:
	IndividualCustomer(string,string,string,string="noTitle",int=0);
	void print()const;
	string getCustomerType();
private:
	int age;
	string title;

};

