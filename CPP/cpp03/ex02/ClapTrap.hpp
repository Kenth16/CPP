#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLD    "\033[1m"
#define ITALIC  "\033[3m"
#define PURPLE  "\033[35m"

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