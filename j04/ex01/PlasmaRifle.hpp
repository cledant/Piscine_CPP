/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 14:27:17 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 21:16:34 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon 
{
	public :
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const & src);
		virtual ~PlasmaRifle(void);
		virtual 			void attack () const;
		virtual PlasmaRifle &		operator=(PlasmaRifle const & rhs);

	private :
		PlasmaRifle(std::string const & name, int apcost, int damage);
		static std::string		_output;
};

#endif
