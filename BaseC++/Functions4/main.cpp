#include <iostream>

using namespace std;


int main() {

    const int rows = 2;
    const int cols = 5;


    int arr[rows][cols] =
            {
                    {1, 3, 5, 7, 9},
                    {2, 4, 6, 8, 10}
            };

    int tmp_arr[rows][cols];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            tmp_arr[i][j] = arr[i][j];
        }
    }



    int sdviq = 6;


    for (int i = 0; i < 2; ++i) {
        for (int j = 4; j >= 0; j--) {
            int cursor = j - sdviq;
            if (cursor < 0){
                cursor = cols + cursor;
            }
            arr[i][j] = tmp_arr[i][cursor];
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}

