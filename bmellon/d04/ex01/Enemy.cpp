/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmellon <bmellon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:19:10 by bmellon           #+#    #+#             */
/*   Updated: 2020/10/19 14:04:43 by bmellon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Enemy.hpp"

Enemy::Enemy()
{
}

std::string Enemy::getType() const
{
	return (this->_type);
}

int		Enemy::getHP() const
{
	return (this->_hp);
}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
}

Enemy & Enemy::operator=(Enemy const & rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}

void	Enemy::takeDamage(int dmg)
{
}

Enemy::~Enemy()
{
}