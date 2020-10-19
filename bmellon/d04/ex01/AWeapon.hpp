/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:29 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/19 14:54:06 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
	private:

	protected:
		std::string _name;
		int			_dmg;
		int			_ap_cost;
	public:
		virtual ~AWeapon();
		AWeapon(std::string const & name, int dmg, int ap_cost);
		std::string const & getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
		AWeapon();
		AWeapon(AWeapon const & src);
		AWeapon & operator=(AWeapon const & rhs);
};

#endif
