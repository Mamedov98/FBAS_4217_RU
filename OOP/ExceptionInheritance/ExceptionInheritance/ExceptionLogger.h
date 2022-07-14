#pragma once
#include <string>
#include <fstream>
#include <time.h>


class ExceptionLogger
{
public:
	ExceptionLogger(std::string fileName, std::string message)
	{
		this->fileName = fileName;
		this->message = message;
		this->writeTo();
	}
	
	void writeTo()
	{
		std::fstream file(this->fileName, std::ios::app);

		if (file.is_open())
		{
			file.write(message.c_str(), message.length());
		}
		file.close();
	}

private:
	std::string fileName;
	std::string message;
};
