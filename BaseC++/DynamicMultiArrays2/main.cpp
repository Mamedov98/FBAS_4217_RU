#include <iostream>
#include <time.h>
using namespace std;

int main() {
    srand(time(NULL));

    int rows{};
    int cols{};

    cout << "Enter number of rows"; cin >> rows; // 2
    cout << "Enter number of cols"; cin >> cols; // 2

    int** arr = new int*[rows]{};

    for (int** i = arr; i < arr + rows; ++i) {
        *i = new int[cols]{};
    }

    for (int** i = arr; i < arr + rows; ++i) {
        for (int* j = *i; j < *i + cols; ++j) {
            cout << *j << ' ';
        }
        cout << endl;
    }

    return 0;
}
