#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

#ifndef DEBUG
# define DEBUG true
#endif

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