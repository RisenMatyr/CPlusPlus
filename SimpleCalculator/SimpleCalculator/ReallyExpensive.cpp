#include <iostream>
#include <string>
using namespace std;
int main()
{
	char op;
	float num1, num2;
	string nameString;

	cout << "What is your name: ";
	cin >> nameString;

	cout << "Enter a function: ";
	cin >> op;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	switch(op)
	{
		case '+':
			cout << num1+num2;
			break;
		case '-':
			cout << num1-num2;
			break;
		case '/':
			cout << num1/num2;
			break;
		case '*':
			cout << num1*num2;
			break;
		default:
			cout << "You require a function";
			break;
	}
	return 0;
}