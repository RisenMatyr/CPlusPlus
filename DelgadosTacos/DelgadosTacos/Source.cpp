//Delgados Tacos
//Gairren
//3/30/2017
#include <iostream>
#include <string>
#include <cstring>

int main()
{
	double tacoPrice = 1.50;
	double burritoPrice = 2.00;
	double drinkPrice = 1.50;
	double tamalePrice = 2.00;
	double tostadoPrice = 3.00;
	double enchiladaPrice = 3.00;
	double churroPrice = 0.50;
	double quesadillaPrice = 2.50;
	double chimichangaPrice = 1.50;
	double chalupaPrice = 2.50;

	const double taxRate = 1.075;

	double tacoOrdered, tacoTotal;
	double burritoOrdered, burritoTotal;
	double drinkOrdered, drinkTotal;
	double tamaleOrdered, tamaleTotal;
	double tostadoOrdered, tostadoTotal;	
	double enchiladaOrdered, enchiladaTotal;
	double churroOrdered, churroTotal;
	double quesadillaOrdered, quesadillaTotal;
	double chimichangaOrdered, chimichangaTotal;
	double chalupaOrdered, chalupaTotal;
	double total;
	double totalWithTax;

	std::cout << "Welcome to Delgados Tacos, where we will force our food down your throat and steal your money." << std::endl;

	std::cout << "You're going to be force fed this many tacos down your throat: " << std::endl;
	std::cin >> tacoOrdered;

	std::cout << "Then we're going to shove this many burritos down your throat: " << std::endl;
	std::cin >> burritoOrdered;

	std::cout << "Than you're going to choke on this many sodas: " << std::endl;
	std::cin >> drinkOrdered;

	std::cout << "We're going to jam this many tamales into your mouth: " << std::endl;
	std::cin >> tamaleOrdered;

	std::cout << "Your're going to suffer through this many tostados: " << std::endl;
	std::cin >> tostadoOrdered;

	std::cout << "We'll attack you with this many enchiladas: " << std::endl;
	std::cin >> enchiladaOrdered;

	std::cout << "You can fit this many churros in your mouth at once: " << std::endl;
	std::cin >> churroOrdered;

	std::cout << "You will choke on this many quesadillas: " << std::endl;
	std::cin >> quesadillaOrdered;

	std::cout << "I'm running out of things to say... \n"  "How many chimichangas did you want?: " << std::endl;
	std::cin >> chimichangaOrdered;

	std::cout << "Finally how many chalupas did you want?: " << std::endl;
	std::cin >> chalupaOrdered;

	tacoTotal = tacoOrdered * tacoPrice;
	burritoTotal = burritoOrdered * burritoPrice;
	drinkTotal = drinkOrdered * drinkPrice;
	tamaleTotal = tamaleOrdered * tamalePrice;
	tostadoTotal = tostadoOrdered * tostadoPrice;
	enchiladaTotal = enchiladaOrdered * enchiladaPrice;
	churroTotal = churroOrdered * churroPrice;
	quesadillaTotal = quesadillaOrdered * quesadillaPrice;
	chimichangaTotal = chimichangaOrdered * chimichangaPrice;
	chalupaTotal = chalupaOrdered * chalupaPrice;

	total = tacoTotal + burritoTotal + drinkTotal + tamaleTotal + tostadoTotal + enchiladaTotal 
		  + churroTotal + quesadillaTotal + chimichangaTotal + chalupaTotal;

	std::cout << "You're missing " << total << "$ from you're wallet. Come again!" << std::endl;
}