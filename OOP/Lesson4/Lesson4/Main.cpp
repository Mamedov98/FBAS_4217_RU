#include "Person.h"
#include <iostream>
using namespace std;


int main() {

	Person p1(new char[] {"Elvin"}, new char[] {"Azimov"}, 20);
	Person* p2 = new Person(new char[] {"Mamed"}, new char[] {"Kerimli"}, 20);

	//cout << p1; // cout - std::ostream, << - operator, p1 - &Person 

	//cout << p1;
	//p1++;
	//cout << p1;

	cout << (p1 == *p2);
}

