/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 17:49:21 by bmellon           #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/10/04 18:44:12 by bmellon          ###   ########.fr       */
=======
/*   Updated: 2020/10/05 18:43:37 by bmellon          ###   ########.fr       */
>>>>>>> 14418afe8a1ab519f63b7636dc30f5c350c7c7f0
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
class ZombieHorde{

	public :
		ZombieHorde(int n);
		~ZombieHorde();
<<<<<<< HEAD
	private :
		Zombie *p;
=======
		void	announce();
	private :
		int		_count;
		Zombie *_p;
>>>>>>> 14418afe8a1ab519f63b7636dc30f5c350c7c7f0
};