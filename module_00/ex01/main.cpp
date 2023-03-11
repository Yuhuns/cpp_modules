/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:13:23 by awallet           #+#    #+#             */
/*   Updated: 2023/03/10 15:23:05 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static std::string	setToUpper(std::string input)
{
	
	if (!input.empty())
		for (unsigned int i = 0; i < input.length(); i++)
			input[i] = std::toupper(input[i]);
	return (input);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	int	index;

	index = 0;
	std::cout << "📝 PHONEBOOK v0.1 --- WeLcOmE --. 📝 (MAX_CONTACT: " << MAX_CONTACT << ")" << std::endl << std::endl;
	while (1)
	{
		if (MAX_CONTACT <= 0)
			return (std::cout << "❌ Can't load the phonebook MAX_CONTACT is lower or equal to 0" << std::endl, 1);
		std::cout << "Please select between ADD, SEARCH or EXIT: ";
		std::getline(std::cin, input);
		input = setToUpper(input);
		if (input.compare("ADD") == 0)
		{
			if (index == MAX_CONTACT)
				index = 0;
			phonebook.add(index);
			std::cout << "✅ Registred in the phonebook with the ID: " << index << " (MAX: " << MAX_CONTACT - 1 << ")" << std::endl;
			index++;
		}
		else if (input.compare("SEARCH") == 0)
			phonebook.search();
		else if (input.compare("EXIT") == 0 || std::cin.eof())
			break ;
		std::cout.clear();
		std::cin.clear();
		input.clear();
	}
	return (0);
}
