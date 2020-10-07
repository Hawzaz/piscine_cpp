/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 17:50:54 by bmellon           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/10/04 18:46:12 by bmellon          ###   ########.fr       */
=======
/*   Updated: 2020/10/05 18:43:31 by bmellon          ###   ########.fr       */
>>>>>>> 14418afe8a1ab519f63b7636dc30f5c350c7c7f0
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

<<<<<<< HEAD
ZombieHorde::ZombieHorde(int n)
{

	Zombie *zombtab = new Zombie[n];
	this->p = zombtab;
	std::string zombies[3] = {"bmellon", "dbaffier", "lomasse"};
	for (int i = 0; i < n; i++)
		Zombie z = Zombie(zombies[std::rand() % 3], "stack");
=======
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
>>>>>>> 14418afe8a1ab519f63b7636dc30f5c350c7c7f0
}