/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasse <lomasse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:15:27 by lomasse           #+#    #+#             */
/*   Updated: 2020/10/01 14:14:26 by lomasse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef ZOMBIE
# define ZOMBIE

class Zombie
{
private:
    /* data */
public:
    std::string name;
    std::string type;
    void    announce(void);
};

#endif