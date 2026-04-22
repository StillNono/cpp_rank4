#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _val(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_val = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    this->_val = n << _fractionalBits;
}

Fixed::Fixed(const float n) {
    std::cout << "Float constructor called" << std::endl;
    this->_val = roundf(n * (1 << _fractionalBits));
}

float Fixed::toFloat(void) const {
    return (float)this->_val / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return this->_val >> _fractionalBits;
}

int Fixed::getRawBits(void) const {
    return this->_val;
}

void Fixed::setRawBits(int const raw) {
    this->_val = raw;
}
