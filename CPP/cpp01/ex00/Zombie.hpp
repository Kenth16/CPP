#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

private:
    std::string name;

public:
    Zombie();
    ~Zombie();

    void    annonce( void );
    
}

#endif