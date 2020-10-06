/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 19:17:57 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/05 20:22:10 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Brain.hpp"

std::string		Brain::identify() const
{
	std::stringstream strm;
	std::string &ref = _addr;
	const void *addr = this;
	strm << addr;
	return (ref = strm.str());
}
