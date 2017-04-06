/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 11:31:05 by cledant           #+#    #+#             */
/*   Updated: 2017/04/06 15:10:37 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	toto;
	FragTrap	titi("UberBot");
	FragTrap	tutu(toto);

	std::srand(clock());
	tutu.rangedAttack("The Medic");
	tutu.meleeAttack("The Heavy");
	tutu.takeDamage(1000);
	tutu.takeDamage(1000);
	tutu.beRepaired(1000);
	titi.takeDamage(50);
	titi.takeDamage(1);
	titi.beRepaired(20);
	tutu.vaulthunter_dot_exe("The Sniper");
	tutu.vaulthunter_dot_exe("The Spy");
	tutu.vaulthunter_dot_exe("The Pyro");
	tutu.vaulthunter_dot_exe("The Soldier");
	tutu.vaulthunter_dot_exe("The Scout");
	tutu.vaulthunter_dot_exe("The Dispenser");
	tutu.vaulthunter_dot_exe("A Sentry");
	return (0);
}
