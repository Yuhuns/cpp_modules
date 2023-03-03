/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:13:23 by awallet           #+#    #+#             */
/*   Updated: 2023/03/03 17:51:39 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	unsigned int	index;

	index = 0;
	while (1)
	{
		std::cout << "Please select between ADD, SEARCH or EXIT: ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit(0);
		if (input.compare("ADD") == 0)
		{
			if (index == 8)
				index = 0;
			phonebook.add(index);
			index++;
		}
		else if (input.compare("SEARCH") == 0)
			phonebook.search();
		else if (input.compare("EXIT") == 0)
			break ;
		std::cout.clear();
		std::cin.clear();
		input.clear();
	}
	return (0);
}
