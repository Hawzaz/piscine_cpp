/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 15:39:21 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/04 16:47:35 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN
# define HUMAN

#include "Brain.hpp"

class Human
{
private:
    Brain const brain;
public:
    Human() {};
    ~Human() {};
    const Brain &getBrain(void);
    std::string identify(void);
    void Humanidentify(void);
};

const Brain  &Human::getBrain(void)
{
    return (this->brain);
}

void   Human::Humanidentify(void)
{    const void * address = static_cast<const void*>(this);
    std::stringstream ss;
    ss << address;  
    std::string name = ss.str();
    std::cout << name;
}

std::string   Human::identify(void)
{
    return (this->brain.identify());
}

#endif