/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awallet <awallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 17:13:13 by awallet           #+#    #+#             */
/*   Updated: 2023/03/08 15:07:59 by awallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <stdlib.h>
#include <map>

# define MAX_CONTACT 8

class Contact
{
	public:
		void		setContact(int i);
		void		showContact(void);
		std::string	getContact(int index);
		void		setIndex(int index);
		int			getIndex(void);
	private:
		unsigned int	_index;
		std::string _firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_number;
		std::string	_secret;
};

void	errorHandler(std::string msg);
bool	checkData(std::string str);

#endif
