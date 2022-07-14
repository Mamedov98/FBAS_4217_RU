#include <iostream>

#pragma region VirtualDestructor
/*
 
class A
{
public:
	A() { std::cout << "A ctor" << std::endl; }
	~A() { std::cout << "A dector" << std::endl; }
};

class B
{
public:
	B() { std::cout << "B ctor" << std::endl; }
	virtual ~B() { std::cout << "B dector" << std::endl; }

	virtual void foo() = 0;
	A a{};
};

class C : public B
{
public:
	C() { std::cout << "C ctor" << std::endl; }
	~C() { std::cout << "C dector" << std::endl; }
	void foo() override { std::cout << "Foo"; }
};
 */
#pragma endregion

#pragma region PureVirtualDestructor
//
// class A
// {
// public:
// 	A() { std::cout << "A ctor" << std::endl; }
// 	~A() { std::cout << "A dector" << std::endl; }
// };
//
// class B
// {
// public:
// 	B() { std::cout << "B ctor" << std::endl; }
// 	virtual ~B() = 0;
//
// 	virtual void foo() = 0;
// 	A a{};
// };
//
// B::~B()
// {
// 	std::cout << "B dector" << std::endl;
// }
//
// class C : public B
// {
// public:
// 	C() { std::cout << "C ctor" << std::endl; }
// 	~C() { std::cout << "C dector" << std::endl; }
// 	void foo() override { std::cout << "Foo"; }
// };

#pragma endregion



int main()
{


	return 0;
}
