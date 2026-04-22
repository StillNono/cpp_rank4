#include "Fixed.hpp"

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

std::ostream &operator<<(std::ostream &o, Fixed const &i) {
    o << i.toFloat();
    return o;
}

// --- Operadores de Comparação ---
// >, <, >=, <=, ==, !=

bool Fixed::operator>(const Fixed &other) const{
	return this->_val > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const{
	return this->_val < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const{
	return this->_val >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const{
	return this->_val <= other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const{
	return this->_val != other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) const{
	return this->_val == other.getRawBits();
}

// --- Operadores Aritimedicos ---
// +, -, *, /

Fixed Fixed::operator+(const Fixed &other) const {
    Fixed res;
    res.setRawBits(this->_val + other.getRawBits());
    return res;
}

Fixed Fixed::operator-(const Fixed &other) const {
    Fixed res;
    res.setRawBits(this->_val - other.getRawBits());
    return res;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed res;
    res.setRawBits((long)this->_val * other.getRawBits() >> _fractionalBits);
    return res;
}

Fixed Fixed::operator/(const Fixed &other) const {
    return Fixed(this->toFloat() / other.toFloat());
}

// --- Operadores de Incremento e Decremento ---
// a++, a--, ++a, --a

Fixed &Fixed::operator++(void){
   this->_val++;
   return *this;
}

Fixed &Fixed::operator--(void){
   this->_val--;
   return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this); 
    this->_val++;
    return temp;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this); 
    this->_val--;
    return temp;
}

// Versões para referências normais
Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

// Versões para referências constantes (Obrigatórias!)
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}