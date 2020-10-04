/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 14:31:43 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/04 16:20:00 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

#ifndef BRAINCLASS
# define BRAINCLASS

class Brain
{
    public:
        std::string    identify(void) const;
};

std::string        Brain::identify(void) const
{
    const void * address = static_cast<const void*>(this);
    std::stringstream ss;
    ss << address;  
    std::string name = ss.str(); 
    return (name);
}


#endif