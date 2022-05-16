#include <iostream>
#include <cstring>
#include "string_operations.h"

using namespace std;

// Есть некоторый текст, найти и заменить слова, на введенные пользователем


int main() {

    char *text = new char[]{"way Way this wAy"};
    char *word = new char[] {"way"};
    char *new_word = new char[] {"road"};


    replace_by_word(text, word, new_word);

//    number_to_str(1234);

    return 0;
}
