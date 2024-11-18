#pragma once
class Employer
{
protected:
	char* name;
	int age;
public:
	Employer();
	Employer(const char*, int);
	virtual void Print() = 0;
	virtual ~Employer() = 0;
};

