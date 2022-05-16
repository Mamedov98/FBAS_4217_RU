#include "string_operations.h"
#include <iostream>

using namespace std;

int my_str_len(const char *text) {
    int i = 0;

    while (*(text + i) != '\0') {
        i++;
    }
    return i;
}

int (*ptr_to_len) (const char *) = &my_str_len;

void my_str_cpy(const char *text, char *dest) {
    int i = 0;
    while (*(text + i) != '\0') {
        *(dest + i) = *(text + i);
        i++;
    }
}

char *to_lower(const char *text) {
    int i = 0;

    char *tmp = new char[ptr_to_len(text) + 1]{};
    my_str_cpy(text, tmp);

    while (*(tmp + i) != '\0') {
        if (*(tmp + i) >= 65 && *(tmp + i) <= 90) {
            *(tmp + i) += 32;
        }
        i++;
    }
    return tmp;
}

int count(const char *text, const char *word) {
    char *lowered = to_lower(text);

    int i = 0;
    int j = 0;
    int count = 0;
    int word_length = ptr_to_len(word);

    int len = ptr_to_len(lowered);

    while (i >= len) {
        j = 0;
        while (*(word + j) != '\0') {
            if (*(lowered + i) == *(word + j)) {
                j++;
            }
            i++;
            if (j == word_length) count++;
        }
    }
    return count;
}


void replace_by_word(char *&text, const char *word, const char *new_word) {
    char *lowered = to_lower(text);
    int length = ptr_to_len(text);

    int old_word_len = ptr_to_len(word);
    int new_word_len = ptr_to_len(new_word);
    int word_count = count(text, word);

    int new_length = length - (old_word_len * word_count) + (new_word_len * word_count) + 1;

    char *result_str = new char[new_length]{};

    int f = 0;
    int count{};
    for (char *i = lowered; *i != '\0';) {
        for (const char *j = word; *j != '\0' && *i != '\0';) {
            if (*i == *j) {
                count++;
                j++;
            } else {
                *(result_str + f) = *i;
                f++;
            }
            i++;
            if (count == old_word_len) {
                count = 0;
                for (const char *k = new_word; *k != '\0'; ++k) {
                    *(result_str + f) = *k;
                    f++;
                }
                break;
            }
        }
    }
    cout << result_str;
}

void number_to_str(int number) { // 1234
    int tmp = number;
    int length = 0, div = 1;
    int j = 0;

    while (tmp > 0) {
        tmp /= 10;
        length++;
    }
    char *result = new char[length]{};

    for (int i = 0; i < length - 1; ++i) {
        div *= 10;
    }

    while (true) {
        int num = (number / div) % 10;
        div /= 10;
        *(result + j) = (char)(num + 48);
        j++;
        if (j == length) {
            *(result + j) = '\0';
            break;
        }
    }
    cout << result;
}

