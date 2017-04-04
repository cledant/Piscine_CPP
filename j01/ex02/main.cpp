/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 12:10:58 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 13:14:11 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void)
{
	ZombieEvent		event;
	Zombie			*toto;

	toto = event.newZombie("Rob");
	toto->announce();
	delete toto;
	event.setZombieType("Witch");
	toto = event.newZombie("Margaret");
	toto->announce();
	delete toto;
	event.setZombieType("Smoker");
	event.randomChump();
	event.randomChump();
	event.randomChump();
	return (0);
}
