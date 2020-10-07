/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 17:01:41 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/04 17:42:01 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA
{

    public:
        HumanA(std::string n, Weapon & wea);
        ~HumanA(void);
        void setName(std::string name);
        void    attack(void);

    private:
        std::string name;
        Weapon  & weapon;

};

void    HumanA::setName(std::string name)
{
    this->name = name;
}

void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string n, Weapon & wea) : weapon(wea)
{
    this->name = n;
}

HumanA::~HumanA()
{
}
