#include <iostream>
#include <ctime>

int r()
{
	int random;

	srand(time(0));

	random = rand() % 10 + 1;

	return 0;
}
int guessNumber()
{

}