/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 09:25:14 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 20:16:16 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : _name("No name"), _title("No tile")
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{	
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never !" << std::endl;
}

std::string		Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string		Sorcerer::getTitle(void) const
{
	return (this->_title);
}

std::string		Sorcerer::introduce(void) const
{
	std::string			str;
	std::stringstream	ss;

	ss << "I am " << this->_name << ", " << this->_title << ", and I like ponies!" << std::endl;
	str = ss.str();
	return (str);
}

std::ostream &	operator<<(std::ostream & o, Sorcerer const & rhs)
{
	o << rhs.introduce();
	return (o);
}

Sorcerer &		Sorcerer::operator=(Sorcerer const & rhs)
{
	this->_name = rhs.getName();
	this->_title = rhs.getTitle();
	return (*this);
}
