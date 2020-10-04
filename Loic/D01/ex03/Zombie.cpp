/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 14:09:40 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/01 15:57:01 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
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

Zombie::Zombie(void)
{
    this->name = randName(10);
}

void    Zombie::announce(void)
{
    std::cout << "<" << this->name << " " << this->type << "> Braiiiiiiinnnssss..." << std::endl;
}