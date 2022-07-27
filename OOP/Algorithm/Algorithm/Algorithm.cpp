#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
#include <fstream>
#include <algorithm> // Functional programming 


class MyClass
{
public:
	MyClass()
	{
		file.open("data.txt", std::ios::app);

	}

private:
	std::fstream file;
};


bool isEven(int num)
{
	return num % 2 == 0;
}

int main()
{

	MyClass a;

	//std::vector<int> arr{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };


	//bool res1 = std::all_of(arr.begin(), arr.end(), isEven);
	//std::cout << res1 << std::endl;

	//bool res2 = std::any_of(arr.begin(), arr.end(), isEven);
	//std::cout << res2 << std::endl;

	//bool res3 = std::none_of(arr.begin(), arr.end(), isEven);
	//std::cout << res3 << std::endl;


	//bool res4 = std::any_of(arr.begin(), arr.end(), [](int num) {return num % 2 == 0; });
	//std::cout << res4 << std::endl;
	//

	//std::vector<int>::iterator res5 = std::find(arr.begin(), arr.end(), 5);

	//std::cout << *res5;


	//for (auto item : arr)
	//{
	//	std::cout << item << ' ';
	//}

	//std::cout << std::endl;

	//std::replace(arr.begin(), arr.end(), 5, 10);

	//for (auto item : arr)
	//{
	//	std::cout << item << ' ';
	//}

	std::unordered_set<int> arr{ 5, 2, 1, 7 };

	for (auto item : arr)
	{
		std::cout << item << ' ';
	}

	return 0;
}

