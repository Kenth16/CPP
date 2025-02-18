#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("NULL"), _hitPoints(10), _energy(10), _attackDamage(0) {
	std::cout << "Default constructor called : " << BOLD << GREEN << _name << RESET << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : _name(newName), _hitPoints(10), _energy(10), _attackDamage(0) {
	std::cout << "Parameterized constructor called : " << BOLD << GREEN << _name << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "Copy constructor called : " << other._name << std::endl;
	*this = other;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Assignment operator called : " << other._name << std::endl;
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
	std::cout << "Destrucotr called : " << BOLD << GREEN << _name << RESET << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
	if (this->_energy < 0) {
		std::cout << BOLD << RED << "ClapTrap => Energy : 0, attack not possible." << RESET << std::endl;
		return ;
	}
	if (this->_hitPoints < 0) {
		std::cout << BOLD << RED << "ClapTrap => Hp : 0, attack not possible." << RESET << std::endl;
	}
	std::cout   << "ClapTrap " << BOLD << GREEN << _name << RESET << " attacks "
				<< BOLD << RED << target << RESET << ", causing " << BOLD << RED << _attackDamage << RESET
				<< " points of damage !" << std::endl;
	this->_energy--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0 && this->_energy > 0)
	{
		std::cout   << "ClapTrap " << BOLD << GREEN << _name << RESET << " loses " << amount
					<< " hit points !" << std::endl;
		this->_hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap is already dead or does not have enough energy !" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < 10 && this->_hitPoints > 0)
	{
		std::cout   << "ClapTrap " << BOLD << GREEN << _name << RESET << " heals for " << amount
					<< " hit points !" << std::endl;
		if (this->_hitPoints + amount > 10)
			this->_hitPoints = 10;
		else
			this->_hitPoints += amount;
		this->_energy--;
	}
	else
		std::cout << "ClapTrap " << BOLD << GREEN << _name << RESET << " is already at full health or dead!" << std::endl;
}
