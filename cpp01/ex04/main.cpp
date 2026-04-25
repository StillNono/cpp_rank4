#include "Sed.hpp"

std::string	my_replace(std::string strFile, std::string s1, std::string s2){
	
	if (s1.empty()) return strFile;
	
	std::string result;
	size_t pos = 0;
	size_t lastpos = 0;

	while ((pos = strFile.find(s1, lastpos)) != std::string::npos)
	{
		result += strFile.substr(lastpos, pos - lastpos);
		result += s2;
		lastpos = pos + s1.length();
	}

	result += strFile.substr(lastpos);
	return result;
}

std::string copyFile(std::ifstream& file)
{
	std::string content;
    std::string line;
	while (std::getline(file, line))
	{
		content += line;
		if (!file.eof())
			content += "\n";
	}
	return content;
}

int main(int ac, char **av)
{
	if (ac != 4){
		std::cout << "Erro: Use ./sed_is_for_losers <filename> <s1> <s2>" << std::endl;
		return 1;
	}

	std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

	std::ifstream file(av[1]);
	if (!file.is_open())
	{
		std::cout << "Error: Could not open the file" << std::endl;
		return (1);
	}

	std::string strFile = copyFile(file);
	file.close();

	std::string finalResult = my_replace(strFile, s1, s2);

	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile.is_open())
    {
        std::cout << "Error: Could not create replace file" << std::endl;
        return (1);
    }
    outFile << finalResult;
    outFile.close();
	return 0;
}
