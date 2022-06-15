#pragma once
#define MAX_SIZE 15

template <typename T>
class stack
{
public:
	bool push(T data);
	T* pop();
	bool is_empty();

	stack();
private:
	T arr[MAX_SIZE]{};
	int top;

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
T* stack<T>::pop()
{
	if (this->top < 0)
		return new T();

	T data = this->arr[this->top--];
	return &data;
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
