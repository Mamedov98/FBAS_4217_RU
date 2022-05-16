#include <iostream>
#include <time.h>

#pragma region While
/*
int main()
{
    int num1 = 0, num2 = 0, num3 = 0;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    bool check = true;

    while (check)
    {
        std::cout << "Enter third number: ";
        std::cin >> num3;

        int i = num1;

        while (i <= num2)
        {
            if (num3 == i)
            {
                std::cout << "Yes" << std::endl;
                check = false;
                break;
            }
            i++;
        }
    }
    return 0;
}
*/
#pragma endregion


int main() {
#pragma region Switch

//    int num = 0;
//
//    std::cout << "Enter first number: " << std::endl;
//    std::cin >> num;
//
//    switch (num)
//    {
//        case 1:
//            std::cout << "1" << std::endl;
//            break;
//        case 2:
//            std::cout << "2" << std::endl;
//            break;
//        case 3:
//            std::cout << "3" << std::endl;
//            break;
//    }

//    char c;
//
//    std::cout << "Enter first number: " << std::endl;
//    std::cin >> c;
//
//
//    switch (c)
//    {
//        case 'a':
//            std::cout << "1" << std::endl;
//            break;
//        case 'b':
//            std::cout << "2" << std::endl;
//            break;
//        case 'c':
//            std::cout << "3" << std::endl;
//            break;
//    }
#pragma endregion

#pragma region Switch2
//    unsigned int selection = 0;
//    const int a = 1;
//    std::cout << "Enter number: ";
//    std::cin >> selection;
//
//    switch (selection) {
//        case a:
//            std::cout << 1 << std::endl;
//            break;
//        case 2:
//            std::cout << 2 << std::endl;
//            break;
//        case 3:
//            std::cout << 3 << std::endl;
//            break;
//        default:
//            std::cout << "Enter different number..." << std::endl;
//            break;
//    }
#pragma endregion

#pragma region DoWhile

//    bool check = true;
//
//    do {
//        int selection = 0;
//        std::cout
//                << "1. Addition" << '\n'
//                << "2. Subtraction" << '\n'
//                << "3. Exit" << '\n';
//
//        std::cin >> selection;
//
//        switch (selection) {
//            case 1:
//                std::cout << 1 + 1 << std::endl;
//                break;
//            case 2:
//                std::cout << 1 - 1 << std::endl;
//                break;
//            case 3:
//                check = false;
//                break;
//        }
//    } while (check);


#pragma endregion

    srand(time(0));

    int a = rand() % 10 + 1;

    std::cout << a;

    return 0;

}

