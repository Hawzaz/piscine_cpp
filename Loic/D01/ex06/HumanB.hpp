/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 17:01:41 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/04 17:53:24 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon  *weapon;
public:
    void    setWeapon(Weapon &wea);
    void    setName(std::string name);
    void    attack();
    HumanB(std::string name);
    ~HumanB();
};

void    HumanB::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &wea)
{
    this->weapon = &wea;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
}
