#include "Person.h"


bool check_space(std::string text)
{
	int count = 0;

	for (size_t i = 0; i < text.length(); i++)
	{
		if (isspace(text[i]))
		{
			count++;
		}
	}

	if (count / 2 < text.length())
	{
		return true;
	}
	return false;
}


Polymorphism::Person::Person(std::string name, std::string surname, unsigned short age)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
}

std::string Polymorphism::Person::get_name()
{
	return this->name;
}

std::string Polymorphism::Person::get_surname()
{
	return std::string();
}

unsigned short Polymorphism::Person::get_age()
{
	return 0;
}

void Polymorphism::Person::set_name(std::string name)
{
	if (name.length() > 3 && check_space(name))
	{
		this->name = name;
	}
}
