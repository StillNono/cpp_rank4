#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other)
        this->_type = other._type;
    return *this;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal generic sound... (silêncio bizarro)" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->_type;
}