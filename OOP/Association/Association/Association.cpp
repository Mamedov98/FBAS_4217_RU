#include <iostream>

using namespace std;

#pragma region Association

//class Transport
//{
//public:
//	Transport() = default;
//
//	Transport(char *make, char *model, int year)
//	{
//		this->make = make;
//		this->model = model;
//		this->year = year;
//	}
//
//	~Transport()
//	{
//		delete[]make;
//		delete[]model;
//	}
//
//	void move()
//	{
//		cout << "Transport moves";
//	}
//private:
//
//	char* make{};
//	char* model{};
//	int year{};
//};
//
//class Car : public Transport
//{
//public:
//	Car() = default;
//
//	Car(float volume)
//	{
//		this->volume = volume;
//	}
//
//	void foo()
//	{
//		cout << "Foo from Car" << endl;
//	}
//private:
//	float volume{};
//};
//
//
//int main()
//{
//	Car a;
//
//	a.foo();
//	a.move();
//
//	return 0;
//}

#pragma endregion


// Inheritance - Does obj1 equals obj2
// Aggregation - Does obj1 consists obj2
// Composition - Does obj1 must consist obj2

#pragma region Composition 
//
//class Credentials
//{
//private:
//	std::string username;
//	std::string password;
//	std::hash<string> token;
//};
//
//class AuthorizeClient
//{
//public:
//	AuthorizeClient(Credentials* cred)
//	{
//		this->credentials = cred;
//	}
//	~AuthorizeClient()
//	{
//		delete this->credentials;
//	}
//private:
//	Credentials* credentials;
//};

#pragma endregion

#pragma region Aggregation

//class Item
//{
//public:
//	std::string name{};
//	std::string manufacturer{};
//	size_t count{};
//};
//
//class Microwave : public Item
//{
//public:
//	size_t power{};
//};
//
//class Inventory
//{
//public:
//	Microwave* micro;
//};
//int main()
//{
//	Microwave* new_micro = new Microwave();
//	Inventory* stock = new Inventory();
//
//	stock->micro = new_micro;
//
//	return 0;
//}

#pragma endregion


