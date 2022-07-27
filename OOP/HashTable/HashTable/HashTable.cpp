#include <iostream>
#include <list>
#include <vector>
#include <cstdio>
#include <fstream>
using namespace std;


template <typename T>
class HashTable
{
public:
	HashTable(int num)
	{
		int size = getPrime(num);
		this->capacity = size;
		this->table = new list<int>[capacity];
	}

	void insertItem(int key, T data)
	{
		int index = hashFunction(key);
		this->table[index].push_back(data);
	}

	void deleteItem(int key)
	{
		int index = hashFunction(key);

		list<int>::iterator i;
		for (i = this->table[index].begin();
			i != this->table[index].end(); i++)
		{
			if (*i == key)
				break;
		}

		if (i != this->table[index].end())
			this->table[index].erase(i);
	}

	bool checkPrime(int num)
	{
		int i;
		if (num == 1 || num == 0)
		{
			return false;
		}
		for (i = 2; i < num / 2; i++)
		{
			if (num % i == 0)
			{
				return true;
			}
		}
		return true;
	}
	int getPrime(int num)
	{
		if (num % 2 == 0)
		{
			num++;
		}
		while (!checkPrime(num))
		{
			num += 2;
		}
		return num;
	}

	int hashFunction(int key)
	{
		return (key % this->capacity);
	}
	void displayHash()
	{
		for (int i = 0; i < capacity; i++)
		{
			cout << "table[" << i << "]";
			for (auto x : this->table[i])
				cout << " --> " << x;
			cout << endl;
		}
	}
private:

	int capacity{};
	list<T>* table{};
};


int main()
{

	int key[] = { 231, 321, 212, 321, 433, 262 };
	int data[] = { 123, 432, 523, 43, 423, 111 };

	int size = sizeof(key) / sizeof(key[0]);

	HashTable<int> h(size);

	for (int i = 0; i < size; i++)
		h.insertItem(key[i], data[i]);

	h.deleteItem(12);
	h.displayHash();


}
