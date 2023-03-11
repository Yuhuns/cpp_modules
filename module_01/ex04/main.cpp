/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:03:08 by awallet           #+#    #+#             */
/*   Updated: 2023/03/11 16:22:41 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	errorHandler(std::string err)
{
	std::cout << err << std::endl;
}

std::string	getStr(std::ifstream &oldfile)
{
	std::string	str;
	std::string	buffer;

	while (!oldfile.eof() && oldfile.is_open())
	{
		std::getline(oldfile, buffer);
		str += buffer;
		if (!oldfile.eof())
			str += '\n';
	}
	return (str);
}

std::string	replaceStr(std::string str, std::string strtofind, std::string strtoreplace)
{
	size_t	pos = 0;
	std::string	newStr;

	while (str.find(pos, str.find(strtofind)) != std::string::npos)
	{
		newStr += str.substr(pos, str.find(strtofind));
	}
	return (newStr);
}

int	main(int ac, char **av)
{
	std::ifstream			oldfile;
	std::ofstream			newfile;
	std::string				string;
	char					*filename;

	if (ac > 3)
	{
		filename = av[1];
		oldfile.open(filename);
		newfile.open("replace");
		if (ac == 4 && oldfile.is_open() && newfile.good())
		{
			string = getStr(oldfile);
			string = replaceStr(string, av[2], av[3]);
			std::cout << string << std::endl;
		}
		else
			errorHandler("An error occured.");
	}
	else
		errorHandler("Missing somes arguments USE -> FILENAME STRTOFIND STRTOREPLACE");
	return (0);
}