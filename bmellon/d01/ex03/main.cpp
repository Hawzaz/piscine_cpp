/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 18:05:38 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/05 18:46:04 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int		main(void)
{
	int n;

	n = 7;
	ZombieHorde z = ZombieHorde(n);
	z.announce();
	return 1;
}