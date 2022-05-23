#include <iostream>


class Person
{
public:
	Person();
	Person(char*, char*, int);
	~Person();


	char* name{};
	char* surName{};
	int age{};

	bool operator >(const Person& other);
	bool operator <(const Person& other);
	void operator ++();
	void operator ++(int);

	friend std::ostream& operator << (std::ostream& out, const Person& p)
	{
		out << "Name is: " << p.name << std::endl
			<< "Surname is: " << p.surName << std::endl
			<< "Age is: " << p.age << std::endl;

		return out;
	}

	bool operator == (const Person& p) {
		return this->age == p.age;
	}
};


