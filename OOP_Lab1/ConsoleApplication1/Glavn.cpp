// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
#include "stdafx.h"
#include"Customer.h"
#include"windows.h"
#include<iostream>


using namespace std;
void  diap(Customer b[])
{
	setlocale(LC_CTYPE, "Russian");
	int diapaz1, diapaz2; const int q= 3;
	cout << "������� ������ ����� ��������� -  "; cin >> diapaz1;
	cout << "������� ������ ����� ��������� -  "; cin >> diapaz2;
	cout << "______________________________________________" << endl;
	setlocale(LC_CTYPE, "Russian");
Customer diapozon[q];
int size = sizeof diapozon[q];

char alph[] = "�����Ũ�������";

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
	customer[0] = Customer(1, "��������", "�����", "����������", "�������", 5, 50);
	customer[1] = Customer(2, "��������", "���������", "�����������", "��������", 500, 20);
	customer[2] = Customer(3, "���", "���������", "�������", "�����", 228, 100);

	for (int i = 0; i < z; i++)
	{
		customer[i].print();
	};
	
	diap(customer);



	return 0;
}

