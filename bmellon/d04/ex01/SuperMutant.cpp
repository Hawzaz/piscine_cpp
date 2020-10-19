/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:25 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/19 14:03:38 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	this->_type = "SuperMutant";
	this->_hp = 170;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}


SuperMutant::SuperMutant(SuperMutant const & src)
{
	*this = src;
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs)
{
	if (this != &rhs)
	{
		
	}
	return *this;
}

void	SuperMutant::takeDamage(int dmg)
{
	if ((this->_hp - dmg - 3) >= 0)
		this->_hp = this->_hp - dmg - 3;
	else
		this->_hp = 0;
	std::cout << this->_type << " just took " << dmg -3 << " damage !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

