/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 17:49:21 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/04 18:44:12 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
class ZombieHorde{

	public :
		ZombieHorde(int n);
		~ZombieHorde();
	private :
		Zombie *p;
};