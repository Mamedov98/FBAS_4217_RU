#pragma once
#include <iostream>
#include <string>
#include <sstream>

class Time
{
public:
	static std::string GetDate()
	{
		tm local_time;
		
		time_t now = time(0);
		localtime_s(&local_time, &now);
		std::ostringstream stream;

		stream << local_time.tm_year + 1900 << '-' << local_time.tm_mon + 1 << '-' << local_time.tm_mday << '\n';

		return stream.str();
	}
};
