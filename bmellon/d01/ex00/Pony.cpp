/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 16:22:59 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/04 16:24:53 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::PonyOnTheHeap(){
	Pony *po = new Pony("red");
	std::cout << "He's riding !" << std::endl;
	delete po;
}

void	Pony::PonyOnTheStack(){
	Pony jo = Pony("blue");
	std::cout << "He's eating" << std::endl;
}