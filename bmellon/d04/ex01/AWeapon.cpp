/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:15 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/19 15:19:30 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int dmg, int ap_cost) : _name(name), _dmg(dmg), _ap_cost(ap_cost)
{
}

std::string const & AWeapon::getName() const
{
	return (this->_name);
}

int AWeapon::getAPCost() const {
	return (this->_ap_cost);
}

int	AWeapon::getDamage() const {
	return (this->_dmg);
}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
}

AWeapon & AWeapon::operator=(AWeapon const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs.getName();
		_dmg = rhs.getDamage();
		_ap_cost = rhs.getAPCost();
	}
	return *this;
}

AWeapon::~AWeapon()
{
}

