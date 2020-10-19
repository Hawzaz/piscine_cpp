/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:33 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/19 15:23:32 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		/* private */
	protected:
		std::string _name;
		int			_ap;
		AWeapon		*_weap;
		
	public:
		Character();
		Character(std::string const & name);
		Character(Character const & src);
		Character & operator=(Character const & rhs);
		~Character();
		AWeapon* getWeapon() const;
		int		getAP() const;
		void	recoverAP();
		void	equip(AWeapon*);
		void	attack(Enemy*);
		std::string const & getName() const;
		std::string	getWeaponName(void) const ;
};

std::ostream & operator <<(std::ostream & o, Character const & rhs);
#endif
