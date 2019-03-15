#include "IndividualCustomer.h"


//Constructor function
IndividualCustomer::IndividualCustomer(string _name, string _address, string _email,string _title,int _age)
	:Customer(_name,_address,_email),title(_title),age(_age)
{
}
//return customer type
string IndividualCustomer::getCustomerType() {
	return "Individual Customer";
}
//To print information about Individual Customer
void IndividualCustomer::print()const {
	cout << "Name:" << getName();
	cout << "\nAddress:" << getAddress();
	cout << "\nE-Mail:" << getEmail();
	cout << "\nAge:" << age;
	cout << "\nTitle:" << title;
}



