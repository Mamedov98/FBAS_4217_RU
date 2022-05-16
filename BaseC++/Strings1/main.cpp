#include <iostream>

using namespace std;

// Строки - но это не то, о чем вы думаете
int main() {

#pragma region IntroductionToNullTerminator
////    const char arr[] = "Elvin";
//      const char arr[] = {'E', 'l', 'v', 'i', 'n'};
//
//    int i = 0;
//    while (arr[i] != '\0'){
//        cout << (int)arr[i] << endl;
//        i += 1;
//    }
//    cout << (int)arr[i] << endl;

#pragma endregion

#pragma region AddressOfChars
//char *arr = new char[]{'E', 'l', 'v', 'i', 'n', '\0'};
//
//    int i = 0;
//    while (arr[i] != '\0'){
//        cout << arr[i] << endl;
//        i += 1;
//    }
//    cout << arr[i] << endl;

//    char *name = new char[]{"Elvin"};
//    cout << name << endl;
//    cout << (int*) &name[0];

#pragma endregion

#pragma region Replace
//    char *name = new char[]{"Elvin"};
//    char character{};
//    char replace{};
//    cout << "Enter char for replace: ";
//    cin >> character;
//
//    int i = 0;
//    while (name[i] != '\0') {
//        if (name[i] == character) {
//            cout << "Enter new character: ";
//            cin >> replace;
//            name[i] = replace;
//        }
//        i++;
//    }
//    cout << name;
#pragma endregion

#pragma region AppendoChar
//    char *name = new char[]{"Elvin"};
//    char *text_for_append{};
//    char *tmp{};
//    int length{};
//    int length_for_append{};
//    int i{};
//    int j{};
//
//    while (name[i] != '\0') {
//        length++;
//        i++;
//    }
//    i = 0;
//
//    cout << "Enter length of text for append...";
//    cin >> length_for_append;
//    text_for_append = new char[length_for_append]{};
//
//    while (i != length_for_append) {
//        cin >> text_for_append[i];
//        i++;
//    }
//    text_for_append[i] = '\0';
//    i = 0;
//
//    tmp = new char[length + length_for_append]{};
//
//    while (name[i] != '\0') {
//        tmp[i] = name[i];
//        i++;
//    }
//
//    while (text_for_append[j] != '\0') {
//        tmp[i] = text_for_append[j];
//        i++;
//        j++;
//    }
//    tmp[i] = '\0';
//    i = 0;
//
//    name = new char[length_for_append + length]{};
//
//    while (tmp[i] != '\0') {
//        name[i] = tmp[i];
//        i++;
//    }
//    name[i] = '\0';
//
//    delete tmp;
//    delete text_for_append;
//
//    cout << name;
#pragma endregion

    return 0;
}
