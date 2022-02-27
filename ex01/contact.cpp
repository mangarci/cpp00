#include "contact.hpp"

void contact::contact()
{
}

void contact::add()
{
	std::cout << "Please enter first name: ";
	std::cin >> this->first_name;
	std::cout << "Please enter last name: ";
	std::cin >> this->last_name;
	std::cout << "Please enter nickname: ";
	std::cin >> this->nickname;
	std::cout << "Please enter phone number: ";
	std::cin >> this->phone_number;
	std::cout << "Please enter darkest secret: ";
	std::cin >> this->darkest_secret;
	std::cout << "Contact was succesfully created\n";
}

void contact::display(int index)
{
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

std::string contact::print(std::string str)
{
	int	i;
	std::string aux;

	if (strlen(str) > 10)
	{
		aux = str.substr(0,9);
		aux.inster(9, ".");
	}
	else
		aux = str;
	return (aux);
}
