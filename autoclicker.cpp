#include <iostream>
#include<Windows.h>

using namespace std;
void menu()
{
	cout << "Press 'A' to enable and 'B' to disable autoclicker\n"; //you can change letters by simply replacing them in if and else if block//
}
void clicker()
{
	bool click = false;
	while (true)
	{
		if(GetAsyncKeyState('A'))
		{
			click = true;
		}
		else if(GetAsyncKeyState('B'))
		{
			click = false;
		}
		if(click == true)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
			Sleep(10); //time between each click//
			
		}
	}
}

int main()
{
  menu();
  clicker();

  return 0;
}
