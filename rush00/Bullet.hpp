/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 11:34:11 by cledant           #+#    #+#             */
/*   Updated: 2017/04/08 14:10:28 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_HPP
# define BULLET_HPP

#include <string>
#include <iostream>
#include "AEntity.hpp"

class Bullet : public AEntity
{
	public :
		Bullet(int pos_x, int pos_y);
		virtual ~Bullet(void);
		virtual Bullet &		operator=(Bullet const & rhs);

	private :
		virtual void			move_up(void);
		virtual void			move_down(void);
		virtual void			move_left(void);
		virtual void			move_right(void);
		virtual AEntity			*shoot(void);
		Bullet(Bullet const & src);
		Bullet(void);
};

#endif
