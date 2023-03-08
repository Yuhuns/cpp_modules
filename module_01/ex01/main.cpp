/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:27:31 by awallet           #+#    #+#             */
/*   Updated: 2023/03/08 18:36:26 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name );

int	main(void)
{
	Zombie	*zombie;

	zombie = zombieHorde(42, "ZoMbIe");
	delete[] zombie;
	return (0);
}