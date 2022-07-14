#include <iostream>
#include <time.h>
#include "UserExceptions.h"
using namespace std;




template <typename T>
class list
{
public:
	struct node
	{
		T value{};
		node* next{};

		node() {  }
		node(T value, node* next)
		{
			this->value = value;
			this->next = next;
		}
	};

	list() = default;
	explicit list(size_t size)
	{
		int i = 1;

		this->size_ = size;
		this->head_ = new list<T>::node;

		cout << "Enter " << i << "element: ";
		cin >> this->head_->value;

		node* cur_elem = this->head_;
		i++;

		while (i <= size)
		{
			cout << "Enter " << i << "element: ";
			cur_elem->next = new list<T>::node;

			cin >> cur_elem->next->value;
			cur_elem = cur_elem->next;

			if (i == size)
			{
				this->tail_ = new list<T>::node;
				this->tail_ = cur_elem;
			}
			i++;
		}
	}

	list(std::initializer_list<T> init)
	{
		this->size_ = init.size();
		this->tail_ = new node(*(init.end() - 1), nullptr);

		for (auto* i = init.end() - 1; i >= init.begin(); --i)
			this->add_to_head(*i);
	}

	size_t get_size() const { return this->size_; }
	node* get_head() const {
		if (this->head_)
		{
			return this->head_;
		}
		throw NoHeadInitException("Head is not defined...");
	}
	node* get_tail() const { return this->tail_; }

	void add_to_head(T value)
	{
		auto* new_node = new node(value, this->get_head());
		this->head_ = new_node;
	}
	void add_to_tail(T value)
	{
		auto* new_node = new list<T>::node(value, nullptr);
		this->tail_->next = new_node;
		this->tail_ = new_node;
	}

	friend ostream& operator<<(ostream& out, list<T>& list)
	{
		node* cur_elem = list.head_;
		while (cur_elem != nullptr)
		{
			out << cur_elem->value << ' ';
			cur_elem = cur_elem->next;
		}
		return out;
	}

private:
	node* head_{};
	node* tail_{};
	size_t size_{};
};


int main()
{
	list<int> mylist;

	try
	{
		mylist.get_head();
	}
	catch (std::exception ex)
	{
		cerr << ex.what();
	}

	return 0;
}
