#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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

#include <iostream>
#include <string>

class   Animal {

protected:
    std::string type;

public:
    Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();

    std::string    getType(void) const;
    virtual void    makeSound(void) const;
};

#endif
