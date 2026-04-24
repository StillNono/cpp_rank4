#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Contructor called" << std::endl;
	this->_name = name;
	this->_attack = 0;
	this->_energy = 10;
	this->_health = 10;
}
ClapTrap::ClapTrap()
{
	std::cout << "Default Contructor called" << std::endl;
	this->_attack = 0;
	this->_energy = 10;
	this->_health = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap (const ClapTrap &other){
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	if (this != &other){
        this->_name = other._name;
        this->_health = other._health;
        this->_energy = other._energy;
        this->_attack = other._attack;
    }
	return *this;
}



void ClapTrap::takeDamage(unsigned int amount){
	this->_health -= amount;
    if ((unsigned int)this->_health < amount){
		std::cout << "ClapTrap " << this->_name << " its death" << std::endl;
        this->_health = 0;
		return;
	}
    std::cout << "ClapTrap " << this->_name << " took " << amount 
              << " points of damage!" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (this->_health <= 0){
		std::cout << "ClapTrap" << this->_name << " its already death" << std::endl;
		return;
	}
	if (this->_energy <= 0){
		std::cout << "ClapTrap" << this->_name << " needs energy" << std::endl;
		return;
	}
	this->_energy--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target 
              << ", causing " << this->_attack << " points of damage!" << std::endl;
}	

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_health <= 0 || this->_energy <= 0) {
        std::cout << "ClapTrap " << this->_name << " can't repair itself: no energy/HP left!" << std::endl;
        return;
    }
    this->_energy--;
    this->_health += amount;
    std::cout << "ClapTrap " << this->_name << " repairs itself, getting " 
              << amount << " hit points back!" << std::endl;
}