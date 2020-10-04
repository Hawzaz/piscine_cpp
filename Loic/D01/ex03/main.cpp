/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 15:51:21 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/01 15:53:44 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main()
{
    ZombieHorde *ZombieHordePtr = new ZombieHorde(15);

    ZombieHordePtr->announce();

    delete ZombieHordePtr;
    return (0);
}