#include <iostream>

using namespace std;

int main() {

#pragma region Pointers

    // & - амперсанд
    // * - оператор разименовывания
    // * - стоит перед переменной во время инициализации
    // то это объявление указателя
    // * - стоит перед переменной, это разименовывание

    // Указатель - это переменная, которая хранит адрес.

//
//    int num = 5;
//    int *ptr_num = &num; // Pointer to number equals to address of number
//
//    cout
//            << "Value of num: " << num << endl
//            << "Address of num: " << &num << endl
//            << "Value of pointer: " << ptr_num << endl
//            << "Address of pointer: " << &ptr_num << endl;

#pragma endregion

#pragma region Heap

//    int *num = new int(5); // allocate
//    char *chr = new char(97);
//
//    cout << &num << endl;
//    cout << num << endl;
//    cout << *num << endl;

#pragma endregion

#pragma regoin PointerArithmetic

    int tmp;
    cout << "Enter the number:";
    cin >> tmp;
    int power = 0;
    do {
        if (tmp % 10 == 1) {
            cout << "2^" << power;
            if (tmp / 10 > 0) cout << " + ";
        }
        power++;
        tmp /= 10;
    } while (tmp > 0);

//    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
//    cout << arr << ' ' << *arr << endl;
//    cout << arr + 1 << ' ' << *(arr + 1) << endl;
//    cout << arr + 2 << ' ' << *(arr + 2) << endl;
//    cout << arr + 3 << ' ' << *(arr + 3) << endl;
//    cout << arr + 4 << ' ' << *(arr + 4) << endl;
//    cout << arr + 5 << ' ' << *(arr + 5) << endl;
//    cout << arr + 6 << ' ' << *(arr + 6) << endl;
//    cout << arr + 7 << ' ' << *(arr + 7) << endl;
//    cout << arr + 8 << ' ' << *(arr + 8) << endl;
//    cout << arr + 9 << ' ' << *(arr + 9) << endl;
//
//    for (int *i = arr; i <= (arr + 9); ++i) {
//        cout << i << " - " << *i << endl;
//    }
#pragma endregion


    return 0;
}
