/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 12:01:06 by cledant           #+#    #+#             */
/*   Updated: 2017/04/09 11:07:03 by aribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"

Player::Player(void) : AEntity("Player", 1, ">", 0, 0, 0)
{
}

Player::Player(int pos_x, int pos_y) : AEntity("Player", 1, ">", pos_x, pos_y, 0)
{
}

Player::Player(Player const &src) : AEntity(src.getType(), src.getHP(), src.getSprite(), src.getPosX(), src.getPosY(), src.getAutomove())
{
}

void		Player::move_up(void)
{
	this->_pos_y -= 1;
}

void		Player::move_down(void)
{
	this->_pos_y += 1;
}

void		Player::move_right(void)
{
	this->_pos_x += 1;
}

void		Player::move_left(void)
{
	this->_pos_x -= 1;
}

AEntity *	Player::shoot(void)
{
	AEntity	*bullet = new Bullet(this->_pos_x + 1, this->_pos_y);

	return (bullet);
}

Player::~Player(void)
{
}

Player &		Player::operator=(Player const & rhs)
{
	AEntity::operator=(rhs);
	return (*this);
}
