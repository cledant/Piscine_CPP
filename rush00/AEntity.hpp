/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AEntity.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 10:13:45 by cledant           #+#    #+#             */
/*   Updated: 2017/04/08 22:57:45 by aribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AENTITY_HPP
# define AENTITY_HPP

#include <string>

class AEntity
{
	public :

		AEntity(std::string const & type, int hp, std::string sprite, int posX, int posY, int automove);
		virtual ~AEntity(void);
		virtual AEntity &	operator=(AEntity const & rhs);

		void	takeDamage(int damagetaken);
		void	scrolling(void); //Se deplace en x de une case selon le signe de automove

		std::string	const &		getType(void) const;
		int						getHP(void) const;
		std::string	const &		getSprite(void) const;
		char const *			getSpriteStr(void) const;
		int						getPosX(void) const;
		int						getPosY(void) const;
		int						getAutomove(void) const;

		virtual void			move_up(void) = 0;
		virtual void			move_down(void) = 0;
		virtual void			move_left(void) = 0;
		virtual void			move_right(void) = 0;
		virtual AEntity			*shoot(void) = 0;

	protected :

		int				_pos_x;
		int				_pos_y;

	private :

		AEntity(void);
		AEntity(AEntity const & src);
		std::string		_type;
		int				_hp;
		std::string		_sprite;
		int				_automove;
};

#endif
