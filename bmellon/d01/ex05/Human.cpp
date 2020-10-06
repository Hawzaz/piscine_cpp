/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 19:17:51 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/06 15:50:12 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

const Brain			&Human::getBrain(void) const
{
	return (this->brain);
}

std::string		Human::identify()
{
	return (this->brain.identify());
}