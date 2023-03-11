/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:24:43 by awallet           #+#    #+#             */
/*   Updated: 2023/03/11 17:04:03 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	const std::string harlmap[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	harlPTR harlptr[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	for (int key = 0; key < 4; key++)
		if (level == harlmap[key])
				(this->*harlptr[key])();
}

void	Harl::_debug(void)
{
	std::cout << "[DEBUG:] Where's my glitchy little function ?" << std::endl;
}
void	Harl::_info(void)
{
	std::cout << "[INFO:] Did you really need an info ? " << std::endl;
}
void	Harl::_warning(void)
{
	std::cout << "[WARNING:] ALERT ALERT ! SOMETHING ARE REALLY WARN ME !!!" << std::endl;
}
void	Harl::_error(void)
{
	std::cout << "[ERROR:] ERROR SPOTTED." << std::endl;
}