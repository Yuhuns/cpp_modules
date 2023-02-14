/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:27:17 by awallet           #+#    #+#             */
/*   Updated: 2023/02/14 16:37:12 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		for ( int i = 1; *(av + i); i++ )
		{
			std::string	str = *(av + i);
			for ( size_t j = 0; j < str.size(); j++ )
				std::cout << static_cast<char>(std::toupper(*(*(av + i))++));
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}