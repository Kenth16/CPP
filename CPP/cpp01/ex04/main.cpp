#include <fstream>
#include <iostream>
#include <string>


void	replaceOccurences(std::string& line, const std::string& search, const std::string& replace)
{
	size_t	pos = 0;
	while ((pos = line.find(search, pos)) != std::string::npos)
	{
		line.erase(pos, search.length()); //supprime l'ancienne occurence
		line.insert(pos, replace); //inserer la nouvelle
		pos += replace.length();
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string	inputFilename = av[1];
		std::string searchStr = av[2];
		std::string replaceStr = av[3];
		std::string	outputFilename = inputFilename + ".replace";

		if (searchStr.empty())
		{
			std::cerr << "Error: av[2] is empty" << std::endl;
			return 1;
		}

		std::ifstream	inputFile(inputFilename.c_str());
		if (!inputFile)
		{
			std::cerr << "Error: ......." << std::endl;
			return 1;
		}

		std::ofstream outputFile(outputFilename.c_str());
		if (!outputFile)
		{
			std::cerr << "Error : ......" << std::endl;
			return 1;
		}

		std::string	line;
		while (std::getline(inputFile, line))
		{
			replaceOccurences(line, searchStr, replaceStr);
			outputFile << line << std::endl;
		}

		inputFile.close();
		outputFile.close();

		std::cout << "Finish !" << std::endl;
		return 0;
	}
}
