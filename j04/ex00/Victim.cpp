/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 09:25:14 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 20:16:27 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) : _name("Jean-Claude")
{
	this->birth();
}

Victim::Victim(std::string name) : _name(name)
{
	this->birth();
}

Victim::Victim(Victim const &src)
{
	*this = src;
	this->birth();
}

Victim::~Victim(void)
{
	this->death();
}

std::string		Victim::getName(void) const
{
	return (this->_name);
}

std::string		Victim::introduce(void) const
{
	std::string			str;
	std::stringstream	ss;

	ss << "I am " << this->_name << " and I like otters !" << std::endl;
	str = ss.str();
	return (str);
}

void			Victim::birth(void) const
{
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
}

void			Victim::death(void) const
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
}

void			Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, Victim const & rhs)
{
	o << rhs.introduce();
	return (o);
}

Victim &		Victim::operator=(Victim const & rhs)
{
	this->_name = rhs.getName();
	return (*this);
}
