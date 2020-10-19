/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:39:29 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/14 19:05:10 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Peon.hpp"

Peon::Peon()
{
	
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog" << std::endl;
}

Peon::Peon(Peon const & src)
{
	*this = src;
}

Peon & Peon::operator=(Peon const & rhs)
{
	if (this != &rhs)
	{
		
	}
	return *this;
}
void	Peon::getPolymorphed() const 
{
	std::cout << _name << " has been turned into a pink pony !" << std::endl;	
}

Peon::~Peon()
{
	std::cout << "Bleuark" << std::endl;
}