/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:57:03 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 20:24:55 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "Victim.hpp"

class Peon : public Victim
{
	public :
		Peon(void);
		Peon(std::string name);
		Peon(Peon const & src);
		virtual ~Peon(void);
		virtual void	getPolymorphed(void) const;

		Peon & 		operator=(Peon const & rhs);

	protected :
		virtual void	birth(void) const;
		virtual void	death(void) const;

};

std::ostream &	operator<<(std::ostream & o, Peon const &sorc);

#endif
