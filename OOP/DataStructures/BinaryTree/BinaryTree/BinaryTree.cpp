#include <iostream>
using namespace std;


template <typename T>
class BinaryTree
{
public:
	struct Node
	{
		Node() = default;
		Node(T value)
		{
			this->value = value;
		}
		T value{};
		Node* left{};
		Node* right{};
	};

	BinaryTree(std::initializer_list<T> list)
	{
		for (auto* i = list.begin(); i < list.end(); i++)
		{
			this->insert(*i);
		}
	}

	void insert(T value) {

		Node** current = &this->root;

		while (*current != nullptr)
		{
			Node& node = **current;
			if (value < node.value)
			{
				current = &node.left;
			}
			else if (value > node.value)
			{
				current = &node.right;
			}
			else
			{
				return;
			}
		}
		*current = new Node(value);
	}
	T search(T value)
	{
		Node** current = &this->root;

		while (*current != nullptr)
		{
			Node& node = **current;
			if (value < node.value)
			{
				current = &node.left;
			}
			else if (value > node.value)
			{
				current = &node.right;
			}
			else if(value == node.value)
			{
				Node& node = **current;
				return node.value;
			}
		}
		return 0;
	}

	friend std::ostream& operator <<(std::ostream& out, BinaryTree<T>& tree)
	{
		Node** current = &this->root;

		while (*current != nullptr)
		{
			Node& node = **current;
			cout << "Value" << node.value << endl
				<< "Left: " << node.left.value << endl
				<< "Right: " << node.right.value << endl;
		}
	}

	Node* root{};
private:
};

int main()
{
	/*
	BinaryTree<int>* myTree = new BinaryTree<int>();

	myTree->insert(50);
	myTree->insert(40);
	myTree->insert(45);
	myTree->insert(30);
	myTree->insert(35);
	myTree->insert(32);

	cout << myTree->search(19);
	*/

	/*
	BinaryTree<int>* myTree = new BinaryTree<int> {50, 40, 45, 30, 35, 32};

	cout << myTree->root->value << endl;
	cout << myTree->root->left->value << endl;
	cout << myTree->root->left->left->value << endl;
	cout << myTree->root->left->right->value << endl;
	cout << myTree->root->left->left->right->value << endl;
	cout << myTree->root->left->left->right->left->value << endl;
	*/




	return 0;
}
