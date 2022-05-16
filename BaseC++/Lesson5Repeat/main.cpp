#include <iostream>

using namespace std;

#pragma region Functions

#pragma region Part1
//
//void say_hello() {
//    cout << "Hello World";
//}
//
//int addition(float num1, float num2) {
//    return num1 + num2;
//}
//
//int main() {
//
//    int result = addition(1.25, 2);
//    cout << result;
//
//
//    return 0;
//}

#pragma endregion

#pragma region FunctionOverloading

#pragma region ByCount
//int addition(int num1, int num2)
//{
//    return num1 + num2;
//}
//
//int addition(int num1, int num2, int num3)
//{
//    return num1 + num2;
//}

#pragma endregion

#pragma region ByType

//int addition(int num1, int num2) {
//    return num1 + num2;
//}
//
//int addition(int num1, double num2) {
//    return num1 + num2;
//}

#pragma endregion

#pragma region BySequence

//int addition(double num1, int num2) {
//    return num1 + num2;
//}
//
//int addition(int num1, double num2) {
//    return num1 + num2;
//}


#pragma endregion


void rectangle(int n, int k)
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}



int main() {

    int n, k;
    cin >> n >> k;

    rectangle(n, k);

    return 0;
}

#pragma endregion

#pragma endregion


