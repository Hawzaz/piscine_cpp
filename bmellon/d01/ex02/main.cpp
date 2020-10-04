/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 17:25:33 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/04 17:41:49 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int	main(void)
{
	ZombieEvent	doom;

	doom.setZombieType("heap");
	Zombie *dobee = doom.newZombie("Johnny");
	doom.setZombieType("stack");
	doom.randomChump();
	delete dobee;
	return 1;
}