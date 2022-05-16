#include "MyLib.h"
#include <iostream>
#include <time.h>


void create_arr(int **&arr, const int rows, const int cols) {
    arr = new int *[rows];

    for (int i = 0; i < rows; ++i) {
        arr[i] = new int[cols]{};
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = rand() % 5;
        }
    }
}

void print_arr(int **arr, const int rows, const int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void print_intersection(int **arr1, int **arr2, int **arr3, const int rows, const int cols) {

    int *tmp_arr = new int[rows * cols]{};
    int cursor{};
    bool check = true;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            for (int k = 0; k < rows; ++k) {
                for (int l = 0; l < cols; ++l) {
                    if (arr1[i][j] == arr2[k][l]) {
                       tmp_arr[cursor] = arr1[i][j];
                    }
                }
            }
        }

        for (int l = 0; l < 4; ++l) {
            std::cout << tmp_arr[l] << ' ';
        }

    }
