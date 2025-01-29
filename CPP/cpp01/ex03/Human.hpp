#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {

private:
    Weapon&     _nameWeapon;
    std::string _name;

public:
    HumanA(std::string newName, Weapon& newWeapon);
    ~HumanA();
    
    void    attack();

};

class HumanB {

private:
    std::string _name;
    Weapon*     _nameWeapon;

public:
    HumanB(std::string newName);
    ~HumanB();

    void    setWeapon(Weapon& newWeapon);
    void    attack();
};


#endif