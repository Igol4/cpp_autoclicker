#include <iostream>
#include<Windows.h>

using namespace std;
int a;
char b;
void menu()
{
	cout << "Input difference between each click(miliseconds)\n";
	cin >> a;
	cout << "Press 'A' to enable and 'B' to disable autoclicker\n"; //you can change letters by simply replacing them in if and else if block
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
			cout << "Do you want to restart the program or continue with current settings [c/r]\n?";
			cin >> b;
			if(b == 'r')
			{   
				menu();
			}
			else if(b == 'c')
			{
				cout << "Press 'A' to enable and 'B' to disable autoclicker\n";
			}
			else
			{
				cout << "You had a typo, type c to continue or r to restart. Program will close now.\n";
				Sleep(4000);
				exit(0);
			}
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
