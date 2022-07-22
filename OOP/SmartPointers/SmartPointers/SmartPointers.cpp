#include <iostream>
using namespace std;

template <typename T>
class SmartPointer
{
public:
	SmartPointer() = default;

	SmartPointer(T* value)
	{
		this->data = value;
	}
	~SmartPointer()
	{
		if (data != nullptr)
		{
			data = nullptr;
		}
		else
		{
			delete data;
		}
	}

	SmartPointer(SmartPointer& other)
	{
		cout << "Copy constructor started" << endl;
		this->data = other.data;
		cout << "Copy constructor ended" << endl;
	}
	void operator = (T* other)
	{
		cout << "Equal operator started" << endl;
		this->data = other;
		cout << "Equal operator ended" << endl;
	}

	void operator = (SmartPointer& other)
	{
		cout << "Equal operator started" << endl;
		this->data = other.data;
		cout << "Equal operator ended" << endl;
	}

	T* data{};
};


int main()
{

#pragma region MainExample
	/*int* number = new int(5);

	cout << "Before scope" << endl;
	{
		SmartPointer<int> myPtr;
		myPtr = number;
	}
	cout << "After scope" << endl;
	cout << *number;*/
#pragma endregion

#pragma region SecondExample
	/*SmartPointer<int> ptr1(new int(5));
	SmartPointer<int> ptr2 = ptr1;

	ptr2 = (new int(10));

	ptr2 = ptr1;*/
#pragma endregion

#pragma region UniquePtr 
	// Уникальный указатель, который хранит адресс только одного элемента. 

	//int* num = new int(5);

	//unique_ptr<int> ptr1(num);

	//cout << ptr1 << '\t' << *ptr1 << endl;
	//cout << ptr1.get() << '\t' << *(ptr1.get()) << endl;

	//// ptr = new int(10); // Не сработает 

	//unique_ptr<int> ptr2(new int(10));

	//int* tmp = ptr2.get();
	//ptr1 = move(ptr2);

#pragma endregion

#pragma region SharedPtr

	//shared_ptr<int> ptr1(new int(5));
	//shared_ptr<int> ptr2(new int(10));

	//cout << ptr1 << '\t' << *ptr1 << endl;
	//cout << ptr2 << '\t' << *ptr2 << endl;

	/*ptr1.reset();
	ptr2.reset();

	cout << ptr1 << '\t';
	cout << ptr2 << '\t';*/

	//ptr1.swap(ptr2);

	//cout << ptr1 << '\t' << *ptr1 << endl;
	//cout << ptr2 << '\t' << *ptr2 << endl;


	//cout << ptr1.use_count() << endl;
	//shared_ptr<int> ptr3 = ptr1;
	//cout << ptr1.use_count() << endl;
	//
	//
	//cout << ptr3.use_count() << endl;



#pragma endregion

#pragma region WeakPtr


	/*shared_ptr<int> ptr1(new int(5));
	weak_ptr<int> ptr2(ptr1);

	cout << ptr2.expired() << endl;


	ptr1.~shared_ptr();

	cout << ptr2.expired() << endl;*/




#pragma endregion

#pragma region AutoPtr

	/*auto_ptr<int> ptr(new int(5));

	cout << ptr.get() << '\t' << *ptr;

	unique_ptr<int> ptr1(auto_ptr<int>(new int(5)));
	shared_ptr<int> ptr2(auto_ptr<int>(new int(5)));
	weak_ptr<int> ptr3(ptr2);*/

#pragma endregion
	
	return 0;
}
