/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 19:47:47 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/12 20:36:44 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	private:
		/* private */
	protected:
		/* protected */
	public:
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const & src);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		SuperTrap & operator=(SuperTrap const & rhs);
		~SuperTrap();
		
};

#endif
