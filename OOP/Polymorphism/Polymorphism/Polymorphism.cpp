#include <iostream>
#include "Person.h"
#include "Teacher.h"

using namespace std;


int main()
{
	auto p1 = new Person("Elvin", "Azimov", 20);
	auto t1 = new Teacher("Elvin", "Azimov", 20, 3000);

	cout << p1->get_name() << endl;
	cout << t1->get_name() << endl;



	return 0;
}

