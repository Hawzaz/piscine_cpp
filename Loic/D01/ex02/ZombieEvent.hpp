/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:15:27 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/01 14:22:56 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBENV
# define ZOMBENV

#include <random>
#include "Zombie.hpp"

class ZombieEvent
{
private:
    /* data */
public:
    std::string type;
    void    setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    Zombie  randomChump(void);
};

#endif