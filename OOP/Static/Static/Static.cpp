#include <iostream>

using namespace std;

#pragma region Part1

//void foo() {
//	static int* a = new int(0);
//	(*a)++;
//	cout << *a;
//}
//
//int main()
//{
//	foo();
//	foo();
//	foo();
//	foo();
//}

#pragma endregion


#pragma region Part2
//
// class Circle
// {
// public:
//
// 	static double pi;
// };
//
//
//
// int main()
// {
// 	Circle c;
//
//
//
// 	return 0;
// }

#pragma endregion

class A
{
public:
	A() { cout << "Ctor created" << endl; }
	~A() { cout << "DeCtor created" << endl; }
};


void foo()
{
	static A a{};
}

void foo2()
{
	A a{};
}


int main()
{
	cout << "Main" << endl;
	foo();
	foo();
	foo();
	foo();
	foo();
	foo();

	/*foo2();
	foo2();
	foo2();
	foo2();
	foo2();
	foo2();
	foo2();*/
	cout << "End of Main" << endl;
	return 0;
}
