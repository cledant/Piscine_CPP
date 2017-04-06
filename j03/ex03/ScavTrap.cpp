/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 13:39:22 by cledant           #+#    #+#             */
/*   Updated: 2017/04/06 16:35:19 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 50;
	this->_max_ep = 50;
	this->_melee_damage = 20;
	this->_ranged_damage = 15;
	this->_armor = 3;
	std::cout << "SC4V_TP " << this->_name << " was created WOW!" << std::endl;
	std::cout << "Let's get this party started !" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 50;
	this->_max_ep = 50;
	this->_melee_damage = 20;
	this->_ranged_damage = 15;
	this->_armor = 3;
	std::cout << "SC4V_TP " << this->_name << " was created with a name WOW!" << std::endl;
	std::cout << "Let's get this party started !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << "SC4V_TP " << this->_name << " was copied WOW!" << std::endl;
	std::cout << "Let's get this party started !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SC4V_TP " << this->_name << " was scrapped WOW!" << std::endl;
	std::cout << "YOU CAN'T KILL MEEEEEEEE" << std::endl;
}

void			ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "SC4V_TP <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_ranged_damage << "> points of range damage WOW!" << std::endl;
}

void			ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "SC4V_TP <" << this->_name << "> attacks <" << target << "> at range, causing <" << this->_melee_damage << "> points of melee damage WOW!" << std::endl;
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int		tmp_amount;

	if (amount < this->_armor)
		tmp_amount = 0;
	else
		tmp_amount = amount - this->_armor;
	if (tmp_amount > this->_hp)
	{
		std::cout << this->_name << " took " << this->_hp << " of damage ! MEH" << std::endl;
		this->_hp = 0;
		return ;
	}
	std::cout << this->_name << " took " << tmp_amount << " of damage ! MEH" << std::endl;
	this->_hp -= tmp_amount;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hp > this->_max_hp)
	{
		std::cout << this->_name << " was healed for " << this->_max_hp - this->_hp  << " hp ! YAY" << std::endl;
		this->_hp = this->_max_hp;
		return ;
	}
	std::cout << this->_name << " was healed for " << amount << " hp ! YAY" << std::endl;
	this->_hp += amount;
}

void			ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string		name_attack[5] = {"a Beer pong !", "Piccolo !",
						"a Yugioh Duel !", "a Pokemon match !", "nothing ?!"};

	std::cout << this->_name << " challenges " << target <<" to " << name_attack[std::rand() % 5] << " WOW! " << std::endl;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const & rhs)
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
