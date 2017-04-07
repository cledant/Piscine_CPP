/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:27:17 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 21:16:05 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>

class AWeapon 
{
	public :
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon(void);
		std::string	const &		getName(void) const;
		int						getAPCost(void) const;
		int						getDamage(void) const;
		virtual 				void attack () const = 0;

		virtual AWeapon &			operator=(AWeapon const & rhs);

	private :
		AWeapon(void);
		std::string			_name;
		int					_apcost;
		int					_damage;
};

#endif
