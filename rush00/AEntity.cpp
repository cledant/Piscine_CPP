/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEntity.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 10:39:25 by cledant           #+#    #+#             */
/*   Updated: 2017/04/08 22:57:47 by aribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AEntity.hpp"

AEntity::AEntity(void) : _pos_x(0), _pos_y(0) ,_type("Dummy"), _hp(10000), _sprite("?"),  _automove(0)
{
}

AEntity::AEntity(std::string const & type, int hp, std::string sprite, int pos_x, int pos_y, int automove) :  _pos_x(pos_x), _pos_y(pos_y), _type(type), _hp(hp), _sprite(sprite), _automove(automove)
{
}

AEntity::AEntity(AEntity const & src) : _pos_x(src.getPosX()), _pos_y(src.getPosY()), _type(src.getType()), _hp(src.getHP()), _sprite(src.getSprite()), _automove(src.getAutomove())
{
}

AEntity::~AEntity(void)
{
}

std::string const &		AEntity::getType(void) const
{
	return (this->_type);
}

int				AEntity::getHP(void) const
{
	return (this->_hp);
}

std::string const &		AEntity::getSprite(void) const
{
	return (this->_sprite);
}

char const *			AEntity::getSpriteStr(void) const
{
	return (this->_sprite.c_str());
}

int				AEntity::getPosX(void) const
{
	return (this->_pos_x);
}

int				AEntity::getPosY(void) const
{
	return (this->_pos_y);
}

int				AEntity::getAutomove(void) const
{
	return (this->_automove);
}

void		AEntity::takeDamage(int damage_taken)
{
	if (damage_taken < 0)
		return ;
	if (damage_taken > this->_hp)
		_hp = 0;
	else
		_hp -= damage_taken;
}

void		AEntity::scrolling(void)
{
	if (this->_automove == 0)
		return ;
	if (this->_automove > 0)
		this->_pos_x += 1;
	else
		this->_pos_x -= 1;
}

AEntity &		AEntity::operator=(AEntity const & rhs)
{
	this->_type = rhs.getType();
	this->_hp = rhs.getHP();
	this->_sprite = rhs.getSprite();
	this->_pos_x = rhs.getPosX();
	this->_pos_y = rhs.getPosY();
	this->_automove = rhs.getAutomove();
	return (*this);
}
