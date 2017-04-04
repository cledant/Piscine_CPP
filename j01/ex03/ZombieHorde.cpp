/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 13:26:10 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 22:34:18 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
	std::string		names[15] = {"Toto", "Titi", "Tutu", "Rob", "Bruce", "Robin",
						"Noob", "Coco", "Nya", "Nyu", "Mew", "Yoshika", "Reimu",
						"Marisa", "Yuuka"};
	std::string		types[15] = {"Flowermaster", "Tank", "Witch", "Smoker",
						"Spitter", "Peon", "ShrineMaiden", "Magician", "Ice",
						"Drake", "Steel", "Dark", "Psy", "Normal", "Blue"};
	int				c;

	c = 0;
	if (N <= 0)
		N = 10;
	_size = N;
	std::srand(clock());
	this->_horde = new Zombie*[N];
	while (c < N)
	{
		this->_horde[c] = new Zombie(names[rand() % 15], types[rand() % 15]);
		c++;
	}
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	int		c;

	c = 0;
	while (c < this->_size)
	{
		delete this->_horde[c];
		c++;
	}
	delete [] this->_horde;
	std::cout << "The horde has been defeated !" << std::endl;
	return ;
}

void		ZombieHorde::announce(void) const
{
	int				c;

	c = 0;
	while (c < this->_size)
	{
		this->_horde[c]->announce();
		c++;
	}
}
