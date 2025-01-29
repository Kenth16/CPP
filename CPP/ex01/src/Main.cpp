#include "../include/Phonebook.hpp"
#include "../include/Contact.hpp"
#include <iostream>
#include <string>

int main() {
	Phonebook   phoneBook;
	std::string command;

	std::cout << "Welcome to the PhoneBook !" << std::endl;

	while (1) {
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline (std::cin, command);

		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContacts();
		else if (command == "EXIT")
			break;
		else if (std::cin.eof())
		{
			std::cerr << "(EOF Detected). Exiting.\n";
			std::cin.clear();
			return (1);
		}
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}
