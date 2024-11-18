#include "Worker.h"
#include<iostream>
using namespace std;

Worker::Worker() : Employer()
{
	job = nullptr;
}

Worker::Worker(const char* n, int a, const char* j) : Employer(n, a)
{
	cout << "Worker construct\n";
	job = new char[strlen(j) + 1];
	strcpy_s(job, strlen(j) + 1, j);
}

void Worker::Print()
{
	cout << "Worker Output\n";
	cout << "Worker " << name << endl << "Age: " << age << endl << "Job: " << job << endl << endl;
}

Worker::~Worker()
{
	cout << "Worker destruct\n";
	if (job != nullptr)
	{
		delete[] job;
	}
	system("pause");
}