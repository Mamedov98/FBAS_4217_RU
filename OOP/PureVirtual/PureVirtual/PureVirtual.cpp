#include <iostream>
using namespace std;


class Transport abstract
{
public:
	virtual void move() = 0;

protected:
	std::string make;
	std::string model;
};


class Car : public Transport
{
public:
	void move() override {
		std::cout << "Car moving..." << std::endl;
	}
};


class Scooter : public Transport
{
public:
	void move() override {
		std::cout << "Scooter moving..." << std::endl;
	}
};


int main()
{
	Car c1;
	Scooter s1;

	c1.move();
	s1.move();


	return 0;
}
