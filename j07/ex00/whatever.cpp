/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 11:25:55 by cledant           #+#    #+#             */
/*   Updated: 2017/04/12 16:00:54 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

template<typename T>
void	swap(T &arg1, T &arg2)
{
	T	tmp;

	tmp = arg1;
	arg1 = arg2;
	arg2 = tmp;
}


template<typename T>
T	min(T const &arg1, T const &arg2)
{
	if (arg1 < arg2)
		return (arg1);
	else if (arg1 == arg2)
		return (arg2);
	else
		return (arg2);
}

template<typename T>
T	max(T const &arg1, T const &arg2)
{
	if (arg1 > arg2)
		return (arg1);
	else if (arg1 == arg2)
		return (arg2);
	else
		return (arg2);
}

int		main(void)
{
	int		a1 = 42;
	int		a2 = 21;
	std::string	 s1 = "coucou1";
	std::string	 s2 = "coucou2";
	double	b1 = -12;
	double	b2 = 45;

	std::cout << "a1 = " << a1 << ", a2  = " << a2 << std::endl;
	swap(a1, a2);
	std::cout << "a1 = " << a1 << ", a2  = " << a2 << std::endl;
	std::cout << "min(a1, a2) = " << ::min(a1, a2) << std::endl;
	std::cout << "max(a1, a2) = " << ::max(a1, a2) << std::endl;

	std::cout << "b1 = " << b1 << ", b2  = " << b2 << std::endl;
	swap(b1, b2);
	std::cout << "b1 = " << b1 << ", b2  = " << b2 << std::endl;
	std::cout << "min(b1 b2) = " << ::min(b1, b2) << std::endl;
	std::cout << "max(b1, b2) = " << ::max(b1, b2) << std::endl;

	std::cout << "s1 = " << s1 << ", s2  = " << s2 << std::endl;
	swap(s1, s2);
	std::cout << "s1 = " << s1 << ", s2  = " << s2 << std::endl;
	std::cout << "min(s1 s2) = " << ::min(s1, s2) << std::endl;
	std::cout << "max(s1, s2) = " << ::max(s1, s2) << std::endl;
}
