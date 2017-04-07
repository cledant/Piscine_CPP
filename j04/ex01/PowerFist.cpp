/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 15:05:07 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 21:05:38 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
}

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src.getName(), src.getAPCost(), src.getDamage())
{
}

PowerFist::~PowerFist(void)
{
}

void				PowerFist::attack() const
{
	std::cout << this->_output  << std::endl;
}

PowerFist &		PowerFist::operator=(PowerFist const & rhs)
{
	AWeapon::operator=(rhs);
	return (*this);
}

std::string			PowerFist::_output = "* pschhh... SBAM *";
