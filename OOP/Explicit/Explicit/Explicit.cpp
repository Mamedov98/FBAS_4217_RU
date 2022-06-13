#include <iostream>
using namespace std;


class MyClass
{
public:
	MyClass(int a)
	{
		this->name = new char[50]{ "Elvin" };
		this->surname = new char[50]{ "Azimov" };
		this->age = { 20 };
	}

	MyClass()
	{
		this->name = new char[50]{};
		this->surname = new char[50]{};
		this->age = { };
	}

	MyClass(MyClass& other)
	{
		this->age = other.age;
		this->name = new char[strlen(other.name) + 1]{};
		this->surname = new char[strlen(other.surname) + 1]{};

		for (size_t i = 0; i < strlen(other.name) + 1; i++)
		{
			this->name[i] = other.name[i];
		}

		for (size_t i = 0; i < strlen(other.surname) + 1; i++)
		{
			this->surname[i] = other.surname[i];
		}
	}

	MyClass operator = (MyClass& other)
	{
		this->age = other.age;
		this->name = new char[strlen(other.name) + 1]{};
		this->surname = new char[strlen(other.surname) + 1]{};

		for (size_t i = 0; i < strlen(other.name) + 1; i++)
		{
			this->name[i] = other.name[i];
		}

		for (size_t i = 0; i < strlen(other.surname) + 1; i++)
		{
			this->surname[i] = other.surname[i];
		}
	}

	~MyClass()
	{
		delete[]name;
		delete[]surname;
	}

	char* name{};
	char* surname{};
	int age{};
};


int main()
{
	MyClass c1(1);

	cout << c1.name << endl;
	cout << c1.surname << endl;
	cout << c1.age << endl;


	MyClass c2 = c1;


	cout << c2.name << endl;
	cout << c2.surname << endl;
	cout << c2.age << endl;

	c2.name[0] = 'A';


	cout << c1.name << endl;
	cout << c1.surname << endl;
	cout << c1.age << endl;


	cout << c2.name << endl;
	cout << c2.surname << endl;
	cout << c2.age << endl;



	return 0;
}