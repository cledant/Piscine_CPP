/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:19:51 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 20:57:57 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(int hp, std::string const & type) : Enemy(hp, type)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &src) : Enemy(src.getHP(), src.getType())
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
}

void		SuperMutant::takeDamage(int damage_taken)
{
	if (damage_taken < 0)
		return ;
	this->Enemy::takeDamage(damage_taken - 3);
}

SuperMutant &		SuperMutant::operator=(SuperMutant const & rhs)
{
	Enemy::operator=(rhs);
	return (*this);
}
