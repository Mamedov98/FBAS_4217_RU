#include <iostream>
#include <vector>
using namespace std;


//template <typename T>
//class LinkedList
//{
//public:
//	LinkedList(T value)
//	{
//		this->value = value;
//	}
//
//	T value;
//	LinkedList* next = nullptr;
//
//	friend std::ostream& operator <<(std::ostream& out, const LinkedList<T>& list)
//	{
//		while (list.next != nullptr)
//		{
//			out << list.value;
//		}
//		return out;
//	}
//
//};



template <typename T>
class MyArray
{
public:
	MyArray(std::initializer_list<T> elements) {

		this->length = elements.size();

		auto* begin = elements.begin();

		arr = new T[length]{};

		int i = 0;
		while (i < length) {
			arr[i] = *begin;
			begin++;
			i++;
		}
	}

	friend std::ostream& operator << (std::ostream& out, const MyArray& data)
	{
		for (size_t i = 0; i < data.length; i++)
		{
			out << data.arr[i] << ' ';
		}
		return out;
	}

private:
	T* arr{};
	int length{};
};


int main()
{

	MyArray<int> a {1, 2, 3, 4};
	cout << a;

	return 0;
}