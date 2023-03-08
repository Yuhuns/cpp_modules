#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public:
		void	announce(void);
		Zombie(std::string name);
		~Zombie(void);
		
	private:
		std::string	_name;
};

#endif