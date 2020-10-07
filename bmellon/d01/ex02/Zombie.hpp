/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 16:34:06 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/04 17:39:36 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void	announce(void);
	private:
		std::string	_name;
		std::string	_type;
};

#endif