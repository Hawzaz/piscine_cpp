/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:39:38 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/14 19:06:00 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << name << " just popped" << std::endl;
}

Victim::Victim(Victim const & src)
{
	*this = src;
}

Victim & Victim::operator=(Victim const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs.getName();
	}
	return *this;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason" << std::endl;
}

std::string Victim::getName(void) const
{
	return (this->_name);
}

std::ostream & operator <<(std::ostream & o, Victim const & rhs)
{
	o << "I'm " << rhs.getName() << ", and I like otters !" << std::endl;
	return (o);
}

void Victim::getPolymorphed() const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}