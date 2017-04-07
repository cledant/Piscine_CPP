/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 15:03:42 by cledant           #+#    #+#             */
/*   Updated: 2017/04/07 21:16:45 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <string>
#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public :
		PowerFist(void);
		PowerFist(PowerFist const & src);
		virtual ~PowerFist(void);
		virtual 			void attack () const;
		virtual PowerFist &			operator=(PowerFist const & rhs);

	private :
		PowerFist(std::string const & name, int apcost, int damage);
		static std::string		_output;
};

#endif
