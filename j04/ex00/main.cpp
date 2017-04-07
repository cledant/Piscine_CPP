/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 10:18:54 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 20:20:57 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int		main(void)
{
	//Sorcerer	nop;
	Sorcerer	toto("Toto", "Master Brewer");
	Victim		tutu("Robert");
	Victim		titi(tutu);
	Peon		grom("Grunt");
	Peon		bh;
	Peon		meh(bh);
	Victim		*nya = new Victim("Arthas");
	Victim		*thrall = new Peon("Rototo");
	Peon		*momo = new Peon("Garosh");


	std::cout << "=======================================" << std::endl;
	std::cout << toto << tutu << titi << meh << grom << *nya << *thrall << *momo;
	std::cout << "=======================================" << std::endl;
	tutu.getPolymorphed();
	std::cout << "=======================================" << std::endl;
	grom.getPolymorphed();
	std::cout << "=======================================" << std::endl;
	thrall->getPolymorphed();
	std::cout << "=======================================" << std::endl;
	momo->getPolymorphed();
	std::cout << "=======================================" << std::endl;
	nya->getPolymorphed();
	std::cout << "=======================================" << std::endl;
	delete thrall;
	delete momo;
	delete nya;
	return (0);
}
