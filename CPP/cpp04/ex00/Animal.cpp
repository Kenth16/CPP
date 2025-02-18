#include "Animal.hpp"

Animal::Animal() : type("noType") {
    std::cout << "Animal " << BOLD << GREEN << this->type << RESET << " is created ! (default constructor)." << std::endl;
}

Animal::Animal(const Animal& other) {
    *this = other;
    std::cout << "Animal " << BOLD << GREEN << this->type << RESET << " is copied !" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    std::cout << "Animal " << BOLD << GREEN << this->type << RESET << " is assigned !" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal " << BOLD << GREEN << type << RESET << " is destroyed !" << std::endl;
}

void    Animal::makeSound(void) const {
    std::cout << BLUE << BOLD << this->type << RESET << " : " << "... ?" << std::endl;
}

std::string    Animal::getType(void) const {
    return type;
}
