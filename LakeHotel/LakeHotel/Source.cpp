#include <iostream>
#include <string>

int main()
{
	char roomResponse, telephoneResponse;
	int guestTotal, nightStayed;
	double nightRate = 100;
	double roomService = 35;
	double telephoneRate = 0.25;

	std::cout << "How many nights are you staying? >>" << std::endl;
	std::cin >> nightStayed;

	std::cout << "Did you want room service? >>" << std::endl;
	std::cin >> roomResponse;
	if (roomResponse == 'yes')
		guestTotal = guestTotal + roomService;
	else if (roomResponse == 'no')
		guestTotal = guestTotal;

	std::cout << "Did you want phone service? >>" << std::endl;
	std::cin >> telephoneResponse;
	if (telephoneResponse == 'yes')
		guestTotal = guestTotal + telephoneRate;
	else if (telephoneResponse == 'no')
		guestTotal = guestTotal;

	guestTotal = nightStayed * nightRate;

	std::cout << "It will cost you a total of " << guestTotal << "$" << std::endl;

}