#include <iostream>

using namespace std;

//inline float addition(float num1=5.5f, float num2=3.3f){
//    return num1 + num2;
//}

//template <typename T>
//inline T addition(T num1, T num2){
//    return num1 + num2;
//}

#pragma region Part1
//void create_arr(int *&arr, const int length) {
//    arr = new int[length];
//    for (int i = 0; i < length; ++i) {
//        *(arr + i) = i;
//    }
//}
//
//
//void print_arr(int *arr, const int length) {
//    for (int i = 0; i < length; ++i) {
//        cout << *(arr + i) << ' ';
//    }
//    cout << endl;
//}
//
//
//int main() {
//
//    int *arr{};
//    create_arr(arr, 10);
//    print_arr(arr, 10);
//
//    return 0;
//}
//


#pragma endregion
#pragma region Part2


int* create_arr(const int length) {
    int* arr = new int[length];

    for (int i = 0; i < length; ++i) {
        *(arr + i) = i + 1;
    }
    return arr;
}


void print_arr(int *arr, const int length) {
    for (int i = 0; i < length; ++i) {
        cout << *(arr + i) << ' ';
    }
    cout << endl;
}

void test(int* arr, const int length, int& sum, int& multiple) {

    for (int i = 0; i < length; ++i) {
        sum += *(arr + i);
    }

    for (int i = 0; i < length; ++i) {
        multiple *= *(arr + i);
    }
}

void test(int* arr, const int length, int* sum, int* multiple) {

    for (int i = 0; i < length; ++i) {
        *sum += *(arr + i);
    }

    for (int i = 0; i < length; ++i) {
        *multiple *= *(arr + i);
    }
}

int main() {

    int *arr = create_arr(10);

    int summa{};
    int proiz = 1;

    test(arr, 10, summa, proiz);
//    test(arr, 10, &summa, &proiz);

    cout << summa << ' ' << proiz << endl;

    return 0;
}

#pragma endregion

