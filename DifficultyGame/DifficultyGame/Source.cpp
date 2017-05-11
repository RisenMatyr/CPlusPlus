#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

int main()
{
	int gameDifficulty;
	std::string done;
	int game = 0;
	int r, r1, r2;
	int rGuess, r1Guess, r2Guess;
	int win = 0, lose = 0;
	
		std::cout << "Choose difficulty\n   1  2  3" << std::endl;
		std::cin >> gameDifficulty;
		do{
			srand(time(NULL));
			r = rand() % 2 + 1;
			srand(time(NULL));
			r1 = rand() % 10 + 1;
			srand(time(NULL));
			r2 = rand() % 100 + 1;
			switch (gameDifficulty)
			{
				if (gameDifficulty == 1)
				{
			case 1:
				std::cout << "Guess a number between one and two" << std::endl;
				std::cin >> rGuess;
				if (rGuess == r)
				{
					std::cout << "You guessed right this time\n";
					game = game + 1;
					win = win + 1;
				}
				if (rGuess < r)
				{
					std::cout << "That is incorrect the correct answer is " << r << std::endl;
					game = game + 1;
					lose = lose + 1;
				}
				if (rGuess > r)
				{
					std::cout << "That is incorrect the correct answer is " << r << std::endl;
					game = game + 1;
					lose = lose + 1;
				}
				}
				if (gameDifficulty == 2)
				{
			case 2:
				std::cout << "Guess a number between one and ten" << std::endl;
				std::cin >> r1Guess;
				if (r1Guess == r1)
				{
					std::cout << "You guessed right this time\n";
					game = game + 1;
					win = win + 1;
				}
				if (r1Guess < r1)
				{
					std::cout << "That is incorrect the correct answer is " << r1 << std::endl;
					game = game + 1;
					lose = lose + 1;
				}
				if (r1Guess > r1)
				{
					std::cout << "That is incorrect the correct answer is " << r1 << std::endl;
					game = game + 1;
					lose = lose + 1;
				}
				}
				if (gameDifficulty == 3)
				{
			case 3:
				std::cout << "Guess a number between one and one hundred" << std::endl;
				std::cin >> r2Guess;
				if (r2Guess == r2)
				{
					std::cout << "You guessed right this time\n";
					game = game + 1;
					win = win + 1;
				}
				if (r2Guess < r2)
				{
					std::cout << "That is incorrect the correct answer is " << r2 << std::endl;
					game = game + 1;
					lose = lose + 1;
				}
				}
			}
		} while (game < 6);
		
		std::cout << "You won " << win << " times" << std::endl;
		std::cout << "You lost " << lose << " times" << std::endl;
		std::cout << "Would you like to play again?" << std::endl;
		std::cin >> done;
		while (done == "yes")
		{
			game = game - game;
			win = win - win;
			lose = lose - lose;
			std::cout << "Choose difficulty\n   1  2  3" << std::endl;
			std::cin >> gameDifficulty;
			do{
				srand(time(NULL));
				r = rand() % 2 + 1;
				srand(time(NULL));
				r1 = rand() % 10 + 1;
				srand(time(NULL));
				r2 = rand() % 100 + 1;
				switch (gameDifficulty)
				{
					if (gameDifficulty == 1)
					{
				case 1:
					std::cout << "Guess a number between one and two" << std::endl;
					std::cin >> rGuess;
					if (rGuess == r)
					{
						std::cout << "You guessed right this time\n";
						game = game + 1;
						win = win + 1;
					}
					if (rGuess < r)
					{
						std::cout << "That is incorrect the correct answer is " << r << std::endl;
						game = game + 1;
						lose = lose + 1;
					}
					if (rGuess > r)
					{
						std::cout << "That is incorrect the correct answer is " << r << std::endl;
						game = game + 1;
						lose = lose + 1;
					}
					}
					if (gameDifficulty == 2)
					{
				case 2:
					std::cout << "Guess a number between one and ten" << std::endl;
					std::cin >> r1Guess;
					if (r1Guess == r1)
					{
						std::cout << "You guessed right this time\n";
						game = game + 1;
						win = win + 1;
					}
					if (r1Guess < r1)
					{
						std::cout << "That is incorrect the correct answer is " << r1 << std::endl;
						game = game + 1;
						lose = lose + 1;
					}
					if (r1Guess > r1)
					{
						std::cout << "That is incorrect the correct answer is " << r1 << std::endl;
						game = game + 1;
						lose = lose + 1;
					}
					}
					if (gameDifficulty == 3)
					{
				case 3:
					std::cout << "Guess a number between one and one hundred" << std::endl;
					std::cin >> r2Guess;
					if (r2Guess == r2)
					{
						std::cout << "You guessed right this time\n";
						game = game + 1;
						win = win + 1;
					}
					if (r2Guess < r2)
					{
						std::cout << "That is incorrect the correct answer is " << r2 << std::endl;
						game = game + 1;
						lose = lose + 1;
					}
					}
				}
			} while (game < 6);
		}
	}
