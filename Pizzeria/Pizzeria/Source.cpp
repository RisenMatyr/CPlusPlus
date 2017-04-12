#include <iostream>
using namespace std;

int main()
{
	double total;
	
	int pizzaCondiments;
	int pizzaSize;
	int pizzaYes = 1;
	int pizzaNo = 2;
	int small = 1;
	int medium = 2;
	int large = 3;
	int mustard = 1;
	int mayonnaise = 2;
	int ketchup = 3;

	cout << "Welcome to Steamers Pizza! We will roll you out of here in a wheelchair.";
	cout << "\nNow you have a few things you can choose from.";
	cout << "Would you like to order a pizza? 1 for yes 2 for no";
	cin >> pizzaYes;
	if (pizzaYes == 1)
	{
		cout << "What size pizza would you like? 1 for small, 2 for medium, and 3 for large.";
		if (small == 1)
		{pizzaSize = 5.00;}
		if (medium == 2)
		{pizzaSize = 7.00;}
		if (large == 3)
		{pizzaSize = 13.00;}

		system("pause");

		cout << "What is your toppings? 1 for Mustard. 2 for Ketchup, 3 for Mayonnaise";
		if (mustard == 1)
		{pizzaCondiments = 4.20;}
		if (ketchup == 2)
		{pizzaCondiments = 6.66;}
		if (mayonnaise == 3)
		{pizzaCondiments = 5.00;}

		system("pause");

		total = pizzaSize + pizzaCondiments;

		cout << "Your total cost adds up to " << total;
	}

	system("pause");

	if (pizzaNo == 2)
	{
		cout << "Then get out of the damn pizzeria!!!";
	}

}