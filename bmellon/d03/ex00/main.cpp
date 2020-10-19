/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 22:48:46 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/11 16:12:11 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main()
{
	FragTrap f("6 hours to school");
	f.rangedAttack("lomasse");
	f.meleeAttack("dbaffier");
	f.takeDamage(66);
	f.vaulthunter_dot_exe("bmellon");
	return 1;
}