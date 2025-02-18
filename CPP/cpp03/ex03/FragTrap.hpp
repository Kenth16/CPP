#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class   FragTrap : virtual public ClapTrap {

protected:
    int         _hitPoints;
    int         _attackDamage;

public:
    FragTrap();
    FragTrap(std::string newName);
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);    
    ~FragTrap();

	void    attack(const std::string& target);
	void    highFivesGuys(void);

};

#endif