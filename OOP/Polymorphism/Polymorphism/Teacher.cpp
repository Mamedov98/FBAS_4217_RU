#include "Teacher.h"


Teacher::Teacher(std::string name, std::string surname, unsigned short age)
	:Person(name, surname, age)
{
	this->salary = 450;
}

Teacher::Teacher(std::string name, std::string surname, unsigned short age, unsigned short salary)
	: Person(name, surname, age)
{
	this->salary = salary;
}

unsigned short Teacher::get_salary() const
{
	return this->salary * 0.95;
}

std::string Teacher::get_name()
{
	std::string res = "Teacher name is: ";

	return res + this->name;
}

void Teacher::set_salary(unsigned short salary)
{
	if (salary >= 200)
	{
		this->salary = salary;
	}
	else
	{
		throw std::exception("Bad input...");
	}
}
