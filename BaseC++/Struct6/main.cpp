#include <iostream>

using namespace std;

struct Person {
    Person() = default;

    Person(char *name, char *surname, int age) {
        this->name = name;
        this->surname = surname;
        this->age = age;
    }

    void change_surname(char *new_surname) {
        surname = new_surname;
    }

    char *name{};
    char *surname{};
    int age{};

};

struct Teacher : Person {
    float salary;
};

int main() {

    auto *p1 = new Person(new char[]{"Elvin"}, new char[]{"Azimov"}, 20);
    p1->change_surname(new char[]{"Azim"});

    auto *t1 = new Teacher;


    return 0;
}
