/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:06 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/19 15:01:16 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 21, 5)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src)
{
	*this = src;
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_ap_cost = rhs.getAPCost();
		this->_dmg = rhs.getDamage();
	}
	return *this;
}

PlasmaRifle::~PlasmaRifle()
{
	std::cout << "Plasma Out. Copy that" << std::endl;
}

