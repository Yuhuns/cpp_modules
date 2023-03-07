/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:44:47 by awallet           #+#    #+#             */
/*   Updated: 2023/03/07 14:26:29 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::add(unsigned int index)
{
	int	n;

	n = -1;
	this->_contact[index].setIndex(index);
	while (++n < 5)
		this->_contact[index].setContact(n);
}

void	PhoneBook::show(unsigned int index)
{
	unsigned int	i = this->_contact[index].getIndex();
	std::string 	firstname = this->_contact[index].getContact(0);
	std::string		lastname = this->_contact[index].getContact(1);
	std::string		nickname = this->_contact[index].getContact(2);

	if (firstname.empty())
		return ;	
	if (i == 0)
		std::cout << "|	Index	|	Firstname	|	Lastname	|	Nickname	|" << std::endl;
	std::cout << "|	"+ std::to_string(i) +"	|	"+ firstname +"	|	"+ lastname +"	|	"+ nickname +"	|" << std::endl;
}

void	PhoneBook::search(void)
{
	unsigned int	index;
	std::string		input;
	std::string		str;
	
	for (unsigned int i = 0; i < 7; i++)
	{
		if (this->_contact[0].getContact(0).empty())
			return (errorHandler("The PhoneBook is empty."));
		this->show(i);
	}
	std::cout << "Please enter an index: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
	else if (input.empty())
		return (errorHandler("Your input can't be empty."), this->search());
	else if (checkData(input) == true || input.size() > 1)
		return (errorHandler("Can't find the contact, invalid SEARCH (only digit and 0-9)"));
	index = input.at(0) - '0';
	if (index > 7)
		return(errorHandler("Can't find the contact [" + input + "] It's only between 0 and 7."));
	this->_contact[index].showContact();
	
}
