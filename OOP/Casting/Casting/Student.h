#pragma once
#include <string>
#include "Teacher.h"

class Student : public Teacher
{
public:
	Student()
	{
		this->name = "Rafiq";
		this->surname = "Huseynzade";
	}

	std::string name;
	std::string surname;

	void learn();
};

