/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:54:04 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 21:02:00 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src.getName(), src.getAPCost(), src.getDamage())
{
}

PlasmaRifle::~PlasmaRifle(void)
{
}

void				PlasmaRifle::attack() const
{
	std::cout << this->_output  << std::endl;
}

PlasmaRifle &		PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
	AWeapon::operator=(rhs);
	return (*this);
}

std::string			PlasmaRifle::_output = "* piouuu piouuu piouuu *";
