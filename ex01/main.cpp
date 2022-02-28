#include "phonebook.hpp"

int main()
{
	Phonebook book;
	std::string cmd;

	while (1)
	{
		std::cout << "Select a command: ADD, SEARCH, EXIT\n";
		std::cin >> cmd;
		if (cmd == "ADD")
			book.add();
		else if (cmd == "SEARCH")
		{
			book.displaybook();
			book.search();
		}
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}
