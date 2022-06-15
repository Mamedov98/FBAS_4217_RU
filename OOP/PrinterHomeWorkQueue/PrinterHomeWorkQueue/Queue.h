#pragma once
#include <iostream>

template <typename T>
class queue
{
public:
	queue() = default;

	queue(std::initializer_list<T> init)
	{
		this->size_ = init.size();
		this->arr_ = new T[this->size_]{};

		int j = 0;
		for (auto* i = init.begin(); i < init.end(); ++i, j++)
		{
			this->arr_[j] = *i;
		}
		this->top_ = this->arr_[0];
	}


	void push(const T value)
	{
		T* tmp = new T[this->size_ + 1];

		for (size_t i = 0; i < this->size_; i++)
			tmp[i] = this->arr_[i];

		delete[]this->arr_;

		++this->size_;
		this->arr_ = new T[this->size_];

		for (size_t i = 0; i < this->size_; i++)
			this->arr_[i] = tmp[i];

		this->arr_[this->size_ - 1] = value;
		delete[]tmp;

		this->top_ = this->arr_[0];
	}

	T pop()
	{
		T data = this->top_;

		T* tmp = new T[this->size_ - 1];

		for (size_t i = 0, j = 1; i < this->size_ - 1; ++i, ++j)
			tmp[i] = this->arr_[j];

		delete[]this->arr_;

		--this->size_;
		this->arr_ = new T[this->size_];

		for (size_t i = 0; i < this->size_; ++i)
			this->arr_[i] = tmp[i];

		this->top_ = this->arr_[0];

		delete[]tmp;
		return data;
	}

	friend std::ostream& operator <<(std::ostream& out, queue& data)
	{
		for (size_t i = 0; i < data.size_; ++i)
		{
			out << data.arr_[i] << ' ';
		}
		return out;
	}
private:
	T top_{};
	T* arr_{};
	size_t size_{};
};
