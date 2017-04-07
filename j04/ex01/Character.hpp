/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:30:40 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 18:48:53 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	public :
		Character(std::string const & name);
		~Character(void);
		int						getAP(void) const;
		AWeapon					*getWeapon(void) const;
		std::string	const &		getName(void) const;
		void					recoverAP(void);
		void					equip(AWeapon *weap);
		void					attack(Enemy *en);
		Character &				operator=(Character const & rhs);

	private :
		Character(void);
		std::string			_name;
		AWeapon				*_weap;
		int					_ap;
		static int			_max_ap;
};

std::ostream &		operator<<(std::ostream & o, Character const & rhs);

#endif
