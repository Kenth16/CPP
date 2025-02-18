#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap " << BOLD << GREEN << _name << RESET << " is created ! (default constructor)." << std::endl;
	this->_hitPoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string newName) : ClapTrap(newName) {
	std::cout << "FragTrap " << BOLD << GREEN << _name << RESET << " is created ! (name constructor)." << std::endl;
	this->_name = newName;
	this->_hitPoints = 100;
	this->_energy = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap " << BOLD << GREEN << _name << RESET << " is copied !" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	if (this != &other) 
		ClapTrap::operator=(other);
    std::cout << "FragTrap " << BOLD << GREEN << _name << RESET << " is assigned !" << std::endl;
	return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << BOLD << GREEN << _name << RESET << " is destroyed !" << std::endl;
}

void    FragTrap::attack(const std::string& target) {
	if (this->_energy < 0) {
		std::cout << BOLD << RED << "FragTrap => Energy : 0, attack not possible." << RESET << std::endl;
		return ;
	}
	if (this->_hitPoints < 0) {
		std::cout << BOLD << RED << "FragTrap => Hp : 0, attack not possible." << RESET << std::endl;
		return ;
	}
	std::cout   << "FragTrap " << BOLD << GREEN << _name << RESET << " attacks "
				<< BOLD << RED << target << RESET << ", causing " << BOLD << RED << _attackDamage << RESET
				<< " points of damage !" << std::endl;
	this->_energy--;
}

void    FragTrap::highFivesGuys(void) {
	if (this->_energy < 0) {
		std::cout << BOLD << RED << "FragTrap => Energy : 0, highFives not possible." << RESET << std::endl;
		return ;
	}
	if (this->_hitPoints < 0) {
		std::cout << BOLD << RED << "FragTrap => Hp : 0, highFives not possible." << RESET << std::endl;
		return ;
	}
	std::cout << "FragTrap " << BOLD << GREEN << _name << RESET << " is asking for a high five ! Who's in ?" << std::endl;
}

