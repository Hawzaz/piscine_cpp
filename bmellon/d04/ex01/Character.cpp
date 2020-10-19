/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:13 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/19 15:26:21 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Character.hpp"

Character::Character()
{
}

Character::Character(std::string const & name) : _name(name)
{
	this->_weap = NULL;
	this->_ap = 40;
}

Character::Character(Character const & src)
{
	*this = src;
}

AWeapon*		Character::getWeapon(void) const
{
	return (this->_weap);
}

int				Character::getAP(void) const
{
	return (this->_ap);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AWeapon* w)
{
	this->_weap = w;
}

void	Character::recoverAP(void)
{
	this->_ap = this->_ap + 10 >= 40 ? 40 : this->_ap + 10;
}

void	Character::attack(Enemy *e)
{
	AWeapon *weap;
	if ((weap = this->getWeapon()) && (this->_ap > weap->getAPCost()))
	{
		std::cout << this->getName() << " attacks " << e->getType() << " with a " << this->getWeapon()->getName() << std::endl;
		this->getWeapon()->attack();
		if (e->getHP() - weap->getDamage() <= 0)
			delete e;
		else
			e->takeDamage(weap->getDamage());
		this->_ap -= weap->getAPCost();
	}
}

std::string	Character::getWeaponName() const
{
	if (!this->_weap)
		return ("");
	return(this->_weap->getName());
}

Character & Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		this->_weap = rhs.getWeapon();
		this->_name = rhs.getName();
		this->_ap = rhs.getAP();
	}
	return *this;
}

std::ostream & operator <<(std::ostream & o, Character const & rhs)
{
	if (rhs.getWeaponName() != "")
	{
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	}
	else
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed " << std::endl;
	return o;
}

Character::~Character()
{
}