#include <iostream>
#include "Header.h"

using namespace std;

int x = 5;

int main()
{
	int number = 3'672'777;
	ostringstream mystream;

	mystream << number;
	string result = mystream.str();
	cout << result << '\t' << typeid(result).name() << endl;

	return 0;
}
