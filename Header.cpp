#include "Header.h"
#include <iostream>
#include <string>
#include <ctime> 

drinks::drinks()
{
	usersChoice = 0;
}

int drinks::goodDrink()
{
	usersChoice = 1;
	std::cout << "Your're not dead" << std::endl;
	return 0;
}

int drinks::badDrink()
{
	usersChoice = 2;
	std::cout << "Your dead" << std::endl;
	return 0;
}

