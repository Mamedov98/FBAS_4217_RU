#include "MyStr.h"
#include <iostream>
#include <string>
using namespace std;

char* create_string(const int length) {
    char* ptr = new char[length + 1]{};
    int i{};

//    gets(ptr); // Плохой способ

    fgets(ptr, length + 1, stdin); // хороший способ


// Способ нормальный, но длинный
//    while (i < length) {
//        cin >> ptr[i];
//        i++;
//    }
//    ptr[length] = '\0';

    return ptr;
}