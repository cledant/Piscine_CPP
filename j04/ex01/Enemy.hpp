/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 15:10:07 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 21:15:45 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>

class Enemy 
{
	public :
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & src);
		std::string	const &		getType(void) const;
		int						getHP(void) const;
		virtual ~Enemy(void);
		virtual void takeDamage (int damage_taken);

		virtual Enemy &			operator=(Enemy const & rhs);

	private :
		Enemy(void);
		std::string			_type;
		int					_hp;
};

#endif
