#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		
	protected:
		std::string _type;
		int _hit_points;
		int _max_hit_points;
		int _energy_points;
		int _max_energy_points;
		int _level;
		int _melee_att_dmg;
		int _ranged_att_dmg;
		int _armor_dmg_red;
		std::string _name;
	public:
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		ClapTrap & operator=(ClapTrap const & rhs);
		~ClapTrap();
};

#endif
