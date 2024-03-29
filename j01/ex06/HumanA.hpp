/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 17:59:46 by cledant           #+#    #+#             */
/*   Updated: 2017/04/05 21:50:44 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>

class HumanA
{
	public :
		HumanA(std::string name, Weapon& weap);
		~HumanA(void);
		void	attack(void) const;
	
	private :
		Weapon&			_weapon;
		std::string		_name;
};

#endif
