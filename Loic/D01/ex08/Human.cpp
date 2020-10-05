/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:22:36 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/05 15:33:03 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <string>
#include <iostream>

typedef void (Human::*HumanAtk) (std::string const & target);

typedef struct HumanAtkStr
{
    HumanAtk    ptr;
    std::string str;
}       t_HAS;

void        Human::meleeAttack(std::string const & target)
{
    std::cout << "Slash " << target << std::endl;
}

void        Human::rangedAttack(std::string const & target)
{
    std::cout << "Shoot " << target << std::endl;
}

void        Human::intimidatingShout(std::string const & target)
{
    std::cout << "Scare " << target << std::endl;
}

void        Human::action(std::string const & action_name, std::string const & target)
{
    t_HAS   tab[3] = {{&Human::meleeAttack, "meleeAttack"},
                            {&Human::rangedAttack, "rangedAttack"},
                            {&Human::intimidatingShout, "intimidatingShout"}};

    for (int i = 0; i < 3; i++)
    {
        if (tab[i].str == action_name)
            (this->*(tab[i].ptr)) (target);
    }
}