#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class Phonebook {
private:
	Contact	Contact[8];
	int     CurrentIndex;
public:
	Phonebook();
	~Phonebook();

	std::string	formatField(std::string str);
	void	addContact();
	void	searchContacts();
	void	exit();
};

#endif