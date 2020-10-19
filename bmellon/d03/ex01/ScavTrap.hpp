#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
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
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const & rhs);
		~ScavTrap();
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void challengeNewcomer(std::string const & target);
};

#endif
