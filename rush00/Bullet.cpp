/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 15:59:45 by cledant           #+#    #+#             */
/*   Updated: 2017/04/09 10:38:29 by aribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.hpp"

Bullet::Bullet(void) : AEntity("Bullet", 2, "-", 0, 0, 1)
{
}

Bullet::Bullet(int pos_x, int pos_y) : AEntity("Bullet", 2, "-", pos_x, pos_y, 1)
{
}

Bullet::Bullet(Bullet const &src) : AEntity(src.getType(), src.getHP(), src.getSprite(), src.getPosX(), src.getPosY(), src.getAutomove())
{
}

Bullet::~Bullet(void)
{
}

void		Bullet::move_up(void)
{
}

void		Bullet::move_down(void)
{
}

void		Bullet::move_right(void)
{
}

void		Bullet::move_left(void)
{
}

AEntity *	Bullet::shoot(void)
{
	return (NULL);
}

Bullet &		Bullet::operator=(Bullet const & rhs)
{
	AEntity::operator=(rhs);
	return (*this);
}
