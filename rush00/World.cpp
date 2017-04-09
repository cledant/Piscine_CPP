/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   World.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 10:39:25 by cledant           #+#    #+#             */
/*   Updated: 2017/04/09 12:20:42 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "World.hpp"

World::World(void)
{
	size_t	c = 0;
	int		win_x = 200;
	int		win_y = 200;

	std::srand(clock());
	this->_tab_entity = new AEntity*[World::_max_entity];
	while (c < World::_max_entity)
	{
		this->_tab_entity[c] = new EnemyA(win_x + (std::rand() % (win_x / 8)), std::rand() % win_y);
		c++;
	}
}

World::World(int win_x, int win_y)
{
	size_t	c = 0;

	std::srand(clock());
	this->_tab_entity = new AEntity*[World::_max_entity];
	while (c < World::_max_entity)
	{
		this->_tab_entity[c] = new EnemyA(win_x + (std::rand() % (win_x / 8)), std::rand() % win_y);
		c++;
	}
}

World::World(World const & src)
{
	*this = src;
}

World::~World(void)
{
	size_t	c = 0;

	while (c < World::_max_entity)
	{
		if (this->_tab_entity[c] != NULL)
			delete _tab_entity[c];
		c++;
	}
	delete this->_tab_entity;
}

size_t			World::getMaxEntity(void) const
{
	return (World::_max_entity);
}

void			World::resetEnemy(int pos, int win_x, int win_y)
{
	delete this->_tab_entity[pos];
	this->_tab_entity[pos] = new EnemyA(win_x + (std::rand() % (win_x / 8)), std::rand() % win_y);
}

void			World::resetEnemyWindow(int win_x, int win_y)
{
	size_t		c = 0;

	while (c < World::_max_entity)
	{
		if (this->_tab_entity[c]->getHP() == 0 || this->_tab_entity[c]->getPosX() <= 0)
			this->resetEnemy(c, win_x, win_y);
		c++;
	}
}

void			World::scrollEnemy(void)
{
	size_t		c = 0;

	while (c < World::_max_entity)
	{
		if (this->_tab_entity[c]->getHP() != 0)
			this->_tab_entity[c]->scrolling();
		c++;
	}
}

AEntity *		World::getEnemy(int pos) const
{
	return (this->_tab_entity[pos]);
}

World &		World::operator=(World const & src)
{
	size_t	c = 0;

	while (c < World::_max_entity)
	{
		this->_tab_entity[c] = src.getEnemy(c);
		c++;
	}
	return (*this);
}

size_t const 	World::_max_entity = 3;
