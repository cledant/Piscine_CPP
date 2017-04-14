/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 12:27:23 by cledant           #+#    #+#             */
/*   Updated: 2017/04/13 17:16:28 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

void	disp_float(float const &arg1)
{
	std::cout << std::fixed << std::setprecision(5) << arg1 << std::endl;
}

void	disp(int const &arg1)
{
	std::cout << arg1 << std::endl;
}

template<typename T, typename U>
 void	iter(T const *arg1, size_t const &arg2, U fct(T const &))
{
	size_t		c = 0;

	while (c < arg2)
	{
		fct(arg1[c]);
		c++;
	}
}

int		main(void)
{
	int		a[] = {12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
	float	b[] = {12.45, 13, 14.4444444444, 15, 16.78, 17, 18, 19, 20, 21};

	std::cout << "================" << std::endl;
	iter<int, void>(a, 5, disp);
	std::cout << "================" << std::endl;
	iter<int, void>(a, 10, disp);
	std::cout << "================" << std::endl;
	iter<float, void>(b, 10, disp_float);
	std::cout << "================" << std::endl;
	return (0);
}
