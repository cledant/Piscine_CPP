/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 12:03:08 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 22:26:29 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) : _event_type("Tank")
{
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	return ;
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->_event_type = type;
}

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie	*mob = new Zombie(name, this->_event_type);
	return (mob);
}

void		ZombieEvent::randomChump(void) const
{
	std::string		name[10] = {"Toto", "Rob", "Foo", "Bar", "Nya", "Nyu", "Titi",
								"Tutu", "Yoshika", "Foobar"};
	std::srand(clock());
	Zombie			toto = Zombie(name[std::rand() % 10], this->_event_type);

	toto.announce();
}
