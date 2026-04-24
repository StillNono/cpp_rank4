#ifndef FRAGTRAP_CPP
#define FRAGTRAP_CPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
private:
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &rhs);
	~FragTrap();

	void highFivesGuys(void);

};









#endif