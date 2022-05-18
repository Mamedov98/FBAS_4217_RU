#include <iostream>
#include "Person.h"
using namespace std;



int main() {

	Person p1;

	Person p2 = p1;

	cout << p2.get_age() << endl;
	cout << p2.name;
	return 0;
}