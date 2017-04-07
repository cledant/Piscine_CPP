/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp	                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 09:12:33 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 20:24:08 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>
#include <iostream>
#include <sstream>

class Victim
{
	public :
		Victim(void);
		Victim(std::string name);
		virtual ~Victim(void);
		Victim(Victim const & src);
		std::string		getName(void) const;
		virtual void	getPolymorphed(void) const;

		Victim & 		operator=(Victim const & rhs);

		std::string		introduce(void) const;

	protected :
		virtual void	birth(void) const;
		virtual void	death(void) const;
		std::string		_name;

};

std::ostream &	operator<<(std::ostream & o, Victim const &sorc);

#endif
