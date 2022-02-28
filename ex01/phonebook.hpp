#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook
{
private:
	contact contact_list[8];
	int len;
public:
	Phonebook();
	void add();
	void displaybook();
	void search();
};

#endif
