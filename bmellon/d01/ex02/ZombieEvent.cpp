/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 16:48:31 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/04 18:47:47 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string ZombieType)
{
	this->_type = ZombieType;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	return new Zombie(name, this->_type);
}	

void	ZombieEvent::randomChump()
{
	std::string zombies[3] = {"bmellon", "dbaffier", "lomasse"};
	Zombie frog = Zombie(zombies[std::rand() % 3], this->_type);
}