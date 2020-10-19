/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:20 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/19 15:00:50 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 50, 8)
{
}

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src)
{
	*this = src;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_ap_cost = rhs.getAPCost();
		this->_dmg = rhs.getDamage();
	}
	return *this;
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist()
{
	std::cout << "Power fist is out of power, see ya" << std::endl;
}

