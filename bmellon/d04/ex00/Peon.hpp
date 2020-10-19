/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:39:27 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/14 19:07:07 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
	private:
		/* private */
	protected:
		/* protected */
	public:
		Peon();
		Peon(std::string name);
		Peon(Peon const & src);
		Peon & operator=(Peon const & rhs);
		virtual ~Peon();
		void getPolymorphed() const;
};

#endif
