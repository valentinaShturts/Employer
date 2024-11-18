#pragma once
#include "Employer.h"

class President: public Employer
{
	char* company;
public:
	President();
	President(const char* n, int a, const char* c);
	void Print();

	~President();
};

