#pragma region WithoutStructs
//
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    char *names = new char[10] {};
//    char *surnames = new char[10] {};
//    int *ages = new int[10] {};
//    int *gpa = new int[10]{};
//
//
//    return 0;
//}

#pragma endregion


#pragma region WithStructs

#include <iostream>


using namespace std;


struct Student {
    float gpa;
    unsigned short age;
    char *name;
    char *surname;

    void print_student() {
        cout
                << "Name is: " << name << endl
                << "Surname is: " << surname << endl
                << "Age is: " << age << endl
                << "gpa is:" << gpa << endl;
    }
};

void print_student(Student student) {
    cout
            << "Name is: " << student.name << endl
            << "Surname is: " << student.surname << endl
            << "Age is: " << student.age << endl
            << "gpa is:" << student.gpa << endl;
}


int main() {

    auto *students = new Student[20]{};

    students[0].name = new char[]{"Elvin"};
    students[0].surname = new char[]{"Azimov"};
    students[0].age = 20;
    students[0].gpa = 12;

    students[0].print_student(); // Method

    print_student(students[0]); // Function
    return 0;
}



//
//
//struct Test {
//    double c;
//    int A[11];
//    char B;
//    char C;
//};
//
//int main() {
//
//    cout << sizeof(Test);
//
//    return 0;
//};

#pragma endregion