/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:44:47 by awallet           #+#    #+#             */
/*   Updated: 2023/03/03 18:49:25 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool static checkData(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!isdigit(str[i]))
			return (true);
	return (false);	
}

void	PhoneBook::add(unsigned int index)
{
	int	n;

	n = -1;
	while (++n < 5)
		this->_contact[index].setContact(n);
}

void	PhoneBook::search(void)
{
	unsigned int	index;
	std::string		input;
	
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
	else if (!checkData(input) && input.size() > 1)
	{
		std::cout << "Can't find the contact, invalid SEARCH (only digit and 0-9)" << std::endl;
		return ;
	}
	index = input.at(0) - '0';
	if (index > 7)
	{
		std::cout << "Can't find the contact [" + input + "] It's only between 0 and 7." << std::endl;
		return ;
	}
	this->_contact[index].showContact();
	
}
