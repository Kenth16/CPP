#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap() {
	this->_hitPoints = 100;
    this->_energy = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << BOLD << GREEN << _name << RESET << " is created ! (default constructor)" << std::endl;
}

ScavTrap::ScavTrap(std::string newName) : ClapTrap(newName) {
	this->_hitPoints = 100;
    this->_energy = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << BOLD << GREEN << _name << RESET << " is created ! (name constructor)" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap " << BOLD << GREEN << _name << RESET << " is copied !" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap " << BOLD << GREEN << _name << RESET << " is assigned !" << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << BOLD << GREEN << _name << RESET << " is destroyed !" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
{
	if (this->_energy > 0 && this->_hitPoints > 0)
	{
		std::cout   << "ScavTrap " << BOLD << GREEN << _name << RESET << " attacks "
					<< BOLD << RED << target << RESET << ", causing " << BOLD << RED << _attackDamage << RESET
					<< " points of damage !" << std::endl;
		this->_energy--;
	}
	else
		std::cout   << "ScavTrap " << BOLD << GREEN << _name << RESET
					<< " does not have enough energy or health for attack !" << std::endl;
}
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap " << BOLD << GREEN << _name << RESET << " is now a Gate keeper !" << std::endl;
}

