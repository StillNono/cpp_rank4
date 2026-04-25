#include "Zombie.hpp"

int main()
{
	int n = 5;
	Zombie* horde = zombieHorde(n, "Walkers");

	for (int i = 0; i < n; i++)
	{
		horde[i].announce();
	}
	

}