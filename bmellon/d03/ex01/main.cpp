/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 22:48:46 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/11 16:35:54 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

int		main()
{
	FragTrap f("6 hours to school");
	f.FragTrap::rangedAttack("lomasse");
	f.FragTrap::meleeAttack("dbaffier");
	f.FragTrap::takeDamage(66);
	f.vaulthunter_dot_exe("bmellon");
	ScavTrap z("Gilles");
	z.ScavTrap::rangedAttack("lomasse");
	z.ScavTrap::meleeAttack("bmellon");
	z.ScavTrap::takeDamage(66);
	z.challengeNewcomer("dbaffier");
	return 1;
}