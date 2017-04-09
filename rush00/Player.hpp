/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 11:34:11 by cledant           #+#    #+#             */
/*   Updated: 2017/04/08 18:40:00 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP

#include <string>
#include <iostream>
#include "AEntity.hpp"
#include "Bullet.hpp"

class Player : public AEntity
{
	public :
		Player(int pos_x, int pos_y);
		virtual ~Player(void);
		virtual Player &		operator=(Player const & rhs);
		void	move_up(void);
		void	move_down(void);
		void	move_right(void);
		void	move_left(void);
		AEntity *shoot(void);

	private :
		Player(Player const & src);
		Player(void);
};

#endif
