/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:41:51 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 19:06:34 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("Renko"), _weap(NULL), _ap(40)
{
}

Character::Character(std::string const & name) : _name(name), _weap(NULL), _ap(40)
{
}

Character::~Character(void)
{
}

std::string const &		Character::getName(void) const
{
	return (this->_name);
}

int				Character::getAP(void) const
{
	return (this->_ap);
}

AWeapon	*		Character::getWeapon(void) const
{
	return (this->_weap);
}

void			Character::recoverAP(void)
{
	if ((this->_max_ap - this->_ap) <= 10)
		this->_ap = this->_max_ap;
	else
		this->_ap += 10;
}

void			Character::equip(AWeapon *weap)
{
	this->_weap = weap;
}

void			Character::attack(Enemy *en)
{
	if (en == NULL || this->_weap == NULL || this->_ap < this->_weap->getAPCost())
		return ;
	std::cout << this->_name << " attacks " << en->getType() << " with a " << this->_weap->getName() << std::endl;
	en->takeDamage(this->_weap->getDamage());
	if (en->getHP() == 0)
	{
		delete en;
		en = NULL;
	}
	this->_ap -= this->_weap->getAPCost();
}

Character &		Character::operator=(Character const & rhs)
{
	this->_name = rhs.getName();
	this->_ap = rhs.getAP();
	this->_weap = rhs.getWeapon();
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Character const & rhs)
{
	AWeapon		*cur = rhs.getWeapon();

	if (cur == NULL)
	{
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed" << std::endl;
	}
	else
	{	
		o << rhs.getName() << " has " << rhs.getAP() << " AP and weilds a " << cur->getName() << std::endl;
	}
	return (o);
}

int				Character::_max_ap = 40;
