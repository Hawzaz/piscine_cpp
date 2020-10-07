/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 17:48:48 by bmellon           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/10/04 18:26:57 by bmellon          ###   ########.fr       */
=======
/*   Updated: 2020/10/05 18:38:51 by bmellon          ###   ########.fr       */
>>>>>>> 14418afe8a1ab519f63b7636dc30f5c350c7c7f0
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	public:
<<<<<<< HEAD
		Zombie(std::string name, std::string type);
		~Zombie(void);
=======
		Zombie(void);
		~Zombie(void);
		void setName(std::string name);
		void setType(std::string type);
>>>>>>> 14418afe8a1ab519f63b7636dc30f5c350c7c7f0
		void	announce(void);
	private:
		std::string	_name;
		std::string	_type;
};

#endif