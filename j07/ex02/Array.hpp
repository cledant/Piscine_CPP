/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 13:14:53 by cledant           #+#    #+#             */
/*   Updated: 2017/04/13 10:58:06 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T = int>
class Array
{
	public :

		Array<T>(void) :_size(0)
		{
			this->_array = new T[0];
		}
		Array<T>(unsigned int n) : _size(n)
		{
			this->_array = new T[n];
		}
		Array<T>(Array const & src)
		{
			*this = src;
		}
		~Array<T>(void)
		{
			delete [] this->_array;
		}

		unsigned int 	size(void) const
		{
			return (this->_size);
		}

		Array<T> &		operator=(Array<T> const & rhs)
		{
			unsigned int	c = 0;

			if (this == &rhs)
				return (*this);
			if (this->_size != 0)
				delete [] this->_array;
			this->_size = rhs._size;
			this->_array = new T[this->_size];
			while (c < this->_size)
			{
				this->_array[c] = rhs[c];
				c++;
			}
			return (*this);
		}

		T& 				operator[](unsigned int index)
		{
			if (index >= this->_size)
				throw std::exception();
			return (this->_array[index]);
		}

		T const & 				operator[](unsigned int index) const
		{
			if (index >= this->_size)
				throw std::exception();
			return(this->_array[index]);
		}

	private :

		unsigned int		_size;
		T					*_array;
};

template <typename T>
std::ostream	&operator<<(std::ostream &o, Array<T> const & rhs)
{
	unsigned int c = 0;

	while (c < rhs.size())
	{
		o << rhs[c] << std::endl;
		c++;
	}
	return (o);
}

#endif
