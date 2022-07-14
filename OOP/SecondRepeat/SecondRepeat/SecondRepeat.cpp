#include <iostream>

using namespace std;

template <typename T>
class MyArray
{
public:
	MyArray(uint16_t length)
	{
		this.length = length;
		this->arr = new T[this->length]{};
	}

	MyArray(initializer_list<T> data)
	{
		this->length = data.size();
		this->arr = new T[this->length]{};

		int j{};
		for (auto* i = data.begin(); i < data.end(); ++i, ++j)
		{
			this->arr[j] = *i;
		}

	}

	friend ostream& operator << (ostream& out, MyArray& my_arr)
	{
		for (size_t i = 0; i < my_arr.length; i++)
		{
			out << my_arr.arr[i] << ' ';
		}
		return out;
	}

	T* begin()
	{
		return this->arr;
	}

	T* end()
	{
		return this->arr + this->length - 1;
	}
private:
	uint16_t length{};
	T* arr{};
};


class A
{
public:
	virtual void foo()
	{
		cout << "Foo from A" << endl;
	}
};

class B : public A
{
public:
	void foo() override 
	{
		cout << "Foo from B" << endl;
	}
};
int main()
{
	A* a = new B();

	a->foo();

	return 0;
}
