#include <iostream>

using namespace std;

#pragma region Inline
//
//inline float addition(float num1, float num2)
//{
//    return num1 + num2;
//}
//
//
//inline float division(float num1, float num2)
//{
//    return num1 / num2;
//}
//
//int main() {
//
//    float res1 = addition(1.1f, 2.2f);
//    float res2 = division(3.3f, 4.4f);
//
//    cout <<  res1 << ' ' << res2;
//
//
//
//    return 0;
//}

#pragma endregion

#pragma region Template
//template <typename T>
//T addition(T num1, T num2)
//{
//    return num1 + num2;
//}
//
//
//int main()
//{
//    int a = addition(1, 2);
//    float b = addition(1.1f, 2.2f);
//
//    cout << a << ' ' << b << endl;
//
//
//    return 0;
//}


#pragma endregion


void print_arr(int arr[], const int length = 10)
{
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << ' ';
    }
}


int main() {
    int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    print_arr(arr, 10);

}