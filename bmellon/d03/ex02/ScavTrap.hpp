#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
 
class ScavTrap : public ClapTrap
{
	private:
	protected:
		/* protected */
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const & rhs);
		~ScavTrap();
		void challengeNewcomer(std::string const & target);
};

#endif
