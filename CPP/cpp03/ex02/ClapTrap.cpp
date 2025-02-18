#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energy(10), _attackDamage(0) {
	std::cout << "ClapTrap " << BOLD << GREEN << BOLD << GREEN << BOLD << GREEN << _name << RESET << RESET << RESET << " is created ! (default constructor)." << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : _name(newName), _hitPoints(10), _energy(10), _attackDamage(0) {
	std::cout << "ClapTrap " << BOLD << GREEN << BOLD << GREEN << _name << RESET << RESET << " is created ! (name constructor)." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "ClapTrap " << BOLD << GREEN << BOLD << GREEN << _name << RESET << RESET << " is copied !" << std::endl;
	*this = other;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& other) {
	    std::cout << "ClapTrap " << BOLD << GREEN << BOLD << GREEN << _name << RESET << RESET << " is assigned !" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energy = other._energy;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << BOLD << GREEN << BOLD << GREEN << _name << RESET << RESET << " is destroyed !" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
	if (this->_energy < 0) {
		std::cout << BOLD << RED << "ClapTrap => Energy : 0, attack not possible." << RESET << std::endl;
		return ;
	}
	if (this->_hitPoints < 0) {
		std::cout << BOLD << RED << "ClapTrap => Hp : 0, attack not possible." << RESET << std::endl;
		return ;
	}
	std::cout   << "ClapTrap " << BOLD << GREEN << _name << RESET << " attacks "
				<< BOLD << RED << target << RESET << ", causing " << BOLD << RED << _attackDamage << RESET
				<< " points of damage !" << std::endl;
	this->_energy--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < 0) {
		std::cout << BOLD << RED << "ClapTrap => Hp : 0, takeDamage not possible." << RESET << std::endl;
		return ;
	}
	std::cout   << "ClapTrap " << BOLD << GREEN << BOLD << GREEN << _name << RESET << RESET << " loses " << amount
				<< " hit points !" << std::endl;
	this->_hitPoints -= amount;

}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < 10 && this->_hitPoints > 0)
	{
		std::cout   << "ClapTrap " << BOLD << GREEN << BOLD << GREEN << _name << RESET << RESET << " heals for " << amount
					<< " hit points !" << std::endl;
		if (this->_hitPoints + amount > 10)
			this->_hitPoints = 10;
		else
			this->_hitPoints += amount;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << BOLD << GREEN << BOLD << GREEN << _name << RESET << RESET << " is already at full health or dead!" << std::endl;
}
