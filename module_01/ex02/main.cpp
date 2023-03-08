/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 19:15:07 by awallet           #+#    #+#             */
/*   Updated: 2023/03/08 19:20:54 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "ADDR string: " << str << std::endl;
	std::cout << "ADDR stringPTR: " << *stringPTR << std::endl;
	std::cout << "ADDR stringREF: " << stringREF << std::endl;
}