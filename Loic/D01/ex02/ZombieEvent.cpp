/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:45:07 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/01 14:43:30 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <random>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

std::string  randName(size_t len) {
    std::string s = "0000000000";
    for (size_t i = 0; i < len; ++i) {
         int randomChar = rand()%(26+26+10);
         if (randomChar < 26)
             s[i] = 'a' + randomChar;
         else if (randomChar < 26+26)
             s[i] = 'A' + randomChar - 26;
         else
             s[i] = '0' + randomChar - 26 - 26;
     }
     s[len] = 0;
     return s;
 }

void    ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
    Zombie *zombie;
    Zombie zomb;
    

    if (this->type.compare("Stack"))
    {
        zombie = new Zombie;
        zombie->type = ZombieEvent::type;
        zombie->name = randName(10);
        return (zombie);
    }
    *zombie = zomb;
    return (zombie);
}

Zombie  ZombieEvent::randomChump(void)
{
    Zombie zomb;
    
    zomb.name = randName(10);
    zomb.type = ZombieEvent::type;
    zomb.announce();
    return (zomb);
}