/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 13:35:36 by cledant           #+#    #+#             */
/*   Updated: 2017/04/06 15:00:14 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <string>
#include <iostream>

class ScavTrap
{
	public :

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		void 			rangedAttack(std::string const & target) const;
		void 			meleeAttack(std::string const & target) const;
		void 			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const & target);
		unsigned int	getHp(void) const;
		unsigned int	getMaxHp(void) const;
		unsigned int	getEp(void) const;
		unsigned int	getMaxEp(void) const;
		unsigned int	getLevel(void) const;
		std::string		getName(void) const;
		unsigned int	getMeleeDamage(void) const;
		unsigned int	getRangedDamage(void) const;
		unsigned int	getArmor(void) const;

		ScavTrap &		operator=(ScavTrap const & rhs);

	private :

		unsigned int	_hp;
		unsigned int	_max_hp;
		unsigned int	_ep;
		unsigned int	_max_ep;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_melee_damage;
		unsigned int	_ranged_damage;
		unsigned int	_armor;
};

#endif
