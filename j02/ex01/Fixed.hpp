/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 10:03:59 by cledant           #+#    #+#             */
/*   Updated: 2017/04/05 15:50:42 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <sstream>

class Fixed
{
	public :

		Fixed(void);
		Fixed(Fixed const & src);
		Fixed(int const src);
		Fixed(float const src);
		~Fixed(void);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		int			toInt(void) const;
		float		toFloat(void) const;

		Fixed &		operator=(Fixed const & rhs);

	private :

		int					_value;
		static int const	_fbit_nb;
};

std::ostream &		operator<<(std::ostream & o, Fixed const & rhs);

#endif
