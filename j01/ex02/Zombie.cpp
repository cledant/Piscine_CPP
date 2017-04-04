/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 11:47:06 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 12:36:10 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " retuned to oblivion !" << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << "<"  << this->_name << " (" << this->_type << ")> Braiiiiiiiinnnnnnnssssssss..." << std::endl;
}
