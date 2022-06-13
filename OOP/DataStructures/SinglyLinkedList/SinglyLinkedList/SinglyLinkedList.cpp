#include <iostream>
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

		for (auto *i = init.end() - 1; i >= init.begin(); --i)
			this->add_to_head(*i);
	}

	size_t get_size() const { return this->size_; }
	node* get_head() const { return this->head_; }
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
			out << cur_elem->value << endl;
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
	list<int> my_list {1, 2, 3, 4, 5};
	cout << my_list << endl;

	cout << "Head: " << my_list.get_head()->value << endl;
	cout << "Tail: " << my_list.get_tail()->value << endl;

	return 0;
}
