#include <iostream>

using namespace std;

#pragma region TernaryOperators
//
//bool isEven1(int number) {
//    if (number % 2 == 0) {
//        return true;
//    }
//    return false;
//}
//
//// Тернарные операторы
//
//bool isEven2(int number) {
//    return number % 2 == 0 ? true : false; // ? - if, : - else
//}
//
//int isEven3(int number) {
//    return 45;
//}

#pragma endregion


void print_arr(int arr[], const int length) {
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}


void selection_sort(int arr[], const int length) {
    int i{}, j{}, min{}, tmp{};

    for (i = 0; i < length - 1; i++) {
        min = i;
        for (j = i + 1; j < length; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
    }
        tmp = arr[min];
        arr[min] = arr[i];
        arr[i] = tmp;
    }
}


void insertion_sort(int arr[], int length)
{
    int i{}, j{}, key{};

    for (i = 1; i < length; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}




int main() {


    int arr[10]{7, 1, 6, 4, 8, 2, 4, 9, 2, 3};

    print_arr(arr, 10);
    selection_sort(arr, 10);
    print_arr(arr, 10);


    return 0;
}
