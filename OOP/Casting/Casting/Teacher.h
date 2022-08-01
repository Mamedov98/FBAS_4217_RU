#pragma once
#include <string>

class Teacher
{
public:
	Teacher()
	{
		this->name = "Elvin";
		this->surname = "Azimov";
	}
	
	std::string name;
	std::string surname;
	unsigned short salary = 4500;

	void teach();
};
