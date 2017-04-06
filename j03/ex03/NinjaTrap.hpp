/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 17:36:43 by cledant           #+#    #+#             */
/*   Updated: 2017/04/06 21:21:55 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public :

		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const & src);
		~NinjaTrap(void);
		void 			rangedAttack(std::string const & target) const;
		void 			meleeAttack(std::string const & target) const;
		void 			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			ninjaShoebox(ClapTrap & bot);
		void			ninjaShoebox(FragTrap & bot);
		void			ninjaShoebox(ScavTrap & bot);
		void			ninjaShoebox(NinjaTrap & bot);

		NinjaTrap &		operator=(NinjaTrap const & rhs);
};

#endif
