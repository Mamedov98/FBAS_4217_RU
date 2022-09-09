#include <iostream>
#include <string>
#include <iterator>
using namespace std;


template <typename T>
class MyArray
{
public:
	MyArray(int size)
	{
		arr = new T[size]{};
		this->length = size;
		for (size_t i = 0; i < size; i++)
		{
			cout << "Enter: " << i + 1 << "element: ";
			cin >> arr[i];
			cout << endl;
		}
	}

	MyArray(std::initializer_list<T> init)
	{
		this->length = init.size();
		arr = new T[this->length]{};


		auto* j = init.begin();

		for (size_t i = 0; i < this->length; i++)
		{
			arr[i] = *j;
			j++;
		}
	}

	void print_arr()
	{
		for (size_t i = 0; i < this->length; i++)
		{
			cout << arr[i] << endl;
		}
	}
	
	
	T* begin()
	{
		return this->arr;
	}
	
	T* end()
	{
		return this->arr + this->length;
	}

	

private:
	T* arr{};

	int length;
};


struct Fraction
{
	Fraction(float num, float denum)
	{
		this->num = num;
		this->denum = denum;
	}
	
	Fraction* operator+ (Fraction other)
	{
		return new Fraction(this->num + other.num, this->denum + other.denum);
	}
	
	float num;
	float denum;
};

int main()
{

	//std::string name {"Elvin"};
	//cout << name;

#pragma region WithoutInit
	//MyArray<int> arr(10);
	//arr.print_arr();
#pragma endregion

#pragma region InitializerList
	//MyArray<int> arr{ 1, 2, 3, 4, 5 };

	//arr.print_arr();
#pragma endregion


	MyArray<int> arr{ 1, 2, 3,4, 5 };

	for (auto i: arr)
	{
		cout << i << ' ';
	}


	return 0;
}