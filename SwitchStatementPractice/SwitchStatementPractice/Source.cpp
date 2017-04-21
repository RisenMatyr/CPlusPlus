#include <iostream>

int main()
{
	char grade = ' ';
	//enter grade
	std::cout << "Enter a letter grade";
	std::cin >> grade;
	grade = toupper(grade);

	switch (grade)
	{
	case 'A':
			std::cout << "Excellent";
			break;
	case 'B':
		std::cout << "Above average";
		break;
	case 'C':
		std::cout << "Stupid";
		break;
	case 'D':
	case 'F':
		std::cout << "Do you know what a grade is?";
		break;
	default:
		std::cout << "Invalid grade";
	}//end switch

	system("pause");
	return 0;
}