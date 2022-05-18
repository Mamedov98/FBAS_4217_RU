#include "Person.h"

Person::Person() {
    this->name = new char[]{"Rafiq"};
    this->surname = new char[]{"Huseynzade"};
    this->age = 15;
}

Person::Person(char *name, char *surname, int age) {
    this->name = name;
    this->surname = surname;
    this->age = age;
}

Person::Person(char *name, char *surname, int age, float salary) {
    this->name = name;
    this->surname = surname;
    this->age = age;
}

void Person::change_name(char *new_name) {
    this->name = new_name;
}

char *Person::getName() const {
    return name;
}

void Person::setName(char *name) {
    Person::name = name;
}

char *Person::getSurname() const {
    return surname;
}

void Person::setSurname(char *surname) {
    Person::surname = surname;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}
