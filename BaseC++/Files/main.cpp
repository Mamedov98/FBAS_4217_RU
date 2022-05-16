#include <iostream>
#include <cstdio>


int main() {

    // File - структура по умолчанию, которая помогает работать с файлами.

    // File Modes:
    // "a" - append
    // "w" - write
    // "r" - read

#pragma region WriteToFile

//    FILE *data;
//    fopen_s(&data, "data.py", "w");
//
//    char *name = new char[]{"import time\nprint(\"Hello World\")\ntime.sleep(5)"};
//
//    fputs(name, data);

#pragma endregion

#pragma region ReadFromFile

//    FILE *data;
//    fopen_s(&data, "data.py", "r");


//    char *result = new char[30]{};
//    fgets(result, 30, data);

//    std::cout << result;
#pragma endregion

#pragma region AppendToFile

    FILE *data;
    fopen_s(&data, "data.py", "a");

    char *new_code = new char[] {"\nprint(\"Hello World\")"};

    fputs(new_code, data);

#pragma endregion
return 0;
}
