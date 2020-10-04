/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 14:09:40 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/01 14:35:38 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << "<" << this->name << " " << this->type << "> Braiiiiiiinnnssss..." << std::endl;
}