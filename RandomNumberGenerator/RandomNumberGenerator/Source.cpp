#include <iostream>
#include <ctime>

int main()
{
	int random;

	srand(time(0));

	random = rand() % 10 + 1;

	std::cout << random << std::endl;

	return 0;
}