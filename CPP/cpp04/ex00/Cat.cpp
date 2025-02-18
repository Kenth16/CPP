#include "Cat.hpp"

Cat::Cat() {
    this->type = "Cat";
    std::cout << YELLOW "Hi GrumpyCat !" RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    this->type = other.type;
    std::cout << YELLOW "Garlic the first cat clone appeared ! Congratulations !" RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other)
        this->type = other.type;
    return *this;
}

Cat::~Cat(void) {
    std::cout << YELLOW "GrumpyCat is dead nooooooOOO !" RESET << std::endl;
}

void    Cat::makeSound(void) const {
    std::cout << "Meoow !" << std::endl;
}

std::string    Cat::getType(void) const {
    return type;
}
