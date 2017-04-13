/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 12:14:42 by cledant           #+#    #+#             */
/*   Updated: 2017/04/13 14:18:29 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template <class T>
int		easyfind(T arg1, int arg2)
{
	typename T::iterator	it = arg1.begin();
	typename T::iterator	ite = arg1.end();

	while (it != ite)
	{
		if (*it == arg2)
			return (*it);
		it++;
	}
	throw std::exception();
}

#endif
