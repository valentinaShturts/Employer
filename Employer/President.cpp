#include "President.h"
#include<iostream>
using namespace std;

President::President() : Employer()
{
	company = nullptr;
}

President::President(const char* n, int a, const char* c) : Employer(n, a)
{
	cout << "President Constructor\n";
	company = new char[strlen(c) + 1];
	strcpy_s(company, strlen(c) + 1, c);
}

void President::Print()
{
	cout << "President Output\n";
	cout << "President " << name << endl << "Age: " << age << endl << "Company: " << company << endl << endl;
}

President::~President()
{
	cout << "President destruct\n";
	if (company != nullptr)
	{
		delete[] company;
	}
	system("pause");
}
