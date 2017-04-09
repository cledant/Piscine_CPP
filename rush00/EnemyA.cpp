/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 12:01:06 by cledant           #+#    #+#             */
/*   Updated: 2017/04/09 11:27:14 by aribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EnemyA.hpp"

EnemyA::EnemyA(void) : AEntity("EnemyA", 2, "<", 0, 0, -1)
{
}

EnemyA::EnemyA(int pos_x, int pos_y) : AEntity("EnemyA", 2, "<", pos_x, pos_y, -1)
{
}

EnemyA::EnemyA(EnemyA const &src) : AEntity(src.getType(), src.getHP(), src.getSprite(), src.getPosX(), src.getPosY(), src.getAutomove())
{
}

EnemyA::~EnemyA(void)
{
}

void		EnemyA::move_up(void)
{
}

void		EnemyA::move_down(void)
{
}

void		EnemyA::move_right(void)
{
}

void		EnemyA::move_left(void)
{
}

AEntity *	EnemyA::shoot(void)
{
	return (NULL);
}

EnemyA &		EnemyA::operator=(EnemyA const & rhs)
{
	AEntity::operator=(rhs);
	return (*this);
}
