#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

#ifndef DEBUG
# define DEBUG false
#endif

class Zombie
{
	typedef Zombie	z;
	
	public:
		void	announce(void);
		Zombie(void);
		~Zombie(void);
		void	set_name(std::string name);
		
	private:
		std::string	_name;
};

#endif