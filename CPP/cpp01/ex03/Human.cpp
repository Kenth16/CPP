#include "Human.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string newName, Weapon& newWeapon) : _nameWeapon(newWeapon), _name(newName) {}

HumanA::~HumanA() {}

void    HumanA::attack() {
    std::string typeWeapon = _nameWeapon.getType();
    std::cout << _name << " attacks with their " << typeWeapon << std::endl;
}

/************************************************************/

HumanB::HumanB(std::string newName) : _name(newName), _nameWeapon(NULL) {}

HumanB::~HumanB() {}

void    HumanB::setWeapon(Weapon& newWeapon) {
    this->_nameWeapon = &newWeapon;
}

void    HumanB::attack() {
    std::cout << _name << " attacks with their " << _nameWeapon->getType() << std::endl;
}

