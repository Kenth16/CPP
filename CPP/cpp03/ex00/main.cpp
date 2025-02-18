#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    A;
    ClapTrap    B("Jason");
    ClapTrap    C = B;

    A.attack("Jaaa");
    B.attack("Qwerty");
    A.takeDamage(5);
    B.takeDamage(10);
    A.beRepaired(6);
    B.beRepaired(2);
    for (int i = 0; i < 12; i++)
    {
        C.attack("Aze");
    }
    C.beRepaired(5);
    C.takeDamage(2);
    return 0;
}