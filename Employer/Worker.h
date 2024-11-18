#pragma once
#include "Employer.h"

class Worker : public Employer
{
	char* job;
public:
	Worker();
	Worker(const char* n, int a, const char* j);
	void Print();

	~Worker();
};

