/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 19:47:49 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/12 20:33:34 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "SUP3R-TP Default Constructor has been called" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src)
{
	*this = src;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name), NinjaTrap(name)
{
	this->_type = "SUP3R-TP";
	this->_hit_points = FragTrap::_hit_points;
	this->_max_hit_points = FragTrap::_max_hit_points;
	this->_energy_points = NinjaTrap::_energy_points;
	this->_max_energy_points = NinjaTrap::_max_energy_points;
	this->_level = 1;
	this->_melee_att_dmg = NinjaTrap::_melee_att_dmg;
	this->_ranged_att_dmg = FragTrap::_ranged_att_dmg;
	this->_armor_dmg_red = FragTrap::_armor_dmg_red;
	std::cout << "SUP3R-TP Copy constructor has been called" << std::endl;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs)
{
	if (this != &rhs)
	{
		// in progress (should copy attributes.)
	}
	return *this;
}

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

SuperTrap::~SuperTrap()
{
}

