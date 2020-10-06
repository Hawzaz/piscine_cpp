/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 15:53:32 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/06 18:55:26 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

void	HumanB::setWeapon(Weapon& weap)
{
	this->_weap = &weap;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weap->getType() << std::endl;
}