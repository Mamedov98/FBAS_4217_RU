#pragma once
#include <string>


class Person
{
public:
	Person(std::string name, std::string surname, unsigned short age);

	std::string virtual get_name();
	std::string get_surname();
	unsigned short get_age();

	void  set_name(std::string);
	void set_surname(std::string);
	void set_age(unsigned short);


protected:
	std::string name{};
	std::string surname{};
	unsigned short age{};
};
