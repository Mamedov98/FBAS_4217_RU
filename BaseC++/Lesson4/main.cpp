#include <iostream>

using namespace std;

#pragma region MultiDimensionalArrays

int main() {
#pragma region Part1
//    int arr[][2] = {{1, 2}, {3, 4}};
//
//    for (int i = 0; i < 2; ++i) {
//        for (int j = 0; j < 2; ++j) {
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }

#pragma endregion

    int arr[2][2] =
            {
                    {1, 2},
                    {3, 4}
            };

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "Address: " << &arr[i][j] << ' ' << "Value: " << arr[i][j] << endl;
        }
    }


    return 0;
}

#pragma endregion