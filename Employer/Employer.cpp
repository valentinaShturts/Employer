#include "Employer.h"
#include<iostream>
using namespace std;

Employer::Employer()
{
	name = nullptr;
	age = 0;
}
Employer::Employer(const char* n, int a)
{
	cout << "Employer construct\n";
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;
}


Employer::~Employer()
{
	cout << "Employer destruct\n";
	if (name != nullptr)
	{
		delete[] name;
	}
	age = 0;
	system("pause");

}
