#include <iostream>
#include <fstream>
#include <string>

// file stream

// fstream - filestream
// ifstream - input file stream
// ofstream - output file stream

int main()
{
#pragma region out
	//std::fstream file("data.txt", std::ios::out);

	//file << "Hello World";

#pragma endregion

#pragma region in

	//std::fstream file;

	//file.open(R"(C:\Users\e.azimov\Desktop\Test.txt)", std::ios::in);

	// char* buffer = new char[1024]{};

	//if (file.is_open())
	//{
#pragma region Example 1

		/*std::string buffer;

		file >> buffer;
		std::cout << buffer;*/

#pragma endregion

#pragma region Example 2 


#pragma region FileLength
		/*	int count = 0;

			while (!file.eof())
			{
				count++;
				char a[1];
				file.read(a, 1);
			}*/
#pragma endregion

#pragma region ReadFrom

			/*
			char* buffer = new char[1024]{};

			file.read(buffer, 1024);
			std::cout << buffer;
			*/
#pragma endregion

#pragma endregion 
			//}


#pragma endregion


#pragma region ifstream

	//std::ifstream file("data.txt");

	//char* buffer = new char[1024]{};
	//file.getline(buffer, 1024);

	//std::cout << buffer;

#pragma endregion

#pragma region ofstream

	std::ofstream file("data.txt", std::ios::app);

	file << "Kenan opat s telefonom\n";
	file << "Kenan opat s telefonom\n";
	file << "Kenan opat s telefonom\n";

	
	


#pragma endregion

#pragma region GoodSizeOf


#pragma endregion

#pragma region app


#pragma endregion
	// out, in, app 

	return 0;
}
