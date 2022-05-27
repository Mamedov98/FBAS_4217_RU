#pragma once
#include "Person.h"
#include <string>


class Teacher : public Person 
{
public:
	Teacher(std::string name, std::string surname, unsigned short age);
	Teacher(std::string name, std::string surname, unsigned short age, unsigned short salary);

	unsigned short get_salary() const;
	std::string get_name() override;

	void set_salary(unsigned short salary);

private:
	unsigned short salary;
};
