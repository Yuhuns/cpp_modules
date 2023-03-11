/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:37:41 by awallet           #+#    #+#             */
/*   Updated: 2023/03/11 12:52:41 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		void	attack(void);
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
	private:
		Weapon	&_weapon;
		std::string	_name;
};

#endif