#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(const Dog &other) {
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Au Au!" << std::endl;
}