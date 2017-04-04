/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 10:28:58 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 11:01:46 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string pony_name) : _name(pony_name)
{
	std::cout << "A cute pony named " << pony_name << " is born" << std::endl;
	this->_name.clear();
	this->_name = pony_name;
}

Pony::~Pony(void)
{
	std::cout << "A poor pony named " << this->_name << " died" << std::endl;
}

void		Pony::changePonyName(std::string new_pony_name)
{	
	std::cout << "A cute pony named " << this->_name << " is now named " << new_pony_name <<std::endl;
	this->_name.clear();
	this->_name = new_pony_name;
}

void		Pony::ponyOnTheHeap(std::string name)
{
	Pony	*toto = new Pony(name);

	toto->changePonyName("Raindow Dash");
	delete toto;
}

void		Pony::ponyOnTheStack(std::string name)
{
	Pony	tutu = Pony(name);

	tutu.changePonyName("Apple Jack");
}
