/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:44:47 by awallet           #+#    #+#             */
/*   Updated: 2023/03/08 15:55:08 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	truncate(std::string str)
{
	int	i;

	i = 0;
	while (i < 9)
		std::cout << str.at(i++);
	std::cout << ".|";
}

void	display(std::string str)
{
	for (int j = (10 - str.size()); j > 0; j--)
		std::cout << " ";
	std::cout << str;
	std::cout << "|";
}

void	PhoneBook::add(int index)
{
	int	n;

	n = -1;
	this->_contact[index].setIndex(index);
	while (++n < 5)
		this->_contact[index].setContact(n);
}

void	PhoneBook::show(int index)
{
	int	i = this->_contact[index].getIndex();
	std::string 	firstname = this->_contact[index].getContact(0);

	if (firstname.empty())
		return ;
	else if (i == 0)
	{
		std::map<int, std::string> map; 
		std::cout << std::endl;
		map[0] = "index"; map[1] = "first name"; map[2] = "last name"; map[3] = "nickname";
		for (unsigned int key = 0; key < map.size(); key++)
			display(map[key]);
		map.clear(); 
		std::cout << std::endl;
	}
	display(std::to_string(i));
	for (int n = 0; n < 3; n++)
	{	
		int	length = this->_contact[index].getContact(n).size();
		std::string str = this->_contact[index].getContact(n);
		if (length <= 10)
			display(str);
		else
			truncate(str);
	}
	std::cout << std::endl;
}

void	PhoneBook::search(void)
{
	int	index;
	std::string		input;
	std::string		str;
	
	for (int i = 0; i < MAX_CONTACT; i++)
	{
		if (this->_contact[0].getContact(0).empty())
			return (errorHandler("💨 The PhoneBook is empty."));
		this->show(i);
	}
	std::cout << std::endl << "Please enter an index: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
	else if (input.empty())
		return (errorHandler("⛔️ Your input can't be empty."), this->search());
	else if (checkData(input) == true || input.size() > 1)
		return (errorHandler("❌ Can't find the contact, invalid SEARCH (only digit and 0-9)"));
	index = input.at(0) - '0';
	if (index > (MAX_CONTACT - 1))
		return(errorHandler("❌ Can't find the contact [" + input + "] It's only between 0 and " + std::to_string(MAX_CONTACT - 1)));
	this->_contact[index].showContact();
	
}
