#include <iostream>
using namespace std;
// 1. Указатели
// 2. Передача указателей в функцию
// 3. Оператор New, Delete
// 4. Динамические массивы

#pragma region Part1

//void foo(int *num) {
//    *num = 10;
//}
//
//
//int main() {
//
//    int num = 1;
//    int *p_num = &num; // Pointer to variable num is address of num
//
//    cout << *p_num;
//
//    foo(p_num);
//
//    cout << *p_num;
//
//    return 0;
//}

#pragma endregion

#pragma region Part2

//void print_arr(int arr[], const int length) { // int *arr
//    for (int i = 0; i < length; ++i) {
//        cout << arr[i] << ' ';
//    }
//    cout << endl;
//}
//
//
//void print_arr2(int *arr, const int length) {
//    for (int i = 0; i < length; ++i) {
//        cout << *(arr + i) << ' ';
//    }
//    cout << endl;
//}
//
//int main() {
//
////    int arr[5]{};
////    cout
////            << arr     << ' ' << *arr<< endl
////            << arr + 1 << ' ' << *(arr + 1) << endl
////            << arr + 2 << ' ' << *(arr + 2) << endl
////            << arr + 3 << ' ' << *(arr + 3) << endl
////            << arr + 4 << ' ' << *(arr + 4) << endl;
//
//    int arr[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
//    print_arr(arr, 10);
//
//}

#pragma endregion

#pragma region Part3

void create_arr(int *&arr, const int length) {
    arr = new int[length]{};

    for (int i = 0; i < length; ++i) {
        *(arr + i) = i + 1;
    }
}

void print_arr(int *arr, const int length) {
    for (int i = 0; i < length; ++i) {
        cout << *(arr + i) << ' ';
    }
}


int *create_arr2(const int length) {
    int *tmp_arr = new int[length]{};

    for (int i = 0; i < length; ++i) {
        *(tmp_arr + i) = i + 1;
    }
    return tmp_arr;
}
void append_to(int *&arr, const int length, int count) {
    int new_length = length + count;
    int *tmp_arr = new int[new_length]{};

    for (int i = 0; i < length; ++i) {
        *(tmp_arr + i) = *(arr + i);
    }

    for (int i = length; i < new_length; ++i) {
        cout << "Enter new element: ";
        cin >> *(tmp_arr + i);
    }
    delete[]arr;
    arr = tmp_arr;
}

int main() {
/*
    int *arr = nullptr; // the same as int *arr{}
    create_arr(arr, 10);
*/

//    int *arr = create_arr2(10);
//    append_to(arr, 10, 5);
//    print_arr(arr, 15);

    int *arr;
    create_arr(arr, 10);
    print_arr(arr, 10);


    return 0;
}


#pragma endregion