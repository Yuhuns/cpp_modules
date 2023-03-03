/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:13:23 by awallet           #+#    #+#             */
/*   Updated: 2023/03/01 18:55:11 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	int	index;

	index = 0;
	while (1)
	{
		std::cout << "Please select between ADD, SEARCH or EXIT: ";
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0)
		{
			if (index == 8)
				index = 0;
			phonebook.add(index);
			index++;
		}
		else if (input.compare("SEARCH") == 0)
			std::cout << "SEARCH" << std::endl;
		else if (input.compare("EXIT") == 0)
			break ;
		else
		{
			if (!input.empty())
				std::cout << input + " doesn't exist !" << std::endl;
			else
				std::cout << "You need to write the option you're looking for." << std::endl;
		}
		std::cout.clear();
		std::cin.clear();
		input.clear();
	}
	return (0);
}