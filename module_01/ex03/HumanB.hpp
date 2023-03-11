/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:37:39 by awallet           #+#    #+#             */
/*   Updated: 2023/03/11 12:39:07 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		void	attack(void);
		void	setWeapon(Weapon &weapon);
		HumanB(std::string name);
		~HumanB(void);
	private:
		Weapon	*_weapon;
		std::string	_name;
};

#endif