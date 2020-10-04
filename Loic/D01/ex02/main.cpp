/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:13:23 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/01 14:44:05 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

std::string  randName(size_t len);

int     main()
{
    int         nb_zomb;
    ZombieEvent *Manager = new ZombieEvent();

    for (int i = 1; i < 5; i++)
    {
        std::cout << "Wave " << i <<std::endl;
        nb_zomb = i * ((rand() % 5) + 1);
        std::cout << nb_zomb << " Zombie incoming" << std::endl << std::endl;
        if (nb_zomb < 10)
        {
            std::cout << "\t\t (Stack)" << std::endl;
            while (nb_zomb)
            {
                Manager->randomChump();
                nb_zomb--;
            }
        }
        else
        {
            Zombie  *zombies[i * i];
            for (int j = 0; j < i * i; j++)
            {
                Manager->setZombieType("Heap");
                zombies[j] = Manager->newZombie(randName(10));
                zombies[j]->announce();
                delete zombies[j];
            }
        }
        std::cout << std::endl;
    }
    return (0);
}