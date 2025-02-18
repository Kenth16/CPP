#include "Animal.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "--- Creating Animals ---" << std::endl;
    
    Animal* animal1 = new Animal();
    Animal* cat1 = new Cat();

    std::cout << "--- Making Sounds ---" << std::endl;
    animal1->makeSound();
    cat1->makeSound();

    std::cout << "--- Deleting Animals ---" << std::endl;
    delete animal1;
    delete cat1;

    return 0;
}
