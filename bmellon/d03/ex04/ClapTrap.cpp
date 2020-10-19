#include "./ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "CL4P-TP Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this != &rhs)
	{
		// in progress (should copy attributes.)
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CL4P-TP Default destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name ) : _name(name)
{
	std::cout << "CL4P-TP Copy constructor called" << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << this->_type << " " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_att_dmg - this->_armor_dmg_red << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << this->_type << " " << this->_name << " attacks " << target << " in melee, causing " << this->_melee_att_dmg - this->_armor_dmg_red << " points of damage !" << std::endl;	
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_type << " " << this->_name << " takes " << amount << " damage." << " He now has " << this->_hit_points - amount << " hit points !" << std::endl;
	this->_hit_points = this->_hit_points - amount >= 0 ? this->_hit_points - amount : 0;
	if (this->_hit_points == 0)
		std::cout << "Stop ! Stop ! It's already dead !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points + amount > this->_max_energy_points)
	{
		this->_hit_points = this->_max_energy_points;
		std::cout << this->_type << " " << this->_name << " is now fully repaired !" << std::endl;
	}
	else
	{
		std::cout << this->_type << " " << this->_name << " is now repaired by " << amount << " HP !" << std::endl;
	}
}
