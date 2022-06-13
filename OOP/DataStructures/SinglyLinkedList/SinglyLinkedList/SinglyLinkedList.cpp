#include <iostream>
using namespace std;


template <typename T>
class List
{
public:
	struct Node
	{
		T value{};
		Node* next{};
	};

	List(size_t size)
	{
		int i = 1;

		this->size = size;
		this->head = new List<T>::Node;

		cout << "Enter " << i << "element: ";
		cin >> this->head->value;

		Node* cur_elem = this->head;
		i++;

		while (i <= size)
		{
			cout << "Enter " << i << "element: ";
			cur_elem->next = new List<T>::Node;

			cin >> cur_elem->next->value;
			cur_elem = cur_elem->next;

			if (i == size)
			{
				this->tail = new List<T>::Node;
				this->tail = cur_elem;
			}
			i++;
		}
	}


	friend ostream& operator<<(ostream& out, List<T>& list)
	{
		Node* cur_elem = list.head;
		while (cur_elem != nullptr)
		{
			out << cur_elem->value << endl;
			cur_elem = cur_elem->next;
		}
		return out;
	}

	size_t get_size() { return this->size; }
	Node* get_head() { return this->head; }
	Node* get_tail() { return this->tail; }

private:
	Node* head{};
	Node* tail{};
	size_t size;
};


int main()
{
	List<int> my_list(3);
	cout << my_list << endl;


	cout << "Head: " << my_list.get_head()->value << endl;
	cout << "Tail: " << my_list.get_tail()->value << endl;

	return 0;
}
