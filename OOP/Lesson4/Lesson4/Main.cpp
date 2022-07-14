#include "Person.h"
#include <iostream>
using namespace std;


class Coordinates
{
public:
	Coordinates() = default;
	Coordinates(uint16_t x, uint16_t y)
	{
		this->x = x;
		this->y = y;
	}

	Coordinates* operator() (Coordinates *first, Coordinates *second) const
	{
		return new Coordinates((first->x + second->x), (first->y + second->y));
	}

	uint16_t x{};
	uint16_t y{};
};



int main() {

	Coordinates a(15, 15);
	Coordinates b(15, 15);

	Coordinates* c = a(&a, &b);

	cout << c->x << ' ' << c->y << endl;

}


