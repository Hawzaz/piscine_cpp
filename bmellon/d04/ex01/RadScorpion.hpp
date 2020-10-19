/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:44 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/19 15:07:54 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:
		/* private */
	protected:
		/* protected */
	public:
		RadScorpion();
		RadScorpion(RadScorpion const & src);
		void takeDamage(int dmg);
		RadScorpion & operator=(RadScorpion const & rhs);
		~RadScorpion();
};

#endif
