/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:15:27 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/01 15:57:16 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


#ifndef ZOMBIE
# define ZOMBIE

std::string  randName(size_t len);

class Zombie
{
private:
    std::string name;
    std::string type;
public:
    Zombie(void);
    void    announce(void);
};


#endif