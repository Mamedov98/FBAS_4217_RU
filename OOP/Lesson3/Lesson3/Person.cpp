#include "Person.h"


Person::Person() {
	name = new char[] {"Rafiq"};
	surname = new char[] {"Huseynzade"};
	age = 15;
}

Person::Person(Person& other)
{
	this->name = other.name;
	this->surname = other.surname;
	this->age = 0;
}

unsigned short Person::get_age() const { return this->age; }
void Person::set_age() { this->age++; }


