#include "DiamondTrap.hpp"



DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap(), _name("Default") {
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energy = ScavTrap::_energy;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << BOLD << GREEN << _name << RESET << " is created ! (default constructor)" << std::endl;
}


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name),  FragTrap(name), _name(name) {
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energy = ScavTrap::_energy;
    this->_attackDamage = FragTrap::_attackDamage;
    std::cout << "DiamondTrap " << BOLD << GREEN << _name << RESET << " is created ! (name constructor)" << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
    std::cout << "DiamondTrap " << BOLD << GREEN << _name << RESET << " is copied !" << std::endl;
}


DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        this->_name = other._name;
    }
    std::cout << "DiamondTrap " << BOLD << GREEN << _name << RESET << " is assigned !" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << BOLD << GREEN << _name << RESET << " is destroyed !" << std::endl;
}


void    DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI() {
    if (this->_energy < 0) {
		std::cout << BOLD << RED << "ScavTrap => Energy : 0, whoAmI not possible." << RESET << std::endl;
		return ;
	}
	if (this->_hitPoints < 0) {
		std::cout << BOLD << RED << "ScavTrap => Hp : 0, whoAmI not possible." << RESET << std::endl;
        return ;
	}
    std::cout << "I am " << BOLD << GREEN << _name << RESET << " and my ClapTrap name is " << BOLD << YELLOW << ClapTrap::_name << RESET << " !" << std::endl;
}
