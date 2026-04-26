#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other), _brain(NULL){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
        if (this->_brain)
            delete this->_brain;
        this->_brain = new Brain(*other._brain);
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Au Au!" << std::endl;
}