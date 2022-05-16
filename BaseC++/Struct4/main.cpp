#include <iostream>

using namespace std;

enum Leaf {
    RED, YELLOW, GREEN
};

struct Tree {
    char *name{};
    unsigned int year{};
    unsigned int height{};
    Leaf leaves_color{};

    Tree(char *name, unsigned int year, unsigned int height, Leaf leaf_color) {
        this->name = name;
        this->year = year;
        this->height = height;
        this->leaves_color = leaf_color;
    }
};

//Tree create_tree(char *name, unsigned int year, unsigned int height, Leaf leaf_color) {
//    Tree tmp{name, year, height, leaf_color};
//
//    return tmp;
//}


void edit_tree(Tree *tree) {
    unsigned int choice{};
    cout
        << "Enter choice: " << endl
        << "1. Name" << endl
        << "2. Year" << endl
        << "3. Height" << endl
        << "4. Leaf Color" << endl;
    cin >> choice;

    cin.ignore();

    switch (choice) {
        case 1:
            char *new_name = new char[30]{};
            cout << "Enter new name: " << endl;

            gets_s(new_name, 30);
            tree->name = new_name;
            break;
    }
}


int main() {

//    Tree chinar {new char []{"Xan cinar"}, 492, 35, Leaf::RED}; // Унифицированная инициализация

    auto* my_tree = new Tree(new char[]{"Chinar"}, 492, 35, Leaf::GREEN);

    cout << my_tree->name << endl;

    edit_tree(my_tree);

    cout << my_tree->name << endl;

    return 0;
}
