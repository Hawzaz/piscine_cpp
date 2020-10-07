/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 17:50:54 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/04 18:46:12 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int n)
{

	Zombie *zombtab = new Zombie[n];
	this->p = zombtab;
	std::string zombies[3] = {"bmellon", "dbaffier", "lomasse"};
	for (int i = 0; i < n; i++)
		Zombie z = Zombie(zombies[std::rand() % 3], "stack");
}