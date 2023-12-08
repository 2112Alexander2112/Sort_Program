#pragma once
class Menu
{
	std::string name;
	std::vector<std::string> menuItem;
public:
	Menu(std::string name, std::vector<std::string> menuItem);
	void display();
	int choiceProgram();
	bool allowProgram();
};

