#include "Menu.h"
#include <iostream>


Menu::Menu()
{
}

void Menu::LoadMenu()
{
	/* Load the menu, display the options and wait for the user to make a decision. */
	int selected;
	std::cout << "+-----------------------------------------+\n";
	std::cout << "|1. Create a new account                  |\n";
	std::cout << "|2. Update account information            |\n";
	std::cout << "|3. Transaction log                       |\n";
	std::cout << "|4. Account details                       |\n";
	std::cout << "|5. Transfer                              |\n";
	std::cout << "|6. Exit                                  |\n";
	std::cout << "+-----------------------------------------+\n";
	do
	{
		std::cout << "Please make a choice: . . .";
		if (!(std::cin >> selected))
		{
			std::cout << "Please enter numbers only!\n";
			std::cin.clear();
			std::cin.ignore();
		}

	} while (selected < 1 || selected > 6);

	this->CallBoundMethod(selected);
}

void Menu::CallBoundMethod(const int &selected)
{
	std::cout << "Selected " << selected;
}