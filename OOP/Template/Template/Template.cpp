#include <iostream>
#include <vector>

template <typename T>
class Myarray
{
public:
	Myarray(T test)
	{
		this->test = test;
	}


	T get_test()
	{
		return this->test;
	}

private: 
	T test;
};


int main()
{
	Myarray<int> arr(5);
	

	int* arr = new int[10]{ 1, 2 };
	return 0;
}
