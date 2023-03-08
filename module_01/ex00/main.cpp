/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:27:31 by awallet           #+#    #+#             */
/*   Updated: 2023/03/08 18:00:48 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie( std::string name );
void 	randomChump( std::string name );


int	main(void)
{
	Zombie	*z1, *z2;

	z1 = newZombie("Biloulette");
	z2 = newZombie("Romain");

	randomChump("Random_01");
	randomChump("Random_02");

	delete z1;
	delete z2;
	
	return (0);
	
}