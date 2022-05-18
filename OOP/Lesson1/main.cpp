#include <iostream>

struct Person {
    char *name;
    char *surname;
    int age;
//
//    Person() {
//        this->name = new char[]{"Rafiq"};
//        this->surname = new char[]{"Huseynzade"};
//        this->age = 15;
//    }
//
//    Person(char *name, char *surname) {
//        this->name = name;
//        this->surname = surname;
//        this->age = 18;
//    }
//
//    Person(char *name, char *surname, int age) {
//        this->name = name;
//        this->surname = surname;
//        this->age = age;
//    }
};


int main() {
    /*
     auto анонимный тип данных
     auto num = 5; // Плохо. Тип указан не явно и нам сложно читать код
     auto p1 = Person{}; // Хорошо, так как в правой части я вижу тип данных.
    */
#pragma region Part1
//
//    auto p1 = new Person{new char[]{"Elvin"}, new char[]{"Azimov"}};
//
//    std::cout << p1->name << std::endl <<
//              p1->surname << std::endl <<
//              p1->age << std::endl;
#pragma endregion
#pragma region Part2

//    auto p2 = new Person;
//
//    std::cout << p2->name << std::endl <<
//              p2->surname << std::endl <<
//              p2->age << std::endl;
#pragma endregion
#pragma region Part3

//    Person *p1 = new Person {new char[]{"Mamed"}, new char[]{"Kerimli"}, 21};
//
//    Person *p2 = new Person{};
//
//    Person *p3 = new Person {new char[]{"Mamed"}, new char[]{"Kerimli"}};
//
//    std::cout << p3->surname;

#pragma endregion
#pragma region Part4

//    Person test = Person {new char[] {"Elvin"}, new char[] {"Elvin"}, 20};
//    Person test = Person{new char[]{"Elvin"}, new char[]{"Elvin"}, 20};
//    Person test = Person{new char[]{"Elvin"}, new char[]{"Elvin"}};
//    Person test = Person{new char[]{"Elvin"}};
#pragma endregion



    return 0;
}
