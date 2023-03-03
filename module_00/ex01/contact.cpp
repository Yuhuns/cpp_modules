/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:13:07 by awallet           #+#    #+#             */
/*   Updated: 2023/03/01 20:39:42 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool	Contact::checkData(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!isdigit(str[i]))
			return (true);
	return (false);	
}

void	Contact::setContact(int i)
{
	switch (i)
	{
		case 0:
		{
			std::cout << "Firstname: ";
			std::getline(std::cin, this->_firstname);
			if (this->_firstname.empty())
				this->setContact(i);
			break ;
		}
		case 1:
		{
			std::cout << "Last name: ";
			std::getline(std::cin, this->_lastname);
			if (this->_lastname.empty())
				this->setContact(i);
			break ;
		}
		case 2:
		{
			std::cout << "Nickname: ";
			std::getline(std::cin, this->_nickname);
			if (this->_nickname.empty())
				this->setContact(i);
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
			else if (this->_number.empty())
				this->setContact(i);
			break ;
		}
		case 4:
		{
			std::cout << "Secret: ";
			std::getline(std::cin, this->_secret);
			if (this->_secret.empty())
				this->setContact(i);
			break ;
		}
	}
}