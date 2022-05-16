#include <iostream>

using namespace std;
// Даны два массива. Надо собрать в третий массив одинаковые элементы.

int main() {

#pragma region Odinakoviye

//    int *arr1 = new int[]{1, 2, 3, 4, 5};
//    int *arr2 = new int[]{1, 3, 5, 7, 9};
//
//    int *arr3{};
//    int length{};
//
//
//    for (int *i = arr1; i < arr1 + 5; ++i) {
//        for (int *j = arr2; j < arr2 + 5; ++j) {
//            if (*i == *j) {
//                length++;
//                break;
//            }
//        }
//    }
//
//    arr3 = new int[length]{};
//
//    for (int *i = arr1, k = 0; i < arr1 + 5 && k < length; ++i) {
//        for (int *j = arr2; j < arr2 + 5; ++j) {
//            if (*i == *j) {
//                *(arr3 + k) = *i;
//                k++;
//                break;
//            }
//        }
//    }
//
//    for (int i = 0; i < length; ++i) {
//        cout << *(arr3 + i) << ' ';
//    }
//    cout << endl;

#pragma endregion

#pragma region Razniye

//    int *arr1 = new int[]{1, 2, 3, 4, 5};
//    int *arr2 = new int[]{1, 3, 5, 7, 9};
//
//    int *arr3{};
//    int length{};
//
//    for (int *i = arr1; i < arr1 + 5; ++i) {
//        for (int *j = arr2; j < arr2 + 5; ++j) {
//            if (*i == *j) {
//                length++;
//                break;
//            }
//        }
//    }
//
//    length = 5 - length;
//
//    arr3 = new int[length]{};
//
//    for (int *i = arr1, k = 0, counter = 0; i < arr1 + 5 && k < length; ++i) {
//        for (int *j = arr2; j < arr2 + 5; ++j) {
//            if (*i == *j)
//                break;
//            else if (*i != *j)
//                counter++;
//
//            if (counter == 5) {
//                *(arr3 + k) = *i;
//                k++;
//            }
//
//        }
//    }
//
//    for (int i = 0; i < length; ++i) {
//        cout << *(arr3 + i) << ' ';
//    }
//    cout << endl;
//

#pragma endregion

// Надо удалить столбец по выбранному номеру в двумерном массиве

    int rows = 2;
    int cols = 3;
    int selection{};
    int new_cols{};

    int **arr = new int *[rows]{
            new int[cols]{1, 3, 5},
            new int[cols]{ 2, 4, 6 }
    };

    int **tmp = new int *[rows]{};

    for (int i = 0; i < rows; ++i)
       tmp[i] = new int[cols]{};


    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
           tmp[i][j] = arr[i][j];
        }
    }

    cout << "Enter selection from" << ' ' << 0 << ' '<< "to"  << ' ' << new_cols;
    cin >> selection;

    new_cols = cols - 1;

    for (int i = 0; i < rows; ++i) {
            arr[i] = new int[new_cols]{};
    }

    int j = 0;
    for (int i = 0, k = 0; i < rows; ++i) {
        if  (j == cols) {
            j = 0;
            k = 0;
        }
        while (j < cols) {
            if (selection == j) {
                j++;
                continue;
            }
            arr[i][k] = tmp[i][j];
            k++;
            j++;
        }
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < new_cols; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}



// Code wiith pointers

//    for (int **i = arr; i < arr + rows; ++i) {
//        for (int *j = *i; j < *i + cols; ++j) {
//            cout << *j << ' ';
//        }
//        cout << endl;
//    }
//
//    for (int **arr_ptr = arr, **tmp_ptr = tmp; arr_ptr < arr + rows; ++arr_ptr, ++tmp_ptr) {
//        for (int *j = *arr_ptr, *k = *tmp_ptr; j < *arr_ptr + cols; ++j, ++k) {
//            *k = *j;
//        }
//        cout << endl;
//    }
//
//    for (int **i = tmp; i < arr + rows; ++i) {
//        for (int *j = *i; j < *i + cols; ++j) {
//            cout << *j << ' ';
//        }
//        cout << endl;
//    }
