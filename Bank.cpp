#include "Bank.h"
using namespace std;

//Constructor for the class Bank
Bank::Bank()
{
}
//In this function
//We can add a Customer
//Individual Customer or Commercial Customer
bool Bank::addCustomer(Customer *customer)
{
	if (find(customers.begin(), customers.end(), customer) == customers.end())
	{
		customers.push_back(customer);
		return true;
		cout << "\nCustomer Added\n";
	}
	else
	{	
		return false;
		cout << "\nCustomer was not added\n";
	}
		
}
//We can print customer list
void Bank::listCustomer() {
	for (size_t i = 0; i < customers.size(); i++)
	{
		customers[i]->print();
		cout << endl;
		cout<<"-----------------------------\n";
	}
}
//Here
//We can add Account information about Account
bool Bank::createAccount(Account *accounts)
{
	if (find(Accounts.begin(),Accounts.end(),accounts)==Accounts.end())
	{
		Accounts.push_back(accounts);
		return true;
		cout << "\nAccounts Added!!!\n";
	}
	else
	{
		return false;
		cout << "\nAccount wasn't added!!!\n";
	}
}

//We can list information about Account
void Bank::listAccount() {
	iter = Accounts.begin();

	for (iter = Accounts.begin(); iter != Accounts.end(); ++iter)
	{
		
		(*iter)->print();
		cout << "\n--------------------------------\n";
	}
	
}
bool Bank::removeAccount(long accountNumber) {
	
	/*iter = find(Accounts.begin(), Accounts.end(), accountNumber);
	for (iter = Accounts.begin(); iter != Accounts.end(); ++iter)
	{
		
		if ((iter)!=(*iter)->getAccountNumber())
		{
			
			
			Accounts.pop_back();
			return true;
			cout << "\nDeleted Succesfull!!!\n";

		}
		else
		{
			return false;
			cout << "\nNo deletion occurred\n";
		}
		
	}*/
	return false;
	cout << "\nDelete is not worked\n";
	
}
