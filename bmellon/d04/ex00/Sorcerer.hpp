/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 15:38:29 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/14 18:48:09 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	private:
		std::string		_name;
		std::string		_title;
	protected:
		/* protected */
	public:
		Sorcerer();
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const & src);
		std::string getName(void) const;
		std::string getTitle(void) const;
		Sorcerer & operator=(Sorcerer const & rhs);
		~Sorcerer();
		void polymorph(Victim const &v) const;
};

std::ostream & operator <<(std::ostream & o , Sorcerer const & rhs);
#endif
