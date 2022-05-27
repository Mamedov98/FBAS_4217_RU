#pragma once
#include "Person.h"
#include <string>


class Employee : public Person
{
public:
	

private:
	unsigned short exp{};
	unsigned short salary{};
	std::string position{};
};
