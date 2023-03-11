/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:37:29 by awallet           #+#    #+#             */
/*   Updated: 2023/03/11 12:47:46 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType(void)
{
	return (this->_type);
}
void	Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon(std::string type)
{
	setType(type);
}
Weapon::~Weapon(void)
{
	return ;
}