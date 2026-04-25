#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"
#include <iomanip>

class Phonebook
{
private:
	Contact _contacts[8];
	int		_count;
	std::string _valid_input(std::string str, bool name, bool is_digit);
	bool _is_digit(std::string str);
	bool _is_space(std::string str);
public:
	Phonebook();
	void _add_contact();
	std::string _format_str(std::string str);
	void	_search_contact();
	void	_display_contact(int limit);
};


#endif
