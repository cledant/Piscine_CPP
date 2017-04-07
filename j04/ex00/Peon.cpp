/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 12:00:33 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 20:17:36 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) : Victim("Blackhand")
{
	this->birth();
}

Peon::Peon(std::string name) : Victim(name)
{
	this->birth();
}

Peon::Peon(Peon const & src)
{
	*this = src;
	this->birth();
}

Peon::~Peon(void)
{
	this->death();
}

void			Peon::birth(void) const
{
	std::cout << "Zog zog." << std::endl;
}

void			Peon::death(void) const
{
	std::cout << "Bleuark..." << std::endl;
}

void			Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, Peon const & rhs)
{
	o << rhs.introduce();
	return (o);
}

Peon &		Peon::operator=(Peon const & rhs)
{
	this->_name = rhs.getName();
	return (*this);
}
