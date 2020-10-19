/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:52:18 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/13 14:58:00 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	private:
		/* private */
	protected:
		/* protected */
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		NinjaTrap & operator=(NinjaTrap const & rhs);
		~NinjaTrap();
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void ninjaShoebox(NinjaTrap *n);
		void ninjaShoebox(ScavTrap *s);
		void ninjaShoebox(FragTrap *f);
};

#endif
