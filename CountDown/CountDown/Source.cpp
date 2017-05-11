#include <iostream>
#include <windows.h>

int main()
{
	for (int time = 0; time < 10; time++)
	{
		std::cout << time << std::endl;
		Sleep(1000);
	}
	system("cls");
	std::cout << "Boom!";
	std::cin.get();
}
