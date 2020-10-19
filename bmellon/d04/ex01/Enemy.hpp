/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:36 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/19 14:04:36 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
	private:
		
	protected:
		int			_hp;
		std::string	_type;
	public:
		Enemy();
		Enemy(Enemy const & src);
		Enemy & operator=(Enemy const & rhs);
		virtual ~Enemy();
		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int);
};

#endif
