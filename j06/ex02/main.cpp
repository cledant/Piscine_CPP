/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 20:48:27 by cledant           #+#    #+#             */
/*   Updated: 2017/04/11 21:20:36 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "ex02.hpp"
#include <string>
#include <iostream>

Base	*generate(void)
{
	int		rand;
	Base	*ptr;

	rand = (std::rand() % 3);
	if (rand == 0)
	{
		ptr = new A();
		std::cout << "Generated as A" << std::endl;
		return (ptr);
	}
	else if (rand == 1)
	{
		ptr = new B();
		std::cout << "Generated as B" << std::endl;
		return (ptr);
	}
	else if (rand == 2)
	{
		ptr = new C();
		std::cout << "Generated as C" << std::endl;
		return (ptr);
	}
	return (NULL);
}

void	identify_from_reference(Base & p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		static_cast<void>(a);
		return ;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		B	&b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		static_cast<void>(b);
		return ;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		C	&c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		static_cast<void>(c);
		return ;
	}
	catch (std::bad_cast &bc)
	{
	}
}

void	identify_from_pointer(Base *p)
{
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);


	if (a != NULL)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	if (b != NULL)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	if (c != NULL)
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

int	main (void)
{
	std::srand(clock());

	Base	*one;
	Base	*two;

	one = generate();
	identify_from_reference(*one);
	identify_from_pointer(one);
	std::cout << "===========" << std::endl;
	two = generate();
	identify_from_reference(*two);
	identify_from_pointer(two);
	std::cout << "===========" << std::endl;
	return (0);
}
