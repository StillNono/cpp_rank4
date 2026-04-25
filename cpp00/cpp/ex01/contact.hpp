#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>


class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phonenumber;
	std::string _secret;
public:
	void set_name(std::string name);
	void set_lastname(std::string str);
	void set_phonenumber(std::string str);
	void set_secret(std::string str);
	void set_nickname(std::string str);

	std::string get_firstname();
	std::string get_lastname();
	std::string get_phonenumber();
	std::string get_secret();
	std::string get_nickname();
};

#endif