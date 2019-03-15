#include "Customer.h"
/*
*getCustomerType() çalýþmýyor hatayý düzelt;
*
*/

//Customer Constructor function
Customer::Customer(string _name,string _address,string _email)
	:name(_name),address(_address),email(_email)
{

}
//return Name
string Customer::getName()const {
	return name;
}
//Return address
string Customer::getAddress()const {
	return address;
}
//Return E-Mail
string Customer::getEmail()const {
	return email;
}
//return Customer Type
string Customer::getCustomerType() {
	return "Customer Type";
}

Account* Customer::getAccount(long _accountNumber)
{
	//In this function; We compare the given account number
	//with the customer's account number
	//If the given number is the customer’ account 
	//returns a pointer to its account.
	for (size_t i = 0; i < accounts.size(); i++)
	{
		if (accounts[i]->getAccountNumber()==_accountNumber)
		{
			return accounts[i];
		}
	}
	return NULL;
}
//To add a new Account 
bool Customer::addNewAccount(Account *account)
{
	if (find(accounts.begin(),accounts.end(),account)==accounts.end())
	{
		accounts.push_back(account);
		return true;
	}
	else
	{
		return false;
	}
}


