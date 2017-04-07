/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:37:36 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 20:35:39 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void) : _type("Dummy"), _hp(9999)
{
}

Enemy::Enemy(int hp, std::string const & type) : _type(type), _hp(hp)
{
}

Enemy::Enemy(Enemy const & src) : _type(src._type), _hp(src._hp)
{
}

Enemy::~Enemy(void)
{
}

std::string const &		Enemy::getType(void) const
{
	return (this->_type);
}

int				Enemy::getHP(void) const
{
	return (this->_hp);
}

void		Enemy::takeDamage(int damage_taken)
{
	if (damage_taken < 0)
		return ;
	if (damage_taken > this->_hp)
		_hp = 0;
	else
		_hp -= damage_taken;
}

Enemy &		Enemy::operator=(Enemy const & rhs)
{
	this->_type = rhs.getType();
	this->_hp = rhs.getHP();
	return (*this);
}
