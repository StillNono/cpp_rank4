#include <iostream>
#include <string>
#include <cstring>
#include "phonebook.hpp"

void	opitions_print(void)
{
	std::cout << "Write one of this options\n";
	std::cout << "ADD: save a new contact\n";
	std::cout << "SEARCH: display contacts and a specific contact\n";
	std::cout << "EXIT: to close the phonebook\n" << std::endl;
}


int main()
{
	Phonebook schedule;
	std::string input;
	opitions_print();

	while (true)
	{
		opitions_print();
		if (!std::getline(std::cin, input)){
			std::cout << "\nQuiting the process..." << std::endl;
			break;
		}
			
		if (input == "EXIT")
			break;
		else if(input == "ADD"){
			schedule._add_contact();
			std::cout << "Enter one of the initial commands to proceed: \n";
		}
		else if (input == "SEARCH"){
			schedule._search_contact();
			std::cout << "Enter one of the initial commands to proceed: \n";
		}
		else
			std::cout << "\nInvalid Command!" << std::endl;
	}
	return (0);
}