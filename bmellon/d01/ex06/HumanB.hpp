/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 15:53:41 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/06 18:55:37 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	public:
		void	attack();
		void	setWeapon(Weapon &weap);
		HumanB(std::string name);
	private:
		Weapon *_weap;
		std::string _name;
};

#endif