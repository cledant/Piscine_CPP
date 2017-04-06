/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 15:27:02 by cledant           #+#    #+#             */
/*   Updated: 2017/04/06 20:12:46 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	public :

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap(void);
		void			rangedAttack(std::string const &target) const;
		void			meleeAttack(std::string const &target) const;
		unsigned int	getHp(void) const;
		unsigned int	getMaxHp(void) const;
		unsigned int	getEp(void) const;
		unsigned int	getMaxEp(void) const;
		unsigned int	getLevel(void) const;
		std::string		getName(void) const;
		unsigned int	getMeleeDamage(void) const;
		unsigned int	getRangedDamage(void) const;
		unsigned int	getArmor(void) const;

		ClapTrap &		operator=(ClapTrap const & rhs);

	protected :

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
