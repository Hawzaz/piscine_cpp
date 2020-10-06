/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 17:50:54 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/05 18:43:31 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n) : _count(n)
{
	this->_p = new Zombie[n];
	std::string zombies[3] = {"bmellon", "dbaffier", "lomasse"};
	for (int i = 0; i < n; i++)
	{
		_p[i].setName(zombies[std::rand() % 3]);
		_p[i].setType("stack");
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] _p;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < _count; i++)
	{
		_p[i].announce();
	}
}