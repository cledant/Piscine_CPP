/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 10:15:38 by cledant           #+#    #+#             */
/*   Updated: 2017/04/05 22:29:51 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
}

Fixed::Fixed(int const src)
{
	this->_value = src;
	this->_value = this->_value << _fbit_nb;
}

Fixed::Fixed(float const src)
{
	this->_value = src * (1 << _fbit_nb);
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::~Fixed(void)
{
	return ;
}

int		Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int		Fixed::toInt(void) const
{
	return (this->_value >> _fbit_nb);
}

float	Fixed::toFloat(void) const
{
	return (this->_value * (1 / (float)(1 << _fbit_nb)));
}

Fixed &	Fixed::operator=(Fixed const &rhs)
{
	this->_value = rhs.getRawBits();
	return (*this);
}

Fixed		Fixed::operator+(Fixed const &rhs) const
{
	Fixed		tmp;

	tmp.setRawBits(this->_value + rhs.getRawBits());
	return (Fixed(tmp));
}

Fixed		Fixed::operator-(Fixed const &rhs) const
{
	Fixed		tmp;

	tmp.setRawBits(this->_value - rhs.getRawBits());
	return (Fixed(tmp));
}

Fixed		Fixed::operator*(Fixed const &rhs) const
{
	Fixed		tmp;

	tmp.setRawBits((this->_value * rhs.getRawBits()) >> _fbit_nb);
	return (Fixed(tmp));
}

Fixed		Fixed::operator/(Fixed const &rhs) const
{
	Fixed		tmp;

	tmp.setRawBits((this->_value << _fbit_nb) / rhs.getRawBits());
	return (Fixed(tmp));
}

Fixed		Fixed::operator++(int)
{
	Fixed		tmp(*this);

	++(this->_value);
	return (Fixed(tmp));
}

Fixed &		Fixed::operator++(void)
{
	(this->_value)++;
	return (*this);
}

Fixed		Fixed::operator--(int)
{
	Fixed		tmp(*this);

	--(this->_value);
	return (Fixed(tmp));
}

Fixed &		Fixed::operator--(void)
{
	(this->_value)--;
	return (*this);
}

bool		Fixed::operator==(Fixed const &rhs) const
{
	if (rhs.getRawBits() == this->_value)
		return (true);
	return (false);
}

bool		Fixed::operator!=(Fixed const &rhs) const
{
	if (rhs.getRawBits() != this->_value)
		return (true);
	return (false);
}

bool		Fixed::operator>(Fixed const &rhs) const
{
	if (this->_value > rhs.getRawBits())
		return (true);
	return (false);
}

bool		Fixed::operator<(Fixed const &rhs) const
{
	if (this->_value < rhs.getRawBits())
		return (true);
	return (false);
}

bool		Fixed::operator>=(Fixed const &rhs) const
{
	if (this->_value >= rhs.getRawBits())
		return (true);
	return (false);
}

bool		Fixed::operator<=(Fixed const &rhs) const
{
	if (this->_value <= rhs.getRawBits())
		return (true);
	return (false);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

Fixed &			Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return (a);
	return (b);
}

Fixed const &	Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a >= b)
		return (a);
	return (b);
}

Fixed &			Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed const &	Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a <= b)
		return (a);
	return (b);
}

int const		Fixed::_fbit_nb = 8;
