#include <iostream>
#include <string>
#include "Student.h"
#include "Teacher.h"

struct Num
{
	Num()
	{
		value = 5;
		data = 6;
	}
	float value;
	float data;
};

int main()
{
#pragma region Intro
	// Data type casting - 2 types
	// 1 - implicity
	// 2 - explicitly - 5 variants of realizing
#pragma endregion

#pragma region C_Style
	//int num = 3;
	//std::cout << typeid(num).name() << std::endl;
	//std::cout << typeid((float)num).name() << std::endl;
#pragma endregion

#pragma region static_cast

	//float num = 3.25;
	//
	//auto new_num = static_cast<int>(num);
	//std::cout << new_num << typeid(new_num).name() << std::endl;
#pragma endregion

#pragma region dynamic_cast

	//Teacher* teacher = new Teacher();

	//std::cout << teacher->name << std::endl;
	//std::cout << teacher->surname << std::endl;
	
	Student* student = new Student();
	std::cout << student->name << std::endl;
	
	Teacher* new_teacher = dynamic_cast<Teacher*>(student);

	std::cout << new_teacher->name << std::endl;

#pragma endregion

#pragma region reinterpret_cast

	/*Student* student = new Student();
	std::cout << student->name << std::endl;
	
	Teacher* new_teacher = reinterpret_cast<Teacher*>(student);
	
	std::cout << new_teacher->name << std::endl;*/
	
	/*Num num1;
	int* num2 = reinterpret_cast<int*>(&num1);

	std::cout << *num2;*/


#pragma endregion

#pragma region const_cast

	//const int val = 10;
	//const int* ptr = &val;
	//int* ptr1 = const_cast <int*>(ptr);
	//
	//++*(ptr1);

	//std::cout << *ptr1;
	//std::cout << val;


#pragma endregion
	




	return 0;
}
