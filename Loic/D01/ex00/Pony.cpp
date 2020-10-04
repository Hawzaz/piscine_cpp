/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 14:43:02 by lomasse           #+#    #+#             */
/*   Updated: 2020/09/30 14:44:36 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(void)
{
    std::cout << "A new Pony is create" << std::endl;
}

Pony::~Pony(void)
{
    std::cout << "Goodbye Pony" << std::endl;
}