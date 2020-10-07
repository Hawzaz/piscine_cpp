/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 16:37:22 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/04 17:35:11 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	this->announce();
}

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Vanished" << std::endl; 
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braaains.." << std::endl; 
}