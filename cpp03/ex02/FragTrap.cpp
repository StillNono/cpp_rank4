#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->_health = 100;
    this->_energy = 100;
    this->_attack = 30; 
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(){
	    std::cout << "FragTrap constructor default called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other){
	*this = other;
}

FragTrap::~FragTrap(){
	    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other){
	if (this != &other){
        this->_name = other._name;
        this->_health = other._health;
        this->_energy = other._energy;
        this->_attack = other._attack;
    }
	return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << _name << " says: Give me a high five, guys! 👋" << std::endl;
}