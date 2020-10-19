#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:
	protected:
		/* protected */
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		virtual void rangedAttack(std::string const & target);
		virtual void meleeAttack(std::string const & target);
		FragTrap & operator=(FragTrap const & rhs);
		~FragTrap();
		void vaulthunter_dot_exe(std::string const & target);
};

#endif
