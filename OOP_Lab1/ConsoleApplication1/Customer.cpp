#include"stdafx.h"
#include"Customer.h"
#include<iostream>

using namespace std;
Customer::Customer()
{
	id = 0;
	lastname = "0";
	name = "0";
	otch = "0";
	adress = "0";
	ccn = 0;
	balance = 0;
};
Customer::Customer(int ID, char* LASTNAME, char* NAME, char* OTCH, char* ADRESS, int CCN, int BALANCE)
{
	id = ID;
	lastname= LASTNAME;
	name=NAME;
	otch= OTCH;
    adress=ADRESS;
	ccn = CCN;
	balance = BALANCE;
	
}
Customer::Customer(const Customer &b)
{
	id = b.id;
	name = b.name;
	lastname = b.lastname;
	otch = b.otch;
	adress = b.adress;
	ccn = b.ccn;
	balance = b.balance;
}
void Customer::setId(int ID)
{
	id = ID;
}
void Customer::setLastname(char *LASTNAME)
{
	lastname=LASTNAME;
}
void Customer::setName(char *NAME)
{
	name=NAME;
}
void Customer::setOtch(char *OTCH)
{
	otch=OTCH;
}
void Customer::setAdress(char *ADRESS)
{
	adress=ADRESS;
}
void Customer::setCcn(int CCN)
{
	ccn = CCN;
}
void Customer::setBalance(int BALANCE)
{
	balance= BALANCE;
}

Customer::~Customer(void)
{

}
void Customer::print()
{
	cout << "Id - " << Customer::id << endl;
	cout << "Lastname - " << Customer::lastname << endl;
	cout << "Name-" << Customer::name << endl;
	cout << "Otchestvo-" << Customer::otch << endl;
		cout << "Adress-" << Customer::adress << endl;
	cout << "Ccn-" << Customer::ccn<< endl;
	cout << "Balance-" << Customer::balance << endl;
	cout << "______________________________________" << endl;
	
}
char* Customer::getLastname(void)
{
	return lastname;
}
char* Customer::getName(void)
{
	return name;
}
char* Customer::getOtch(void)
{
	return otch;
}
int Customer::getId(void)
{
	return id;
}
char* Customer::getAdress(void)
{
	return adress;
}
int Customer::getCcn(void)
{
	return ccn;
}
int Customer::getBalance(void)
{
	return balance;
}
