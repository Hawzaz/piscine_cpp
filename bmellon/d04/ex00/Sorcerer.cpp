/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 15:38:44 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/14 19:06:06 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Sorcerer.hpp"
#include "Victim.hpp"

Sorcerer::Sorcerer()
{
	
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title (title)
{
	std::cout << name << ", " << title << " is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs)
{
	if (this != &rhs)
	{
		// in progress (should copy attributes.)
	}	
	return *this;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title << ", " << "is dead. Consequences will never be the same !" << std::endl;
}

std::string Sorcerer::getName() const
{
	return (this->_name);
}

std::string Sorcerer::getTitle() const
{
	return (this->_title);
}

void Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();
}

std::ostream & operator <<(std::ostream & o, Sorcerer const & rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return (o);
}