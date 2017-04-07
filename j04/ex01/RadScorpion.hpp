/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 15:55:22 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 21:17:03 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public :
		RadScorpion(void);
		RadScorpion(RadScorpion const & src);
		virtual ~RadScorpion(void);
		virtual RadScorpion &		operator=(RadScorpion const & rhs);
	private :
		RadScorpion(int hp, std::string const & type);
};

#endif
