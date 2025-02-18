#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class   ClapTrap {

protected:
    std::string _name;
    int         _hitPoints;
    int         _energy;
    int         _attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string newName);
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);    
    virtual ~ClapTrap();

    virtual void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};

#endif