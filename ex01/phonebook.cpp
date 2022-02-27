#include "phonebook.hpp"

void Phonebook::phonebook()
{
	len = 0;
}

void Phonebook::add()
{
	if (len == 8)
	{
		std::cout << "Phonebook is full, oldest contact will be remove\n";
		for (int i = 1; i < len; i++)
			contact_list[i].add();
	}
	else
	{
		contact_list[len].add();
		len++;
	}
}

void Phonebook::display()
{
	int i = 0;
	std::cout << "|     index|
}
