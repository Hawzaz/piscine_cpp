/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 18:05:38 by bmellon           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/10/04 18:05:56 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		main(void)
{
=======
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
>>>>>>> 14418afe8a1ab519f63b7636dc30f5c350c7c7f0
	return 1;
}