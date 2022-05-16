#include <iostream>
#define PI 3.14
#define SUM(x, y) x + y
#define EVEN(z) (z % 2 == 0)
#define chislo int
#define vivedisummu(x, y) cout << SUM(x, y)


using namespace std;

chislo myStrLen(char *text) {
    int length{};
    int i{};

    while (*(text + i) != '\0') {
        if (*(text + i) >= 48 && *(text + i) <= 57)
            length++;
        i++;
    }
    return length - 1;
}

int stringToNumber(char *text) {

    int number{};
    int i{};
    int j{};
    int length = myStrLen(text);
    char *tmp_text = new char[length + 1]{};

    while (*(text + i) != '\0')
    {
        if (*(text + i) >= 48 && *(text + i) <= 57) {
            *(tmp_text + j) = *(text + i);
            j++;
        }
        i++;
    }

    i = 0;
    j = 1;

    while (length >= 0) {
        if (*(tmp_text + length) >= 48 && *(tmp_text + length) <= 57) {
            int tmp = (int) *(tmp_text + length) - 48;
            number += tmp * j;
            j *= 10;
        }
        length--;
    }
    delete []tmp_text;
    return number;


    return 0;
}

int charToNumber(char *text) {
    int number = 0;
    if (*text >= 48 and *text <= 57) {
        number = (int) (*text) - 48;
    }
    return number;
}

int main() {

#pragma  region OneNumber
//    char num = char('9');
//    char *ptr_num = &num;
//    int result = charToNumber(ptr_num);
//    cout << result;
#pragma endregion

//    char *txt = new char[]{"E1V2L3"};
//
//    int result = stringToNumber(txt);
//
//    cout << result;

//    cout << SUM(5, 6) << endl;
//    cout << EVEN(3);

    vivedisummu(5, 6);
    return 0;
}
