#include "Zombie.hpp"

int main()
{
	std::cout << "Create a object\n";
	Zombie z("Fred");
	z.announce();
	z.~Zombie();
	std::cout << 2 ;


	Zombie* heapZombie = newZombie("jaum");
	heapZombie->announce();
	heapZombie->~Zombie();
	delete heapZombie;

	randomChump("marquin");
	
}