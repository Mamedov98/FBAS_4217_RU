#include <iostream>
#include <Windows.h>
using namespace std;

class MsSqlConnector
{
public:
	MsSqlConnector() = default;
	MsSqlConnector(char* dbName)
	{
		this->dbName = dbName;
	}
	MsSqlConnector(char* dbName, char* serverName, uint16_t requestTimeout = 15)
	{
		this->dbName = dbName;
		this->serverName = serverName;
		this->requestTimeOut = requestTimeOut;
	}

	void Connect()
	{
		cout << "Connection...";
		Sleep(1500);

		if (!isConnected)
		{
			throw std::exception("Db can not connected", 404);
		}
	}

private:
	char* dbName{};
	char* serverName = new char[] {"nightcall.database.net"};
	uint16_t requestTimeOut{ 15 };
	bool isConnected = false;
};



int main()
{
	//MsSqlConnector* connector = new MsSqlConnector();
	//connector->Connect();

	/*try
	{
		MsSqlConnector* connector = new MsSqlConnector();
		connector->Connect();
	}
	catch (std::exception &ex)
	{
		cout << ex.what();
	}*/
	cout << INT32_MAX << endl;
	cout << UINT32_MAX << endl;
}

