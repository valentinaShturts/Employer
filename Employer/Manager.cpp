#include "Manager.h"
#include<iostream>
using namespace std;

Manager::Manager() : Employer()
{
	surname = nullptr;
}

Manager::Manager(const char* n, int a, const char* s) : Employer(n, a)
{
	cout << "Manager construct\n";
	surname = new char[strlen(s) + 1];
	strcpy_s(surname, strlen(s) + 1, s);
}

void Manager::Print()
{
	cout << "Manager Output\n";
	cout << "Manager " << name << endl << "Age: " << age << endl << "Surname: " << surname << endl << endl;
}

Manager::~Manager()
{
	cout << "Manager destruct\n";
	if (surname != nullptr)
	{
		delete[] surname;
	}
	system("pause");
}