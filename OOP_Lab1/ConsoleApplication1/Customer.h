#pragma once
#include"string.h"
class Customer{
private:
	int id;
	char *lastname;
	char *name;
	char *otch;
	char *adress;
	int ccn ;
	int balance;
protected:
	int x;
	
public:
	Customer();
	Customer(int, char*,char*,char*,char*,int,int);
	Customer(const Customer &);
	void setId(int);
	void setLastname(char*);
	void setName(char*);
	void setOtch(char*);
	void setAdress(char*);
	void setCcn(int);
	void setBalance(int);

	int getX() {
		return x;
	}

	~Customer();
	void print();
	char* getLastname(void);
	char* getName(void);
	char* getOtch(void);
	int getId(void);
	char* getAdress(void);
	int getCcn(void);
	int getBalance(void);
	
};