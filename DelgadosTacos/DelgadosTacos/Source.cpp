//Delgados Tacos
//Gairren
//3/30/2017
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

int main()
{
	double tacoPrice = 1.50, burritoPrice = 2.00, drinkPrice = 1.50, tamalePrice = 2.00, tostadoPrice = 3.00,
		   enchiladaPrice = 3.00, churroPrice = 0.50, quesadillaPrice = 2.50, chimichangaPrice = 1.50,
	       chalupaPrice = 2.50;
	const double taxRate = 1.075;
	double tacoOrdered, tacoTotal, burritoOrdered, burritoTotal, drinkOrdered, drinkTotal, tamaleOrdered, tamaleTotal
		, tostadoOrdered, tostadoTotal, enchiladaOrdered, enchiladaTotal, churroOrdered, churroTotal, quesadillaOrdered, quesadillaTotal
		, chimichangaOrdered, chimichangaTotal, chalupaOrdered, chalupaTotal, total;
	int order;

	std::cout << "Welcome to Delgados Tacos, where we will force our food down your throat and\nsteal your money.\n" << std::endl;

	std::cout << "MAKE your choice between taco(1), burrito(2), drink(3), tamale(4), tostado(5),\nenchiliada(6), churro(7), quesadilla(8), chimichanga(9), and chalupa(10).\n\n";
	system("PAUSE");
	std::cin >> order;

	if (order == 1)
	{
		std::cout << "You're going to be force fed this many tacos down your throat: " << std::endl;
		std::cin >> tacoOrdered;

		tacoTotal = tacoOrdered * tacoPrice;
		total = tacoTotal * taxRate;

		std::cout << "You're missing "<< std::setprecision(3) << total << "$ from you're wallet. Come again!" << std::endl;
	}

	else if (order == 2)
	{
		std::cout << "Then we're going to shove this many burritos down your throat: " << std::endl;
		std::cin >> burritoOrdered;

		burritoTotal = burritoOrdered * burritoPrice;
		total = burritoTotal * taxRate;

		std::cout << "You're missing " << std::setprecision(3) << total << "$ from you're wallet. Come again!" << std::endl;
	}

	else if (order == 3)
	{
		std::cout << "Than you're going to choke on this many sodas: " << std::endl;
		std::cin >> drinkOrdered;

		drinkTotal = drinkOrdered * drinkPrice;
		total = drinkTotal * taxRate;

		std::cout << "You're missing " << std::setprecision(3) << total << "$ from you're wallet. Come again!" << std::endl;
	}

	else if (order == 4)
	{
		std::cout << "We're going to jam this many tamales into your mouth: " << std::endl;
		std::cin >> tamaleOrdered;

		tamaleTotal = tamaleOrdered * tamalePrice;
		total = tamaleTotal * taxRate;

		std::cout << "You're missing " << std::setprecision(3) << total << "$ from you're wallet. Come again!" << std::endl;
	}

	else if (order == 5)
	{
		std::cout << "You're going to suffer through this many tostados: " << std::endl;
		std::cin >> tostadoOrdered;

		tostadoTotal = tostadoOrdered * tostadoPrice;
		total = tostadoTotal * taxRate;

		std::cout << "You're missing " << std::setprecision(3) << total << "$ from you're wallet. Come again!" << std::endl;
	}

	else if (order == 6)
	{
		std::cout << "We'll attack you with this many enchiladas: " << std::endl;
		std::cin >> enchiladaOrdered;

		enchiladaTotal = enchiladaOrdered * enchiladaPrice;
		total = enchiladaTotal * taxRate;

		std::cout << "You're missing " << std::setprecision(3) << total << "$ from you're wallet. Come again!" << std::endl;
	}

	else if (order == 7)
	{
		std::cout << "You can fit this many churros in your mouth at once: " << std::endl;
		std::cin >> churroOrdered;

		churroTotal = churroOrdered * churroPrice;
		total = churroTotal * taxRate;

		std::cout << "You're missing " << std::setprecision(3) << total << "$ from you're wallet. Come again!" << std::endl;
	}

	else if (order == 8)
	{
		std::cout << "You will choke on this many quesadillas: " << std::endl;
		std::cin >> quesadillaOrdered;

		quesadillaTotal = quesadillaOrdered * quesadillaPrice;
		total = quesadillaTotal * taxRate;

		std::cout << "You're missing " << std::setprecision(3) << total << "$ from you're wallet. Come again!" << std::endl;
	}

	else if (order == 9)
	{
		std::cout << "I'm running out of things to say... \n"  "How many chimichangas did you want?: " << std::endl;
		std::cin >> chimichangaOrdered;

		chimichangaTotal = chimichangaOrdered * chimichangaPrice;
		total = chimichangaTotal * taxRate;

		std::cout << "You're missing " << std::setprecision(3) << total << "$ from you're wallet. Come again!" << std::endl;
	}

	else if (order == 10)
	{
		std::cout << "Finally how many chalupas did you want?: " << std::endl;
		std::cin >> chalupaOrdered;

		chalupaTotal = chalupaOrdered * chalupaPrice;
		total = chalupaTotal * taxRate;

		std::cout << "You're missing " << std::setprecision(3) << total << "$ from you're wallet. Come again!" << std::endl;
	}
}