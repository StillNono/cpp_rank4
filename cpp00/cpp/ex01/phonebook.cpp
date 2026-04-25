#include <iostream>
#include <string>
#include <stdlib.h>
#include "phonebook.hpp"

Phonebook::Phonebook(){
	this->_count = 0;
}

bool Phonebook::_is_digit(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	if (str.length() < 9 || str.length() > 9)
		return (false);

	return true;
	
}
bool Phonebook::_is_space(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isalpha(str[i]))
			return false;
	}
	return true;
	
}

std::string Phonebook::_format_str(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}



void	Phonebook::_search_contact()
{
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;

	int limit = (this->_count > 8) ? 8 : this->_count;

	for (int i = 0; i < limit; i++)
	{
		std::cout << "|" << std::setw(10) << i;
        std::cout << "|" << std::setw(10) << _format_str(this->_contacts[i].get_firstname());
        std::cout << "|" << std::setw(10) << _format_str(this->_contacts[i].get_lastname());
        std::cout << "|" << std::setw(10) << _format_str(this->_contacts[i].get_nickname()) << "|" << std::endl;
	}

	this->_display_contact(limit);
	
}

void	Phonebook::_display_contact(int limit)
{
	std::string input;
	std::cout << "Please provide the contact index for more details: \n";
	std::getline(std::cin, input);

	if (input.length() == 1 && input[0] >= '0' && input[0] < '0' + limit)
	{
		int i = input[0] - '0';
		std::cout << "First Name: " << this->_contacts[i].get_firstname() << std::endl;
        std::cout << "Last Name: " << this->_contacts[i].get_lastname() << std::endl;
        std::cout << "Nickname: " << this->_contacts[i].get_nickname() << std::endl;
        std::cout << "Phone: " << this->_contacts[i].get_phonenumber() << std::endl;
        std::cout << "Secret: " << this->_contacts[i].get_secret() << std::endl;
	}
	else
		std::cout << "Invalid index!" << std::endl;
}

std::string Phonebook::_valid_input(std::string str, bool name, bool only_digit)
{
	std::string input;

	while (true){
		std::cout << str;
		if (!std::getline(std::cin, input))
			exit(0);
		
		if (input.empty()){
			std::cout << "Please type something...\n";
			continue;
		}

		if (name && !this->_is_space(input)){
			std::cout << "Space and second name not allowed!!\n";
			continue;
		}

		if (only_digit && !this->_is_digit(input)){
			std::cout << "Only numbers allowed. Must be 9 digits long.!!\n";
			continue;
		}
		break;
	}
	return (input);
}

void Phonebook::_add_contact()
{
	int	i = this->_count % 8;
	std::string input;

	input = this->_valid_input("Write the first name:\n", true, false);
	this->_contacts[i].set_name(input);

	input = this->_valid_input("Write last name:\n", true, false);
	this->_contacts[i].set_lastname(input);

	input = this->_valid_input("Write phone number:\n", false, true);
	this->_contacts[i].set_phonenumber(input);

	input = this->_valid_input("Write nick name:\n", false, false);
	this->_contacts[i].set_nickname(input);

	input = this->_valid_input("Write the darkest secret:\n", false,false);
	this->_contacts[i].set_secret(input);

	std::cout << "!! Contact saved !!\n";

	this->_count++;
}