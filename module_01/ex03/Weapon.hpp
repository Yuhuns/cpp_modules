/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:37:32 by awallet           #+#    #+#             */
/*   Updated: 2023/03/10 16:45:23 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:
		std::string	getType(void);
		void	setType(std::string type);
		Weapon(std::string type);
		~Weapon(void);
	private:
		std::string	_type;
};

#endif