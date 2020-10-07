/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:23:01 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/04 16:25:29 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony{
	private :
		std::string color;
	public	:
	Pony(std::string color) : color(color)
	{
		std::cout << "The " << this->color << " pony is now born" << std::endl;
	}
	~Pony()
	{
		std::cout << "The " << this->color << " pony is now dead" << std::endl;
	}
	void PonyOnTheHeap(void);
	void PonyOnTheStack(void);
};

#endif