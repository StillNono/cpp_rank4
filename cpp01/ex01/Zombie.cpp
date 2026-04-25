#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name){
	this->_name = name;
}

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 0)
		return NULL;
	
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].set_name(name);
	return horde;
}