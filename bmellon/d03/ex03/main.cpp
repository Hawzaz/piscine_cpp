/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 22:48:46 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/12 19:44:55 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"
#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"
#include "./NinjaTrap.hpp"

int		main()
{
	FragTrap f("6 hours to school");
	f.rangedAttack("lomasse");
	f.meleeAttack("dbaffier");
	f.takeDamage(66);
	f.beRepaired(50);
	f.vaulthunter_dot_exe("bmellon");
	ScavTrap z("Gilles");
	z.rangedAttack("lomasse");
	z.meleeAttack("bmellon");
	z.takeDamage(66);
	z.beRepaired(50);
	z.challengeNewcomer("dbaffier");
	NinjaTrap n("ninja");
	n.rangedAttack("john");
	n.meleeAttack("jack");
	n.takeDamage(66);
	n.beRepaired(50);
	n.ninjaShoebox(&z);
	n.ninjaShoebox(&f);
	n.ninjaShoebox(&n);
	return 1;
}