/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:13:07 by awallet           #+#    #+#             */
/*   Updated: 2023/03/03 15:11:01 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <stdlib.h>

bool static checkData(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!isdigit(str[i]))
			return (true);
	return (false);	
}

static void	checkEmptyField(Contact *self, std::string field, int i)
{
	if (field.empty())
		self->setContact(i);
}

void	Contact::setContact(int i)
{
	if (std::cin.eof())
			exit(0);
	this->_index = i;
	switch (i)
	{
		case 0:
		{
			std::cout << "Firstname: ";
			std::getline(std::cin, this->_firstname);
			checkEmptyField(this, this->_firstname, i);
			break ;
		}
		case 1:
		{
			std::cout << "Last name: ";
			std::getline(std::cin, this->_lastname);
			checkEmptyField(this, this->_lastname, i);
			break ;
		}
		case 2:
		{
			std::cout << "Nickname: ";
			std::getline(std::cin, this->_nickname);
			checkEmptyField(this, this->_nickname, i);
			break ;
		}
		case 3:
		{
			std::cout << "Number: ";
			std::getline(std::cin, this->_number);
			if (checkData(this->_number))
			{
				std::cout << "Only digit for the number field." << std::endl;
				this->_number.clear();
				this->setContact(i);
			}
			checkEmptyField(this, this->_number, i);
			break ;
		}
		case 4:
		{
			std::cout << "Secret: ";
			std::getline(std::cin, this->_secret);
			checkEmptyField(this, this->_secret, i);
			break ;
		}
	}
}