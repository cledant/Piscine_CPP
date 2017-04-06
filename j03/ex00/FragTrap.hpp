/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 08:59:33 by cledant           #+#    #+#             */
/*   Updated: 2017/04/06 13:09:45 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include <iostream>

class FragTrap
{
	public :

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & src);
		~FragTrap(void);
		void 			rangedAttack(std::string const & target) const;
		void 			meleeAttack(std::string const & target) const;
		void 			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const & target);
		unsigned int	getHp(void) const;
		unsigned int	getMaxHp(void) const;
		unsigned int	getEp(void) const;
		unsigned int	getMaxEp(void) const;
		unsigned int	getLevel(void) const;
		std::string		getName(void) const;
		unsigned int	getMeleeDamage(void) const;
		unsigned int	getRangedDamage(void) const;
		unsigned int	getArmor(void) const;

		FragTrap &		operator=(FragTrap const & rhs);

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
