#include "Weapon.hpp"
#include "Human.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}

// int main() {
//     Weapon  kalash;

//     kalash.setType("Ak-47");
//     std::cout << "Weapon type: " << kalash.getType() << std::endl;

//     HumanA  Bob("Bob", kalash);
//     Bob.attack();
//     HumanB  Dylan("Dylan");
//     Dylan.attack();
//     Dylan.setWeapon(kalash);
//     Dylan.attack();

//     return 0;
// }