#include <iostream>

using namespace std;

void print_arr(int *arr, const int length) {
    for (int i = 0; i < length; ++i) {
        cout << *(arr + i) << ' ';
    }
    cout << endl;
}


void fill_arr(int *arr, const int length) {
    for (int i = 0; i < length; ++i) {
        *(arr + i) = i;
    }
}

int main() {

    int length{};
    cout << "Enter length: ";
    cin >> length;

    int *arr = new int[length]{};
    fill_arr(arr, length);
    print_arr(arr, length);

    int *arr2 = new int[length + 5]{};

    for (int i = 0; i < length; ++i) {
        *(arr2 + i) = *(arr + i);
    }

    for (int i = length; i < length + 5; ++i) {
        *(arr2 + i) = i + 10;
    }

    delete[]arr;
    print_arr(arr2, length + 5);


    return 0;
}
