#include "./ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "SC4V-TP Default constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_type = "SC4V-TP";
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 50;
	this->_max_energy_points = 50;
	this->_level = 1;
	this->_melee_att_dmg = 20;
	this->_ranged_att_dmg = 15;
	this->_armor_dmg_red = 3;
	std::cout << "SC4V-TP Copy constructor has been called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	if (this != &rhs)
	{
		// in progress (should copy attributes.)
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP Destructor has been called" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges[5] = { "speak 10 mins with dbaffier", "get into bde and destroy it", "find something remy never did", "get a picture from bmellon working", "find lomasse motivation" };
	std::cout << this->_type << " " << this->_name << " is challenging " << target << " to " << challenges[std::rand() %5] << "! Hahaha, good luck with that !" << std::endl;
}