#include "./FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FR4G-TP Default Constructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_type = "FR4G-TP";
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_att_dmg = 30;
	this->_ranged_att_dmg = 20;
	this->_armor_dmg_red = 5;
	std::cout << "FR4G-TP Copy constructor has been called" << std::endl;
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

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP Destructor has been called" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[5] = { "headshot", "highkick", "toxic vomit", "caitlyn ult", "luwargnie speech" };
	if (this->_energy_points > 25)
	{
		std::cout << this->_type << " " << this->_name << " attacks " << target << " with a " << attacks[std::rand() %5] << ", causing " << this->_ranged_att_dmg << " points of damage !" << std::endl;
		this->_energy_points -= 25;
	}
	else
		std::cout << "You don't have enough energy to do this, dumbass" << std::endl;
}