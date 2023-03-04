/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:44:47 by awallet           #+#    #+#             */
/*   Updated: 2023/03/04 19:24:46 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

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
	else if (input.empty())
		return (errorHandler("Your input can't be empty."));
	else if (checkData(input) == true || input.size() > 1)
		return (errorHandler("Can't find the contact, invalid SEARCH (only digit and 0-9)"));
	index = input.at(0) - '0';
	if (index > 7)
		return(errorHandler("Can't find the contact [" + input + "] It's only between 0 and 7."));
	this->_contact[index].showContact();
	
}
