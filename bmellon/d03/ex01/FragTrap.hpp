#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
{
	private:
		int _hit_points;
		int _max_hit_points;
		int _energy_points;
		int _max_energy_points;
		int _level;
		int _melee_att_dmg;
		int _ranged_att_dmg;
		int _armor_dmg_red;
		std::string _name;
	protected:
		/* protected */
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		FragTrap & operator=(FragTrap const & rhs);
		~FragTrap();
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
};

#endif
