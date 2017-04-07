/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 09:12:33 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 20:12:02 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include <iostream>
#include <sstream>

class Sorcerer
{
	public :
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);
		Sorcerer(Sorcerer const & src);
		std::string		getName(void) const;
		std::string		getTitle(void) const;

		Sorcerer & 		operator=(Sorcerer const & rhs);

		std::string		introduce(void) const;

	private :
		Sorcerer(void);
		std::string		_name;
		std::string		_title;

};

std::ostream &	operator<<(std::ostream & o, Sorcerer const &sorc);

#endif
