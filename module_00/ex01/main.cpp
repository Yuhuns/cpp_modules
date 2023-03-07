/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:13:23 by awallet           #+#    #+#             */
/*   Updated: 2023/03/07 18:18:52 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static std::string	setToUpper(std::string input)
{
	unsigned int	i;

	if (!input.empty() && islower(input[0]))
	{
		i = -1;
		while (input[++i])
			input[i] = std::toupper(input[i]);
	}
	return (input);
}

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
		input = setToUpper(input);
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
