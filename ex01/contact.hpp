#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
public:
	Contact();
	void add();
	void display(int index);
	std::string print(std::string str);
}

#endif
