/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 11:34:11 by cledant           #+#    #+#             */
/*   Updated: 2017/04/08 14:10:12 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMYA_HPP
# define ENEMYA_HPP

#include <string>
#include <iostream>
#include "AEntity.hpp"

class EnemyA : public AEntity
{
	public :
		EnemyA(int pos_x, int pos_y);
		virtual ~EnemyA(void);
		virtual EnemyA &		operator=(EnemyA const & rhs);

	private :
		virtual void			move_up(void);
		virtual void			move_down(void);
		virtual void			move_left(void);
		virtual void			move_right(void);
		virtual AEntity			*shoot(void);
		EnemyA(EnemyA const & src);
		EnemyA(void);
};

#endif
