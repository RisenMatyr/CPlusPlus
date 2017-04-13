#include <iostream>
#include <string> 
#include <stdio.h>
#include <math.h>

int main()
{
	int triangle;
	double b, c;
	std::string sideMissing;
	double area, perimeter;
	double param, result;
	param = 1024.0;
	result = sqrt(param);
	//printf("sqrt(%f) = %f\n", param, result);

	std::cout << "Choose right(1), isosceles(2), or equilateral(3)" << std::endl;
	std::cin >> triangle;

	if (triangle == 1)
	{
		std::cout << "Which side are you missing? A, B or C\n";
		std::cin >> sideMissing;
		if (sideMissing == "A")
		{
			std::cout << "Give a value for side B: " << std::endl;
			std::cin >> b;
			std::cout << "Give a value for side C: " << std::endl;
			std::cin >> c;

			result = sqrt((c*c)-(b*b));

			area = ((1/2)(result) *b);
			perimeter = (result + b + c);

			std::cout << "Side A >> " << result << "\nArea >> " << area << "\nPerimeter >> " << perimeter << std::endl;

		}
	}
}