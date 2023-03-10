/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hordeZombie.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:03:43 by awallet           #+#    #+#             */
/*   Updated: 2023/03/11 12:24:49 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie	*horde;
	
	horde = NULL;
	if (N > 0)
	{
		horde = new Zombie[N];
		while (N--)
		{
			horde[N].set_name(name);
			horde[N].announce();
		}
	}
	return (horde);
}