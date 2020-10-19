/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:42 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/19 15:18:19 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:
		/* private */
	protected:
		/* protected */
	public:
		void	attack() const;
		PowerFist();
		PowerFist(PowerFist const & src);
		PowerFist & operator=(PowerFist const & rhs);
		~PowerFist();
};

#endif
