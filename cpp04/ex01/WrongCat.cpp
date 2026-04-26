#include "WrongCat.hpp"

WrongCat::WrongCat() {
    this->_type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other)
        this->_type = other._type;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "Miau Errado!" << std::endl;
}