/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:49 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/19 14:03:27 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:
		/* private */
	protected:
		/* protected */
	public:
		SuperMutant();
		SuperMutant(SuperMutant const & src);
		void	takeDamage(int dmg);
		SuperMutant & operator=(SuperMutant const & rhs);
		~SuperMutant();
};

#endif
