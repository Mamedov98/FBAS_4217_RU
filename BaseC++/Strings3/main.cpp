#include <iostream>

using namespace std;

int main() {

//    const char *name = new char[]{"Elvin"}; // Heap
//    char name2[] = "Elvin"; // Stack
//    const char *name2 = "Elvin";
//    cout << name;


    char *name = new char[]{"ELVin"}; // Heap

#pragma region Replace1
//    int i = 0;
//
//    int replace_index = 3;
//
//    while (name[i] != '\0') {
//        if (i == replace_index) {
//            name[i] = 98;
//        }
//        i++;
//    }
//
//    cout << name;

#pragma endregion

#pragma region Replace2

    int i = 0;

    while (name[i] != '\0') {
        if (name[i] > 65 && name[i] < 90) {
            name[i] = (char)((int)name[i] + 32);
        }
        else {
            name[i] = (char)((int)name[i] - 32);
        }
        i++;
    }

    cout << name;

#pragma endregion
    return 0;
}
