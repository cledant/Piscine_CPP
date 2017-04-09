/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   World.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 17:48:56 by cledant           #+#    #+#             */
/*   Updated: 2017/04/09 12:20:50 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORLD_HPP
# define WORLD_HPP

#include "AEntity.hpp"
#include "EnemyA.hpp"
#include <string>

class World
{
	public :

		World(int win_x, int win_y);
		~World(void);

		size_t			getMaxEntity(void) const;
		AEntity			*getEnemy(int pos) const;
		void			resetEnemyWindow(int win_x, int win_y);
		void			resetEnemy(int array_pos, int win_x, int win_y);
		void			scrollEnemy(void);

	private :

		World(void);
		World &	operator=(World const & src);
		World(World const & src);
		AEntity						**_tab_entity;
		static size_t const			_max_entity;

};

#endif
