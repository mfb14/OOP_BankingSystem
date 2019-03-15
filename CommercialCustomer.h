#pragma once
#include"Customer.h"
#include<iostream>
using namespace std;
class CommercialCustomer:public Customer
{
public:
	CommercialCustomer(string,string,string,string="noBussinessName");
	void print()const;
	string getCustomerType();
private:
	string businessName;
};

