/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 17:48:39 by bmellon           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/10/04 17:48:40 by bmellon          ###   ########.fr       */
=======
/*   Updated: 2020/10/05 18:24:16 by bmellon          ###   ########.fr       */
>>>>>>> 14418afe8a1ab519f63b7636dc30f5c350c7c7f0
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

<<<<<<< HEAD
Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	this->announce();
=======
Zombie::Zombie()
{
>>>>>>> 14418afe8a1ab519f63b7636dc30f5c350c7c7f0
}

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Vanished" << std::endl; 
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braaains.." << std::endl; 
<<<<<<< HEAD
=======
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie::setType(std::string type)
{
	this->_type = type;
>>>>>>> 14418afe8a1ab519f63b7636dc30f5c350c7c7f0
}