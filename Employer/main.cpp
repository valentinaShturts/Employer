#include "Manager.h"
#include "President.h"
#include "Worker.h"
#include <iostream>

using namespace std;

int main()
{
	Employer** ptr = new Employer * [3];

	ptr[0] = new President("Ivan", 34,"ComCompany");
	ptr[1] = new Manager("Olena", 23, "Phalko");
	ptr[2] = new Worker("Irina", 19, "Cashier");

	for (size_t i = 0; i < 3; i++)
	{
		ptr[i]->Print();
	}
	for (size_t i = 0; i < 3; i++)
	{
		delete ptr[i];
	}

	system("pause");
	return 0;

}