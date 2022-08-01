#include <iostream>
#include <string>
#include <vector>
#include <time.h>

using namespace std;

struct MyTime
{

	MyTime()
	{
		tm local_time;

		time_t now = time(0);

		localtime_s(&local_time, &now);

		this->year = local_time.tm_year + 1900;
		this->month = local_time.tm_mon + 1;
		this->day = local_time.tm_mday;
	}

	MyTime(uint16_t year, uint8_t month, uint8_t day)
	{
		this->year = year;
		this->month = month;
		this->day = day;
	}


	friend std::ostream& operator << (std::ostream& out, MyTime& object)
	{
		out
			<< "Year: " << object.year << endl
			<< "Month: " << object.month << endl
			<< "Day: " << object.day << endl;

		return out;
	}

	uint16_t year{};
	uint16_t month{};
	uint16_t day{};
};


class Car
{
public:
	Car() = default;

	Car(string make, string model, uint16_t volume)
	{
		this->make = make;
		this->model = model;
		this->volume = volume;
	}

	friend std::ostream& operator << (std::ostream& out, Car& object)
	{
		out
			<< "Make: " << object.make << endl
			<< "Model: " << object.model << endl
			<< "Volume: " << object.volume + 0 << endl
			<< object.prod_time << endl;

		return out;
	}
	friend void foo();
	friend class ShowRoom;

private:
	string make{ "Mercedes" };
	string model{ "CLS 55 AMG" };
	uint16_t volume{ 5500 };
	MyTime prod_time{};
};


void foo()
{
	Car car;

	car.make = "Mercedes";
}

//void foo2()
//{
//
//	Car car;
//
//	car.make = "Mercedes";
//}

class ShowRoom
{
	ShowRoom()
	{
		this->collection = new std::vector<Car>(15);
	}
	ShowRoom(uint32_t budget) : ShowRoom()
	{
		this->budget = budget;
	}
	~ShowRoom()
	{
		delete[] collection;
	}

	void append_car()
	{
		Car car;

		std::cin >> car.make;

		this->collection->push_back(car);
	}
private:
	std::vector<Car> *collection;
	uint32_t budget{ 5'000'000 };
};

int main()
{

	Car* mb = new Car();




	return 0;
}

