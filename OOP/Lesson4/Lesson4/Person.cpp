#include "Person.h"

Person::Person()
{

}

Person::Person(char* name, char* surName, int age)
{
	this->name = name;
	this->surName = surName;
	this->age = age;
}


Person::~Person()
{
	delete[]name;
	delete[]surName;
}

bool Person::operator>(const Person& other)
{
	return this->age > other.age;
}

bool Person::operator<(const Person& other)
{
	return this->age < other.age;
}

void Person::operator++()
{
	this->age++;
}

void Person::operator++(int)
{
	this->age++;
}

