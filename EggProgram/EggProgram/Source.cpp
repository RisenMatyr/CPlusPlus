#include <iostream>
#include <string>

int main()
{
	int eggsWanted, eggsLeft, dozenEggs;
	
	double dozenTotal, singlePrice;
	double dozenPrice = 2.00;

	std::cout << "How many eggs you want? >> " << std::endl;
	std::cin >> eggsWanted;
	
	dozenEggs = eggsWanted / 12;
	eggsLeft = eggsWanted % 12;
	dozenTotal = dozenEggs * dozenPrice;
	singlePrice = eggsLeft * 0.25;

	std::cout << "You have " << dozenEggs << " dozen eggs..." << std::endl;
	std::cout << "You have " << eggsLeft << " eggs left..." << std::endl;
	std::cout << "This will cost " << singlePrice + dozenTotal << "$" << std::endl;
}