/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 16:16:51 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 21:17:21 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include <string>
#include <iostream>
#include "Enemy.hpp"

class SuperMutant : public Enemy 
{
	public :
		SuperMutant(void);
		SuperMutant(SuperMutant const & src);
		virtual ~SuperMutant(void);
		virtual 			void takeDamage (int damage_taken);
		virtual SuperMutant &		operator=(SuperMutant const & rhs);

	private :
		SuperMutant(int hp, std::string const & type);
};

#endif
