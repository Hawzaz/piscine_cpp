#include "./FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default Constructor has been called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	if (this != &rhs)
	{
		// in progress (should copy attributes.)
	}
	return *this;
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_att_dmg = 30;
	this->_ranged_att_dmg = 20;
	this->_armor_dmg_red = 5;
	std::cout << "Copy constructor has been called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor has been called" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_att_dmg - this->_armor_dmg_red << " points of damage !" << std::endl;

}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " in melee, causing " << this->_melee_att_dmg - this->_armor_dmg_red << " points of damage !" << std::endl;
	
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->_name << " takes " << amount << " damage." << " He now has " << this->_hit_points - amount << " hit points !" << std::endl;
	this->_hit_points = this->_hit_points - amount >= 0 ? this->_hit_points - amount : 0;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[5] = { "headshot", "highkick", "toxic vomit", "caitlyn ult", "luwargnie speech" };
	if (this->_energy_points > 25)
	{
		std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with a " << attacks[std::rand() %5] << ", causing " << this->_ranged_att_dmg << " points of damage !" << std::endl;
		this->_energy_points -= 25;
	}
	else
		std::cout << "You don't have enough energy to do this, dumbass" << std::endl;
}