/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 16:46:57 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/04 17:37:34 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEVENT_HPP
#define ZOMBIEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent{
	public :
		void setZombieType(std::string ZombieType);
		Zombie* newZombie(std::string name);
		void	randomChump(void);
	private :
		std::string _type;
};
#endif