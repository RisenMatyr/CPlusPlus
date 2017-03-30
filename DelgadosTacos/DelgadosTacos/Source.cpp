//Delgados Tacos
//Gairren
//3/30/2017
#include <iostream>
#include <string>
#include <cstring>

void p(const char *str){
	write(1, str, strlen(str));
	sleep(1);
}
int main1(){
	p("you "); p("can't "); p("see "); p("me");
	write(1, "\33[2K\r", 5); //erase line and carriage return
	write(1, "\33[1A", 4); // move 1 line up
	write(1, "\33[2K\r", 5); //erase line and carriage return
	p("Ohh .. yeah!!\n");
	return 0;
}

int main()
{
	double tacoPrice = 0.99;
	double burritoPrice = 1.99;
	double drinkPrice = 1.50;

	const double taxRate = 1.075;

	double tacoOrdered, tacoTotal;
	double burritoOrdered, burritoTotal;
	double drinkOrdered, drinkTotal;
	double total;
	double totalWithTax;

	std::cout << "Welcome to Delgados Tacos, where we will force our food down your throat and steal your money." << std::endl;

	std::cout << "You're going to be force fed this many tacos down your throat: " << std::endl;
	std::cin >> tacoOrdered;

	std::cout << "Then we're going to shove this many burritos down your throat: " << std::endl;
	std::cin >> burritoOrdered;

	std::cout << "Than you're going to choke on this many sodas: " << std::endl;
	std::cin >> drinkOrdered;

	tacoTotal = tacoOrdered * tacoPrice;
	burritoTotal = burritoOrdered * burritoPrice;
	drinkTotal = drinkOrdered * drinkPrice;

	total = tacoTotal + burritoTotal + drinkTotal;

	std::cout << "You're missing " << total << "$ from you're wallet. Come again!" << std::endl;
}