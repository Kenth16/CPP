#include "../include/Phonebook.hpp"

Phonebook::Phonebook() {
	this->CurrentIndex = 0;
}
Phonebook::~Phonebook() {}


std::string	Phonebook::formatField(std::string str)
{
	std::string	sub;

	if (str.length() > 10)
	{
		sub = str.substr(0, 9);
		sub.append(".");
		return (sub);
	}
	else
		return (str);
}

void	Phonebook::addContact() {
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	
	do {
		std::cout << "Enter First Name: ";
		std::getline(std::cin, firstName);
		if (std::cin.eof()) {
			std::cerr << "(EOF detected). Exiting.\n";
			std::cin.clear();
			return;
		}
	} while (firstName.empty());
	do {
		std::cout << "Enter Last Name: ";
		std::getline(std::cin, lastName);
		if (std::cin.eof()) {
			std::cerr << "(EOF detected). Exiting.\n";
			std::cin.clear();
			return;
		}
	} while (lastName.empty());
	do {
		std::cout << "Enter Nick Name: ";
		std::getline(std::cin, nickName);
		if (std::cin.eof()) {
			std::cerr << "(EOF detected). Exiting.\n";
			std::cin.clear();
			return;
		}
	} while (nickName.empty());
	do {
		std::cout << "Enter Phone Number: ";
		std::getline(std::cin, phoneNumber);
		if (std::cin.eof()) {
			std::cerr << "(EOF detected). Exiting.\n";
			std::cin.clear();
			return;
		}
	} while (phoneNumber.empty());
	do {
		std::cout << "Enter Darkest Secret: ";
		std::getline(std::cin, darkestSecret);
		if (std::cin.eof()) {
			std::cerr << "(EOF detected). Exiting.\n";
			std::cin.clear();
			return;
		}
	} while (darkestSecret.empty());
	
	Contact[CurrentIndex].setContact(firstName, lastName, nickName, phoneNumber, darkestSecret);
	CurrentIndex = (CurrentIndex + 1) % 8;
}

void    Phonebook::searchContacts()
{
    int 		i = 0;
	std::string	command;

    std::cout   << std::setw(10) << "index" << "|"
				<< std::setw(10) << "first name" << "|"
				<< std::setw(10) << "last name" << "|" 
				<< std::setw(10) << "nick name" << std::endl;
	std::cout << std::string(10 * 3 + 2, '-') << std::endl;

    while (i < 8)
	{
		std::cout   << std::setw(10) << i + 1 << "|"
				    << std::setw(10) << formatField(Contact[i].getFirstName()) << "|"
					<< std::setw(10) << formatField(Contact[i].getLastName()) << "|"
					<< std::setw(10) << formatField(Contact[i].getNickName()) << std::endl;
        i++;
	}
	std::cout << "Enter index : ";
	std::getline(std::cin, command);
	if (command.length() == 1 && command[0] >= '1' && command[0] <= '8')
	{
		int	cmd = command[0] - '0';
		std::cout << "First Name : " << Contact[cmd - 1].getFirstName() << std::endl;
		std::cout << "Last Name : " << Contact[cmd - 1].getLastName() << std::endl;
		std::cout << "Nick Name : " << Contact[cmd - 1].getNickName() << std::endl;
		std::cout << "Phone Number : " << Contact[cmd - 1].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret : " << Contact[cmd - 1].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Enter number 1-8" << std::endl;
}
