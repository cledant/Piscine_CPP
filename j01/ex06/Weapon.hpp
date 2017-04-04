/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 17:50:45 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 18:18:16 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
	public :
		Weapon(std::string	str);
		~Weapon(void);
		void					setType(std::string	str);
		std::string const &		getType(void) const;

	private : 
		std::string				_type;
};

#endif
