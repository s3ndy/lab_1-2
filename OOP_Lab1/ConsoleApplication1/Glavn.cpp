// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
#include "stdafx.h"
#include"Customer.h"
#include"windows.h"
#include<iostream>


using namespace std;
void  diap(Customer b[])
{
	setlocale(LC_CTYPE, "Russian");
	int diapaz1, diapaz2; const int q= 3;
	cout << "Введите первое число диапозона -  "; cin >> diapaz1;
	cout << "Введите второе число диапозона -  "; cin >> diapaz2;
	cout << "______________________________________________" << endl;
	setlocale(LC_CTYPE, "Russian");
Customer diapozon[q];
int size = sizeof diapozon[q];

char alph[] = "АБВГДЕЁЖЗИКЛМН";

for (int a = 0; a < 14; a++)
{

	for (int i = 0; i < size; i++)
	{
		if (b[i].getCcn() > diapaz1 && b[i].getCcn() < diapaz2 && b[i].getLastname()[0] == alph[a])
		{ b[i].print(); }
	};

}


};

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_CTYPE, "Russian");
	
	const int z = 3;
	
	Customer customer[z];
	customer[0] = Customer(1, "Войтович", "Роман", "Дмитриевич", "Могилев", 5, 50);
	customer[1] = Customer(2, "Маркевич", "Анастасия", "Анатольевна", "Вороново", 500, 20);
	customer[2] = Customer(3, "Буц", "Екатерина", "Юрьевна", "Брест", 228, 100);

	for (int i = 0; i < z; i++)
	{
		customer[i].print();
	};
	
	diap(customer);



	return 0;
}

