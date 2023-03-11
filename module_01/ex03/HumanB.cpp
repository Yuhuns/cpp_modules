/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:37:37 by awallet           #+#    #+#             */
/*   Updated: 2023/03/11 12:58:15 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}