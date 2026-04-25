#include <iostream>
#include <string>
#include "contact.hpp"

void	Contact::set_name(std::string str){
	this->_firstName = str;
}

void	Contact::set_lastname(std::string str){
	this->_lastName = str;
}

void	Contact::set_nickname(std::string str){
	this->_nickname = str;
}

void	Contact::set_phonenumber(std::string str){
	this->_phonenumber = str;
}

void	Contact::set_secret(std::string str){
	this->_secret = str;
}

std::string Contact::get_firstname(void) {
	return (this->_firstName);
}

std::string Contact::get_lastname(void){
	return (this->_lastName);
}

std::string Contact::get_nickname(void){
	return (this->_nickname);
}

std::string Contact::get_phonenumber(void){
	return (this->_phonenumber);
}

std::string Contact::get_secret(void){
	return (this->_secret);
}
