#include "CommercialCustomer.h"



CommercialCustomer::CommercialCustomer(string _name,string _address,string _email,string _bName)
	:Customer(_name,_address,_email),businessName(_bName)
{
}
string CommercialCustomer::getCustomerType() {
	return "Commercial Type";
}
//To print information about Commercial customer
void CommercialCustomer::print()const{
	cout << "Name:" << getName();
	cout << "\nAddress:" << getAddress();
	cout << "\nE-Mail:" << getEmail();
	cout << "\nBusiness Name:" << businessName;
	
	
}
