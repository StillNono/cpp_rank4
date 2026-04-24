#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_health = 100;
    this->_energy = 50;
    this->_attack = 20; 
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(){
	    std::cout << "ScavTrap constructor default called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other){
	*this = other;
}

ScavTrap::~ScavTrap(){
	    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
	if (this != &other){
        this->_name = other._name;
        this->_health = other._health;
        this->_energy = other._energy;
        this->_attack = other._attack;
    }
	return *this;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (this->_health <= 0){
		std::cout << "ScavTrap" << this->_name << " its already death" << std::endl;
		return;
	}
	if (this->_energy <= 0){
		std::cout << "ScavTrap" << this->_name << " needs energy" << std::endl;
		return;
	}
	this->_energy--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target 
              << ", causing " << this->_attack << " points of damage!" << std::endl;
}	
