#include <iostream>
#include <list>
#include <forward_list>
#include <set>
#include <map>

using namespace std;


// stl - standart template library 

#pragma region Akbers_Question

template <typename T>
class MyArr
{
public:

	MyArr() = default;

	MyArr(unsigned int size)
	{
		data = new T[size]{};
	}

	MyArr(initializer_list<T> init)
	{
		auto first = init.begin();
		auto end = init.end();
		this->size = init.size();
		int i{};

		this->data = new T[this->size]{};

		while (first != end)
		{
			*(this->data + i) = *first;
			++first;
			++i;
		}
	}


	// Functor - overloading of operator ()

	int operator() (T data)
	{
		for (size_t i = 0; i < this->size; i++)
		{
			if (this->data[i] == data)
			{
				return i;
			}
		}
	}

	T* begin()
	{
		return this->data;
	}

	T* end()
	{
		return this->data + this->size;
	}

	T* data{};
	size_t size{};
};

#pragma endregion

int main()
{
#pragma region Containers
#pragma region List

	//list<int> mylist{ 1, 2, 3, 4, 5 };

#pragma endregion

#pragma region Forward_List

	//forward_list<int> list{ 1, 2, 3, 4, 5 };

#pragma endregion

#pragma region Set

	set<int> mySet{ 4, 1, 2, 6, 0, -5 }; // Ordered Container

	//cout << mySet[0];

	//for (auto i : mySet)
		//cout << i << ' ';

	/*mySet.insert(15);
	mySet.insert(-15);

	for (auto i : mySet)
	cout << i << ' ';*/


	/*std::pair<std::set<int>::iterator, bool> it = mySet.emplace(3);

	cout << it.second << endl;

	std::pair<std::set<int>::iterator, bool> it2 = mySet.emplace(3);

	cout << it2.second << endl;


	for (auto i : mySet)
		cout << i << ' ';*/



#pragma endregion

#pragma region MultiSet

		//multiset<int> myMultiSet{ 4, 1, 2, 6, 0, -5 };

		//for (auto i : myMultiSet)
		//{
		//	cout << i << ' ';
		//}

		//cout << endl;

		//myMultiSet.insert(4);
		//myMultiSet.insert(4);
		//myMultiSet.insert(4);

		//for (auto i : myMultiSet)
		//{
		//	cout << i << ' ';
		//}

#pragma endregion

#pragma region Map

	/*map<string, int> myMap{ {"First", 1}, {"Second", 2}};
	set<pair<string, int>> a;


	for (auto item : myMap)
	{
		cout << item.first << '\t' << item.second << endl;
	}*/


#pragma endregion

	MyArr<int> arr({1, 2, 3, 4, 5});

	for (auto item : arr)
	{
		cout << item << ' ';
	}
	cout << endl;

	int index = arr(3);

	cout << index;
}
