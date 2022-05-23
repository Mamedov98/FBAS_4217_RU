#include <iostream>
#include "Person.h"
#include "Teacher.h"
using namespace std;
using namespace Polymorphism;


int main()
{
	auto t1 = new Teacher("Elvin", "Azimov", 20);
	
	/*try
	{
		t1->set_salary(1);
	}
	catch(std::exception ex)
	{
		cerr << ex.what();
	}*/

	cout << t1->get_name();

	t1->set_name(" a  ");

	cout << t1->get_name();

}
