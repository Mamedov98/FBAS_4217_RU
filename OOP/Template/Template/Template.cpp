#include <iostream>
#include <vector>


template <typename T>
class Myarray
{
public:
	Myarray(T test)
	{
		this->test = new T[size]{};
	}


	T get_test()
	{
		return this->test;
	}

private: 
	T* test;
	unsigned int size = 10;
};


int main()
{
	Myarray<int> arr(5);
	

	int* arr = new int[10]{ 1, 2 };
	return 0;
}
