#include <iostream>
#include <string>


int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return 1;
	}
	
	std::string aux = av[1];
	int i = 0;

	while (av[1][i])
	{
		char c = aux[i];
		c = toupper(c);
		std::cout << c;
		i++;
	}
}
