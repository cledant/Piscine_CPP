/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:14:47 by cledant           #+#    #+#             */
/*   Updated: 2017/04/06 15:10:23 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _hp(100), _max_hp(100), _ep(100), _max_ep(100),
	_level(1), _name("Toto"), _melee_damage(30), _ranged_damage(20), _armor(5)
{
	std::cout << "FR4G_TP " << this->_name << " was created !" << std::endl;
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(std::string name) : _hp(100), _max_hp(100), _ep(100),
	_max_ep(100), _level(1), _name(name), _melee_damage(30),
	_ranged_damage(20), _armor(5)
{
	std::cout << "FR4G_TP " << this->_name << " was created with a name !" << std::endl;
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
	std::cout << "FR4G_TP " << this->_name << " was copied !" << std::endl;
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FR4G_TP " << this->_name << " was scrapped !" << std::endl;
	std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD!" << std::endl;
}

void			FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_ranged_damage << "> points of range damage !" << std::endl;
}

void			FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_melee_damage << "> points of melee damage !" << std::endl;
}

void			FragTrap::takeDamage(unsigned int amount)
{
	unsigned int		tmp_amount;

	if (amount < this->_armor)
		tmp_amount = 0;
	else
		tmp_amount = amount - this->_armor;
	if (tmp_amount > this->_hp)
	{
		std::cout << this->_name << " took " << this->_hp << " of damage !" << std::endl;
		this->_hp = 0;
		return ;
	}
	std::cout << this->_name << " took " << tmp_amount << " of damage !" << std::endl;
	this->_hp -= tmp_amount;
}

void			FragTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hp > this->_max_hp)
	{
		std::cout << this->_name << " was healed for " << this->_max_hp - this->_hp  << " hp !" << std::endl;
		this->_hp = this->_max_hp;
		return ;
	}
	std::cout << this->_name << " was healed for " << amount << " hp !" << std::endl;
	this->_hp += amount;
}

unsigned int	FragTrap::getHp(void) const
{
	return (this->_hp);
}

unsigned int	FragTrap::getMaxHp(void) const
{
	return (this->_max_hp);
}

unsigned int	FragTrap::getEp(void) const
{
	return (this->_ep);
}

unsigned int	FragTrap::getMaxEp(void) const
{
	return (this->_max_ep);
}

unsigned int	FragTrap::getLevel(void) const
{
	return (this->_level);
}

std::string		FragTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	FragTrap::getMeleeDamage(void) const
{
	return (this->_melee_damage);
}

unsigned int	FragTrap::getRangedDamage(void) const
{
	return (this->_ranged_damage);
}

unsigned int	FragTrap::getArmor(void) const
{
	return (this->_armor);
}

void			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string		name_attack[5] = {"Butt Attack !", "NOPNOPNOPNOP Attack !",
						"DEUS VULT !", "DIEDIEDIEDIE", "Cool Attack"};

	if (this->_ep < 25)
	{
		std::cout << "Not enough energy to use this attack" << std::endl;
		return ;
	}
	this->_ep -= 25;
	std::cout << this->_name << " used this awesome " << name_attack[std::rand() % 5] << " on " << target << std::endl;
}

FragTrap &		FragTrap::operator=(FragTrap const & rhs)
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
