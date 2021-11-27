#include <iostream>
#include<Windows.h>

using namespace std;
int a;
char b;
void menu()
{
	cout << "Input difference between each click(miliseconds)\n";
	cin >> a;
	cout << "Press 'A' to enable and 'B' to disable autoclicker, C to continue, R to restart and E to exit.\n"; //you can change letters by simply replacing them in if and else if block
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
		else if(GetAsyncKeyState('C'))
		{
		}
		else if(GetAsyncKeyState('R'))
		{
			menu();
		}
		else if(GetAsyncKeyState('E'))
		{
			exit(0);
		}
		if(click == true)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
			mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
			Sleep(a); //time between each click
			
		}
	}
}
int main()
{
  menu();
  clicker();

  return 0;
}
