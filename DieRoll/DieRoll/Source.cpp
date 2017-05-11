#include <iostream>
#include <string>
#include <ctime> 
#include <cstdlib> 

int main()
{
	int die = 0;
	int enemy = 0;
	int win = 0;
	int lose = 0;
	std::string choice;

	do
	{
		std::cout << "Would you like to roll some dice ?" << std::endl;
		std::cin >> choice;
	
		srand(time(0)); 

		die = rand() % 6 + 1;
		enemy = rand() % 6 + 1;

		if (choice == "yes")
		{
			std::cout << "You rolled >> " << die << std::endl;
			std::cout << "The enemy rolled >> " << enemy << std::endl;

			if (die > enemy)
			{
				win = win + 1;
				std::cout << "\nYou won " << win << " games" << std::endl;
				std::cout << "You lost " << lose << " games" << std::endl;
			}

			if (die < enemy)
			{
				lose = lose + 1;
				std::cout << "\nYou won " << win << " games" << std::endl;
				std::cout << "You lost " << lose << " games" << std::endl;
			}

			if (die == enemy)
			{
				std::cout << "\nYou won " << win << " games" << std::endl;
				std::cout << "You lost " << lose << " games" << std::endl;
				std::cout << "\nIt was a tie this time";
			}
		}

	} while (choice == "yes");

}