#pragma once

class Person {

private:
	unsigned short age;

public:
	char* name;
	char* surname;

	Person(); // прототип конструктора 

	Person(Person &other);

	unsigned short get_age() const;
	void set_age();
};

