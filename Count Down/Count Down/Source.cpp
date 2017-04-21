#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(time(NULL));
	std::cout << rand() % 10 + 1 << std::endl;  //number between 1 and 10



}