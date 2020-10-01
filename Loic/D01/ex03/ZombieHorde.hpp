/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 15:15:39 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/01 15:51:04 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#ifndef ZOMBIEHORDE
# define ZOMBIEHORDE

class ZombieHorde
{
private:
    int     size;
    Zombie* Horde;
public:
    ZombieHorde(int N);
    ~ZombieHorde();
    void    announce();
};

ZombieHorde::ZombieHorde(int N)
{
    this->Horde = new Zombie[N];
    this->size = N;
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->Horde;
}

void        ZombieHorde::announce()
{
    for (int i = 0; i < this->size; i++)
        this->Horde[i].announce();
}

#endif