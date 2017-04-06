/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 10:15:38 by cledant           #+#    #+#             */
/*   Updated: 2017/04/06 09:50:21 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default construtor called" << std::endl;
}

Fixed::Fixed(int const src)
{
	std::cout << "Int construtor called" << std::endl;
	this->_value = src;
	this->_value = this->_value << _fbit_nb;
}

Fixed::Fixed(float const src)
{
	std::cout << "Float construtor called" << std::endl;
	this->_value = std::roundf(src * (1 << _fbit_nb));
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy construtor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
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
	std::cout << "Assignation operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

int const		Fixed::_fbit_nb = 8;
