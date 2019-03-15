#include"Account.h"
#include"CheckingAccount.h"
#include"SavingAccount.h"
#include"Customer.h"
#include"CommercialCustomer.h"
#include"IndividualCustomer.h"
#include"Bank.h"
#include<iostream>
using namespace std;
int main()
{

	Bank *bank = new Bank();
	bank->addCustomer(new CommercialCustomer("Mustafa","Eskisehir","Furkan@gmail.com","Sr.Mustafa"));
	bank->addCustomer(new CommercialCustomer("Kemal", "Selanik", "Ataturk@turkiye", "Gazi"));
	bank->addCustomer(new IndividualCustomer("Metin", "Bolu", "Metin@gmail.com", "Title",22));
	cout << "\n-------------------CUSTOMER LIST------------------\n";
	bank->listCustomer();
	cout << "\n";
	bank->createAccount(new SavingAccount(0.78, 33, 9.55));
	bank->createAccount(new CheckingAccount(0.78,25, 8.45, 9.55));
	bank->createAccount(new SavingAccount(24, 12, 78.55));
	cout << "\n-------------------ACCOUNT LIST------------------\n";
	bank->listAccount();
	cout << "\n";
	bank->removeAccount(12);
	cout << "\n-------------------AFTER DELETE------------------\n";
	bank->listAccount();
	system("pause");
}
