/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:14:47 by cledant           #+#    #+#             */
/*   Updated: 2017/04/06 21:21:52 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
	this->_hp = 60;
	this->_max_hp = 60;
	this->_ep = 120;
	this->_max_ep = 120;
	this->_melee_damage = 60;
	this->_ranged_damage = 5;
	this->_armor = 0;
	std::cout << "NINJ4_TP " << this->_name << " was created !" << std::endl;
	std::cout << "Recompiling my combat code !" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->_hp = 60;
	this->_max_hp = 60;
	this->_ep = 120;
	this->_max_ep = 120;
	this->_melee_damage = 60;
	this->_ranged_damage = 5;
	this->_armor = 0;
	std::cout << "NINJ4_TP " << this->_name << " was created with a name !" << std::endl;
	std::cout << "Recompiling my combat code !" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src)
{
	*this = src;
	std::cout << "NINJ4_TP " << this->_name << " was copied !" << std::endl;	
	std::cout << "Recompiling my combat code !" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NINJ4_TP " << this->_name << " was scrapped !" << std::endl;
	std::cout << "Why do I even feel pain ?!" << std::endl;
}

void			NinjaTrap::rangedAttack(std::string const & target) const
{
	std::cout << "NINJ4-TP <" << this->_name << "> throws its shuriken at <" << target << " causing <" << this->_ranged_damage << "> points of range damage !" << std::endl;
}

void			NinjaTrap::meleeAttack(std::string const & target) const
{
	std::cout << "NINJ4-TP <" << this->_name << "> uses its ninja moves on <" << target << "> causing <" << this->_melee_damage << "> points of melee damage !" << std::endl;
}

void			NinjaTrap::ninjaShoebox(ClapTrap &bot)
{
	bot.meleeAttack("Miaouss");
	bot.rangedAttack("Miaouss");
}

void			NinjaTrap::ninjaShoebox(FragTrap &bot)
{
	bot.meleeAttack("Saitama");
	bot.vaulthunter_dot_exe("Saitama");
}

void			NinjaTrap::ninjaShoebox(ScavTrap &bot)
{
	bot.meleeAttack("Sangoku");
	bot.challengeNewcomer("Sangoku");
}

void			NinjaTrap::ninjaShoebox(NinjaTrap &bot)
{
	bot.meleeAttack("Sasuke");
	bot.rangedAttack("Sasuke");
}

void			NinjaTrap::takeDamage(unsigned int amount)
{
	unsigned int		tmp_amount;

	if (amount < this->_armor)
		tmp_amount = 0;
	else
		tmp_amount = amount - this->_armor;
	if (tmp_amount > this->_hp)
	{
		std::cout << this->_name << " took " << this->_hp << " of damage because of its paper armor!" << std::endl;
		this->_hp = 0;
		return ;
	}
	std::cout << this->_name << " took " << tmp_amount << " of damage because of its paper armor!" << std::endl;
	this->_hp -= tmp_amount;
}

void			NinjaTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_hp > this->_max_hp)
	{
		std::cout << this->_name << " was healed for " << this->_max_hp - this->_hp  << " hp by drinking his ninja potion!" << std::endl;
		this->_hp = this->_max_hp;
		return ;
	}
	std::cout << this->_name << " was healed for " << amount << " hp by drinking his ninja potion!" << std::endl;
	this->_hp += amount;
}

NinjaTrap &		NinjaTrap::operator=(NinjaTrap const & rhs)
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
