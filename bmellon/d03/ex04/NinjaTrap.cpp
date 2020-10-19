/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:52:24 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/12 19:45:55 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << this->_type << " Default constructor has been called" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
	*this = src;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->_type = "N1NJ4-TP";
	this->_hit_points = 60;
	this->_max_hit_points = 60;
	this->_energy_points = 120;
	this->_max_energy_points = 120;
	this->_level = 1;
	this->_melee_att_dmg = 60;
	this->_ranged_att_dmg = 5;
	this->_armor_dmg_red = 0;
	std::cout << "N1NJ4-TP Copy constructor has been called" << std::endl;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs)
{
	if (this != &rhs)
	{
		// in progress (should copy attributes.)
	}
	return *this;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->_type << " Destructor has been called" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap *n)
{
	std::string things[5] = { "an apple", "3 pieces of gold", "another ninja", "dorian doing weird noises", "shoes, wht did you expect ?"};
	std::cout << n->_type << " You open the shoebox and you find " << things[std::rand() % 5] << " in it, surprised ?" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap *n)
{
	std::string things[5] = { "an apple", "3 pieces of gold", "another ninja", "dorian doing weird noises", "shoes, wht did you expect ?"};
	std::cout << n->_type << " You open the shoebox and you find " << things[std::rand() % 5] << " in it, surprised ?" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap *n)
{
	std::string things[5] = { "an apple", "3 pieces of gold", "another ninja", "dorian doing weird noises", "shoes, wht did you expect ?"};
	std::cout << n->_type << " You open the shoebox and you find " << things[std::rand() % 5] << " in it, surprised ?" << std::endl;
}