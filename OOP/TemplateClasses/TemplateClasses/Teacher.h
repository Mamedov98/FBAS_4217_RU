#pragma once
#include "Person.h"

using namespace Polymorphism;

class Teacher : public Person 
{
public:
#pragma region Constructors
	Teacher(std::string name, std::string surname, unsigned short age);
	Teacher(std::string name, std::string surname, unsigned short age, unsigned short salary);
#pragma endregion

	unsigned short get_salary() const;
	void set_salary(unsigned short salary);

private:
	unsigned short salary;
};
