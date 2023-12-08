#include "Header.h"
#include "Menu.h"

Menu::Menu(std::string name, std::vector<std::string> menuItem)
	: name(name), menuItem(menuItem)
{
}

void Menu::display()
{
	std::cout << "  " << name << std::endl;
	std::cout << "=======================================\n";
	for (int i = 0; i < menuItem.size(); i++) {
		std::cout << i + 1 << "   ";
		std::cout << menuItem[i] << std::endl;
	}
}

int Menu::choiceProgram()
{
	int choice;
	std::cout << "\n> : ";
	std::cin >> choice;
	return choice;
}

bool Menu::allowProgram()
{
	std::string allow;
	std::cout << "\n> (y/n): ";
	std::cin >> allow;
	return (allow == "y");
}
