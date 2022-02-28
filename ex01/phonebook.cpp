#include "phonebook.hpp"

Phonebook::Phonebook()
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

void Phonebook::displaybook()
{
	int i = 0;
	std::cout << "|     index|first name|last  name| nickname |" << std::endl;
	while (i < len)
	{
		contact_list[i].print(i);
		i++;
	}
}

void Phonebook::search()
{
	int i;

	if (len == 0)
	{	
		std::cout << "Contact list is empty" << std::endl;
		return ;
	}
	std::cout << "Enter the contact's index: \n";
	std::cin >> i;
	if (i >= 0 && i <= len)
		contact_list[i].displaycontact(i);
	else
		std::cout << "Index is not valid" << std::endl;
}
