/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 17:54:32 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 18:21:31 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str) : _type(str)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

void					Weapon::setType(std::string str)
{
	this->_type = str;
}

std::string const &		Weapon::getType(void) const
{
	return (this->_type);
}
