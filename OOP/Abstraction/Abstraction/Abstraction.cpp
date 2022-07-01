#include <iostream>
using namespace std;

// GUI - Graphic User Interface

#pragma region VirtualMethod
//class Window
//{
//public:
//	virtual void OnClose() 
//	{
//		cout << "Base onclose" << endl;
//	};
//};
//
//class HomeWindow :public Window
//{
//public:
//	void OnClose() override
//	{
//		cout << "HomeWindow onclose" << endl;
//	}
//};
#pragma endregion

#pragma region PureVirtualMethod

class Window // abstract
{
public:
	virtual void OnClose() = 0;
};

class HomeWindow : public Window
{
public:
	/*void OnClose() override
	{
		cout << "HomeWindow onclose" << endl;
	}*/
};

#pragma endregion



int main()
{
	HomeWindow hw;
	hw.OnClose();

	return 0;
}
