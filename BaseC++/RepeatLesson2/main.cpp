#include <iostream>
#include "MyLib.h"

using namespace std;

int main() {
    srand(time(NULL));

    int **arr1{}, **arr2{}, **arr3{};
    int rows{2}, cols{2};

    create_arr(arr1, rows, cols);
    create_arr(arr2, rows, cols);
    create_arr(arr3, rows, cols);

    print_arr(arr1, rows, cols);
    print_arr(arr2, rows, cols);
    print_arr(arr3, rows, cols);

    print_intersection(arr1, arr2, arr3, rows, cols);

    return 0;
}
