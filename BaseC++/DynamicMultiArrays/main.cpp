#include <iostream>
using namespace std;

#pragma region QuestionByFidan

/*
int main() {

    int len1 = 5;
    int len2 = 5;
    int count = 0;

    int *arr1 = new int[len1]{1, 2, 3, 4, 5};
    int *arr2 = new int[len2]{2, 3, 6, 7, 8};

    for (int i = 0; i < len1; ++i) {
        for (int j = 0; j < len2; ++j) {
            if (arr1[i] == arr2[j]) {
                count++;
                break;
            }
        }
    }

    int *tmp_arr = new int[len1]{};
    int *new_arr = new int[len1 - count]{};


    for (int i = 0; i < len1; ++i) {
        for (int j = 0; j < len2; ++j) {
            if (arr1[i] != arr2[j]) {
                tmp_arr[i] = arr1[i];
            } else {
                j = 0;
                i += 1;
            }
        }
    }

    for (int i = 0, j = 0; i < len1 && j < (len1 - count); ++i) {
        if (tmp_arr[i] != 0) {
            new_arr[j] = tmp_arr[i];
            ++j;
        }
    }

    for (int i = 0; i < len1 - count; ++i) {
        cout << new_arr[i] << ' ';
    }

    delete[] arr1;
    delete[] arr2;
    delete[] tmp_arr;

    return 0;
}
*/

#pragma endregion


int main() {

//    int *num1 = new int(5);
//    int **p_num1 = &num1;
//
//    cout << "Value of num1: " << num1 << endl
//    << "Address of num1: " << &num1 << endl
//    << "Value of p_num1: " << p_num1 << endl
//    << "Dereference of Value: " << *p_num1 << endl
//    << "Dereference of reference in p_num1: " << **p_num1 << endl;


int **arr = new int*[2];
int length = 2;

arr[0] = new int[length]{1, 2};
arr[1] = new int[length]{ 3, 4};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    length = 3;
    arr[0] = new int[length]{1, 2, 4};
    arr[1] = new int[length]{ 3, 4, 5};

    return 0;
}