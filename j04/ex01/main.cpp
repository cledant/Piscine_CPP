/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 17:27:41 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 20:57:38 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main (void)
{
	Character	*Reimu = new Character("Reimu");

	std::cout << *Reimu;

	AWeapon *cardA = new PlasmaRifle();
	Reimu->equip(cardA);
	std::cout << *Reimu;

	Enemy	*Kanako = new RadScorpion();
	Reimu->attack(Kanako);
	Reimu->attack(Kanako);
	Reimu->attack(Kanako);
	Reimu->attack(Kanako);
	std::cout << *Reimu;
	
	SuperMutant	*Suwako = new SuperMutant();
	Reimu->attack(Suwako);
	Reimu->attack(Suwako);
	Reimu->attack(Suwako);
	Reimu->attack(Suwako);
	Reimu->attack(Suwako);
	Reimu->attack(Suwako);
	std::cout << *Reimu;
	
	Reimu->recoverAP();
	Reimu->recoverAP();
	Reimu->recoverAP();
	Reimu->recoverAP();
	Reimu->recoverAP();
	Reimu->recoverAP();
	std::cout << *Reimu;

	AWeapon *cardB = new PowerFist();
	Reimu->equip(cardB);
	std::cout << *Reimu;

	Enemy *Sanae = new SuperMutant(*Suwako);
	SuperMutant *toto = new SuperMutant();
	*toto = *Suwako;
	Reimu->attack(Suwako);
	Reimu->attack(Suwako);
	Reimu->attack(Suwako);
	std::cout << *Reimu;
	Reimu->recoverAP();
	Reimu->recoverAP();
	Reimu->recoverAP();
	Reimu->recoverAP();

	Reimu->attack(toto);
	Reimu->attack(toto);
	Reimu->attack(toto);

	Character Marisa("Marisa");
	Marisa.equip(cardA);
	std::cout << Marisa;

	Marisa.attack(Sanae);
	Marisa.attack(Sanae);
	Marisa.attack(Sanae);
	Marisa.attack(Sanae);
	Marisa.attack(Sanae);
	Marisa.attack(Sanae);
	std::cout << Marisa;

	std::cout << *Reimu;
	Reimu->equip(NULL);
	std::cout << *Reimu;

	delete cardA;
	delete cardB;
	delete Reimu;

	return (0);
}
