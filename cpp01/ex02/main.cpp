#include <string>
#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string& stringREF = str;


	std::cout << "String adress: " << &str << std::endl;
	std::cout << "Memory adress by pointer: " << stringPTR << std::endl;
	std::cout << "String adress: " << &stringREF << std::endl;
	std::cout << "-------------------------------------------"<< std::endl;
	std::cout << "String value: " << str << std::endl;
	std::cout << "Value by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value by stringREF: " << stringREF << std::endl;
}