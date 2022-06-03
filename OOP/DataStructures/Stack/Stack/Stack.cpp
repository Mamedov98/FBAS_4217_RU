#include <iostream>
#define MAX_SIZE 5  

template <typename T>
class stack
{
public:
	bool push(T data);
	T pop();
	bool is_empty();

	stack();
private:
	T arr[MAX_SIZE]{};
	T top;

};


template <typename T>
bool stack<T>::push(T data)
{
	if (this->top >= MAX_SIZE)
		return false;

	this->arr[++top] = data;
	return true;
}


template <typename T>
T stack<T>::pop()
{
	if (this->top < 0)
		return 0;

	T data = this->arr[this->top--];
	return data;
}

template <typename T>
bool stack<T>::is_empty()
{
	return this->top >= 0;
}

template <typename T>
stack<T>::stack()
{
	this->top = -1;
}


int main()
{
	stack<int> my_stack;

	if (my_stack.push(11))
		std::cout << 11 << "Succeeded" << std::endl;
	else
		std::cout << "StackOverflow" << std::endl;

	if (my_stack.push(22))
		std::cout << 22 << "Succeeded" << std::endl;
	else
		std::cout << "StackOverflow" << std::endl;

	if (my_stack.push(33))
		std::cout << 33 << "Succeeded" << std::endl;
	else
		std::cout << "StackOverflow" << std::endl;

	if (my_stack.push(44))
		std::cout << 44 << "Succeeded" << std::endl;
	else
		std::cout << "StackOverflow" << std::endl;

	if (my_stack.push(55))
		std::cout << 55 << "Succeeded" << std::endl;
	else
		std::cout << "StackOverflow" << std::endl;

	if (my_stack.push(66))
		std::cout << 66 << "Succeeded" << std::endl;
	else
		std::cout << "StackOverflow" << std::endl;

	if (my_stack.push(77))
		std::cout << 77 << "Succeeded" << std::endl;
	else
		std::cout << "StackOverflow" << std::endl;
	return 0;
}
