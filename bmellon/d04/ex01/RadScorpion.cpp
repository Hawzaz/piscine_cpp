/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:22 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/19 15:07:33 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RadScorpion.hpp"

RadScorpion::RadScorpion()
{
	std::cout << "* click click click *" << std::endl;
	this->_type = "RadScorpion";
	this->_hp = 80;
}


RadScorpion::RadScorpion(RadScorpion const & src)
{
	*this = src;
}

RadScorpion & RadScorpion::operator=(RadScorpion const & rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}

void	RadScorpion::takeDamage(int dmg)
{
	if ((this->_hp - dmg) >= 0)
		this->_hp -= dmg;
	else
		this->_hp = 0;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}