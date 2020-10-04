/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 16:51:36 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/04 17:50:21 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef WEAPON
# define WEAPON

#include <string>
#include <iostream>

class Weapon
{

private:
    std::string         type;
public:
    std::string const & getType();
    void                setType(std::string);
    Weapon(const char * str);
};

std::string const & Weapon::getType(void)
{
    return (this->type);
}

void                Weapon::setType(std::string str)
{
    this->type = str;
}

Weapon::Weapon(const char * str)
{
    this->setType(str);
}

#endif