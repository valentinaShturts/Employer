#pragma once
#include "Employer.h"

class Manager : public Employer
{
	char* surname;
public:
	Manager();
	Manager(const char* n, int a, const char* s);
	void Print();

	~Manager();
};

