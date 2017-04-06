/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 15:31:40 by cledant           #+#    #+#             */
/*   Updated: 2017/04/06 15:47:31 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hp(50), _max_hp(50), _ep(50), _max_ep(50),
	_level(1), _name("ClapClap"), _melee_damage(10), _ranged_damage(10), _armor(1)
{
	std::cout << "CL4P_TP " << this->_name << " was created !" << std::endl;
	std::cout << "I'm a basic claptrap :3" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hp(50), _max_hp(50), _ep(50),
	_max_ep(50), _level(1), _name(name), _melee_damage(10),
	_ranged_damage(10), _armor(1)
{
	std::cout << "CL4P_TP " << this->_name << " was created with a name !" << std::endl;
	std::cout << "I'm a basic claptrap :3" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << "CL4P_TP " << this->_name << " was copied !" << std::endl;
	std::cout << "I'm a basic claptrap :3" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "CL4P_TP " << this->_name << " was scrapped !" << std::endl;
	std::cout << "I died I'm sad :( !" << std::endl;
}

unsigned int	ClapTrap::getHp(void) const
{
	return (this->_hp);
}

unsigned int	ClapTrap::getMaxHp(void) const
{
	return (this->_max_hp);
}

unsigned int	ClapTrap::getEp(void) const
{
	return (this->_ep);
}

unsigned int	ClapTrap::getMaxEp(void) const
{
	return (this->_max_ep);
}

unsigned int	ClapTrap::getLevel(void) const
{
	return (this->_level);
}

std::string		ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getMeleeDamage(void) const
{
	return (this->_melee_damage);
}

unsigned int	ClapTrap::getRangedDamage(void) const
{
	return (this->_ranged_damage);
}

unsigned int	ClapTrap::getArmor(void) const
{
	return (this->_armor);
}

ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << rhs._name << " was assigned !" << std::endl;
	this->_hp = rhs.getHp();
	this->_max_hp = rhs.getMaxHp();
	this->_ep = rhs.getEp();
	this->_max_ep = rhs.getMaxEp();
	this->_level = rhs.getLevel();
	this->_name = rhs.getName();
	this->_melee_damage = rhs.getMeleeDamage();
	this->_ranged_damage = rhs.getRangedDamage();
	this->_armor = rhs.getArmor();
	return (*this);
}
