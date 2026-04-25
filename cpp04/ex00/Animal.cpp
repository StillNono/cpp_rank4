#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal default constructor called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(const Animal &other) {
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal &Animal::operator=(const Animal &other) {
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const{
	std::cout << "Get Type called!" << std::endl;
	return this->_type;
}

void Animal::makeSound ()const{
	std::cout << "Animals generic sound..." << std::endl;
}
