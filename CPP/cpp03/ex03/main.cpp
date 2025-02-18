#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    std::cout << BOLD << CYAN << "\n===== TESTING ClapTrap =====" << RESET << std::endl;
    {
        ClapTrap    clap("Clappy");

        std::cout << std::endl;
        clap.attack("Enemy");
        clap.takeDamage(5);
        clap.takeDamage(10);
        clap.attack("Enemy");
        clap.beRepaired(3);
        std::cout << std::endl;    
    }

    std::cout << BOLD << CYAN << "\n===== TESTING ScavTrap =====" << RESET << std::endl;
    {
        ScavTrap    scav("Scavy");

        std::cout << std::endl;
        scav.attack("Enemy");
        scav.takeDamage(20);
        scav.beRepaired(10);
        scav.guardGate();
        std::cout << std::endl;
    }

    std::cout << BOLD << CYAN << "\n===== TESTING FragTrap =====" << RESET << std::endl;
    {
        FragTrap    frag("Fraggy");

        std::cout << std::endl;
        frag.attack("Enemy");
        frag.takeDamage(30);
        frag.beRepaired(20);
        frag.highFivesGuys();
        std::cout << std::endl;
    }

    std::cout << BOLD << CYAN << "\n===== TESTING POLYMORPHISM =====" << RESET << std::endl;
    {
        ClapTrap*   ptr1 = new ScavTrap("PolyScav");
        ClapTrap*   ptr2 = new FragTrap("PolyFrag");

        std::cout << std::endl;
        ptr1->attack("[Bill]");
        ptr2->attack("[Turner]");
        std::cout << std::endl;        

        delete ptr1;
        delete ptr2;
    }

    std::cout << BOLD << CYAN << "\n===== END OF TESTS =====" << RESET << std::endl;
    return 0;
}