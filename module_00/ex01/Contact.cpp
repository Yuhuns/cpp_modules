/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:13:07 by awallet           #+#    #+#             */
/*   Updated: 2023/03/08 15:01:31 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool checkData(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (!isdigit(str[i]))
			return (true);
	return (false);	
}

void	errorHandler(std::string msg)
{
	std::cout << msg << std::endl;
}

static void	checkEmptyField(Contact *self, std::string field, int i)
{
	if (field.empty())
		self->setContact(i);
}

int	Contact::getIndex(void)
{
	return (this->_index);
}

void Contact::setIndex(int index)
{
	this->_index = index;
}

std::string	Contact::getContact(int index)
{
	switch (index)
	{
		case 0:
			return (this->_firstname);
		case 1:
			return (this->_lastname);
		case 2:
			return (this->_nickname);
		case 3:
			return (this->_number);
		case 4:
			return (this->_secret);
	}
	return (NULL);
}

void	Contact::showContact(void)
{
	if (this->_firstname.empty())
		return (errorHandler("🤷🏻‍♂️ Can't find contact because he doesn't exist."));
	std::cout << std::endl << "=== PHONEBOOK ID: "+ std::to_string(this->_index) +", 🕵🏻 BIG BROTHER DATA INFORMATIONS ===" << std::endl;
	std::cout << "1️⃣ Firstname		||	" + this->_firstname << std::endl;
	std::cout << "2️⃣ Last name		||	" + this->_lastname << std::endl;
	std::cout << "3️⃣ Nickmame		||	" + this->_nickname << std::endl;
	std::cout << "4️⃣ Number		||	" + this->_number << std::endl;
	std::cout << "5️⃣ Darkest secret	||	" + this->_secret << std::endl << std::endl;
}

void	Contact::setContact(int i)
{
	if (std::cin.eof())
			exit(0);
	switch (i)
	{
		case 0:
		{
			std::cout << "1️⃣ Firstname: ";
			std::getline(std::cin, this->_firstname);
			checkEmptyField(this, this->_firstname, i);
			break ;
		}
		case 1:
		{
			std::cout << "2️⃣ Last name: ";
			std::getline(std::cin, this->_lastname);
			checkEmptyField(this, this->_lastname, i);
			break ;
		}
		case 2:
		{
			std::cout << "3️⃣ Nickname: ";
			std::getline(std::cin, this->_nickname);
			checkEmptyField(this, this->_nickname, i);
			break ;
		}
		case 3:
		{
			std::cout << "4️⃣ Number: ";
			std::getline(std::cin, this->_number);
			if (checkData(this->_number) || this->_number.length() != 10)
			{
				std::cout << "❌ Only digit for the number field (mini. 10 numbers)" << std::endl;
				this->_number.clear();
				this->setContact(i);
			}
			checkEmptyField(this, this->_number, i);
			break ;
		}
		case 4:
		{
			std::cout << "5️⃣ Darkest Secret: ";
			std::getline(std::cin, this->_secret);
			checkEmptyField(this, this->_secret, i);
			break ;
		}
	}
}
