/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:37:33 by awallet           #+#    #+#             */
/*   Updated: 2023/03/08 18:32:25 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	if (DEBUG)
		std::cout << "[DEBUG:] "
			<< "Zombie: " << this->_name
			<< " is deleted." 
			<< std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name
		<< ": BraiiiiiiinnnzzzZ..."
		<< std::endl;
}