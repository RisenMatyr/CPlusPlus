//The Amazing Adventures of Brosius' Class
//You won't believe the awesome that lies in front of you!!!

#include <iostream>
#include <string>

int main()
{
	int student, noun1, noun2, noun3, verb1, verb2, verb3, number1, number2, bodypart1, bodypart2, animal;

	//get the information
	std::cout << "Welcome to The Amazing Adventures of Brosius' Class" << std::endl;
	std::cout << "Please enter the following for your personalized adventure" << std::endl;

	std::cout << "Enter your name: ";
	std::cin >> student;

	std::cout << "Enter three verbs: ";
	std::cin >> verb1, verb2, verb3;

	std::cout << "Enter three nouns: ";
	std::cin >> noun1, noun2, noun3;

	std::cout << "Enter two numbers: ";
	std::cin >> number1, number2;

	std::cout << "Enter a body part: ";
	std::cin >> bodypart1, bodypart2;

	std::cout << "Enter an animal: ";
	std::cin >> animal;

	//The story so far.
	std::cout << "\nOur story begins deep in the depths of the class of " << number1 << "\nWhat are you doing? I'm telling the story here!" << std::endl;
	std::cout << "\nOur story begins deep in the depths of the class of 161." << std::endl;
	std::cout << "\nOne student by the name of" << student << "\nStop! I'm telling the story not you!" << std::endl;
	std::cout << "One student by the name of Gairren was tasked to dissect a(n)" << animal << " he carefully removed it's" << bodypart1 << ", and " << bodypart2 << std::endl;

	std::cout << "\nAlong the way, a band of marauding ogres ambushed the party. " << std::endl;
	std::cout << "All fought bravely under the command of "  << std::endl;
	std::cout << ", and the ogres were defeated, but at a cost. " << std::endl;
	std::cout << "Of the adventurers, "  << " were vanquished, " << std::endl;

	std::cout << "leaving just "  << " in the group.\n" << std::endl;
	std::cout << "/nThe party was about to give up all hope. " << std::endl;
	std::cout << "But while laying the deceased to rest, " << std::endl;
	std::cout << "they stumbled upon the buried fortune. " << std::endl;
	std::cout << "So the adventurers split "  << " gold pieces." << std::endl;
	std::cout << " held on the the extra "  << std::endl;
	std::cout << " pieces to keep things fair of course.\n";
	std::cout << " The leader "  << " left on the great boat "  << std::endl;
	std::cout << "And was not seen for "  << " years." << std::endl;
}