#include <iostream>
#include <string>
#include "Header.h" 
#include <ctime>


void gameCode();

void main()
{
	gameCode();

	bool playAgain;
	std::cout << "Wanna play again? (1. yes/ 0. no)" << std::endl;
	std::cin >> playAgain;
	
	if (playAgain == true) {
		std::cout << "You chose to play again" << std::endl;
			gameCode();
	}
	else {
		std::cout << "closing" << std::endl;
	}
}

void gameCode()
{

	drinks testing;
	int xRan;
	int choice;
	srand(time(0));
	xRan = rand() % 2 + 1;

	std::cout << "1. Mystery  syrup 1: Bubbly, Weird odor, Green" << std::endl;
	std::cout << "2. Mystery  syrup 2: White, thick, flat liquid" << std::endl;
	std::cin >> choice;
	if (xRan == 1) {
		testing.goodDrink();
	}
	else if (xRan == 2) {
		testing.badDrink();
	}
}