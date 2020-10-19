/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:39 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/19 15:18:16 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:
		/* private */
	protected:
		/* protected */
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const & src);
		PlasmaRifle & operator=(PlasmaRifle const & rhs);
		~PlasmaRifle();
		void	attack() const;
};

#endif
