#include <iostream>

#pragma region TypeCasting // Преобразование данных
// Type Casting - 2 types
// 1. Explicitly - явное преобразование
// 2. Implicitly - неявное преобразование

//int main() {
//    // Implicitly
//    /*
//    int a = 'a';
//    std::cout << a << std::endl;
//
//    int b = true;
//    std::cout << b << std::endl;
//
//    bool c = 'a';
//    std::cout << c << std::endl;
//
//    float d = 3.23954789357937593458738573948455; // Тоже неявное преобразование
//    std::cout << d << std::endl;
// */
//
//    // Explicitly
//    /*
//    float a = 3.25f;
//    std::cout << a << std::endl;
//
//    char b = (char)98;
//    std::cout << b << std::endl;
// */
//
//    return 0;
//}

#pragma endregion

#pragma region Unary
/*
int main()
{
    // increment - postfix, prefix
    // num1++ =>     num1 = num1 + 1

    int num1 = 0, num2 = 0;

    // std::cout << num1++;
    // std::cout << num1;
    // num1 += 1

    std::cout << ++num1;

    // num1 += 1;
    // std::cout << num1;
}
 */

#pragma endregion

#pragma IfStatements

int main()
{
    int num = 0;

    if (num == 0)
    {
        std::cout << "Num is equals to zero" << std::endl;
    }
    else if (num < 0)
    {
        std::cout << "Num is lower than zero" << std::endl;
    }
    else
    {
        std::cout << "Num is bigger than zero" << std::endl;
    }
    return 0;
}

#pragma endregion

