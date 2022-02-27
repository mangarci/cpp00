#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
private:
	contact contact_list[8];
	int len;
public:
	phonebook();
	void add();
	void display();
	void search();
	void exit();
}

#endif
