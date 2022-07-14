#pragma once
#include <iostream>
#include "ExceptionLogger.h"
#include "MyDateTime.h"


class NoHeadInitException : public std::exception
{
public:
	NoHeadInitException(std::string message) : std::exception(message.c_str())
	{
		message = Time::GetDate() + message;

		this->logger = new ExceptionLogger("log_data.log", message);
	}

private:
	ExceptionLogger* logger{};
};
