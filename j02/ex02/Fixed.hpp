/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 10:03:59 by cledant           #+#    #+#             */
/*   Updated: 2017/04/05 22:22:57 by cledant          ###   ########.fr       */
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
		int						getRawBits(void) const;
		void					setRawBits(int const raw);
		int						toInt(void) const;
		float					toFloat(void) const;
		static Fixed &			max(Fixed &a, Fixed &b);
		static Fixed const &	max(Fixed const &a, Fixed const &b);
		static Fixed &			min(Fixed &a, Fixed &b);
		static Fixed const &	min(Fixed const &a, Fixed const &b);

		Fixed		operator+(Fixed const & rhs) const;
		Fixed		operator-(Fixed const & rhs) const;
		Fixed		operator*(Fixed const & rhs) const;
		Fixed		operator/(Fixed const & rhs) const;
		Fixed		operator++(int);
		Fixed &		operator++(void);
		Fixed		operator--(int);
		Fixed &		operator--(void);
		bool		operator==(Fixed const & rhs) const;
		bool		operator!=(Fixed const & rhs) const;
		bool		operator>(Fixed const & rhs) const;
		bool		operator<(Fixed const & rhs) const;
		bool		operator>=(Fixed const & rhs) const;
		bool		operator<=(Fixed const & rhs) const;
		Fixed &		operator=(Fixed const & rhs);

	private :

		int					_value;
		static int const	_fbit_nb;
};

std::ostream &		operator<<(std::ostream & o, Fixed const & rhs);


#endif
