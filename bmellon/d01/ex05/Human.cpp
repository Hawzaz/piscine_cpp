/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 19:17:51 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/05 20:00:28 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain			Human::getBrain(void)
{
	return (this->brain);
}

std::string		Human::identify()
{
	return (this->brain.identify());
}