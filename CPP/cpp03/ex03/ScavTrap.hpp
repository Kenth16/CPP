#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap : virtual public ClapTrap {

protected:
    int         _energy;

public:
	ScavTrap();
	ScavTrap(std::string newName);
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);    
	 ~ScavTrap();

	void    attack(const std::string& target);
	void    guardGate();
};

#endif
