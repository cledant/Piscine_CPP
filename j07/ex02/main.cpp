/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 16:08:12 by cledant           #+#    #+#             */
/*   Updated: 2017/04/13 11:03:57 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>
#include <iostream>

int		main(void)
{
	Array<int> *a = new Array<int>(5);
	(*a)[0] = 5;
	(*a)[1] = 6;
	(*a)[2] = 7;
	(*a)[3] = 8;
	(*a)[4] = 9;
	try
	{
		(*a)[5] = 10;
	}
	catch (std::exception)
	{
		std::cout << "catch assignation hors map" << std::endl;
	}
	std::cout << *a;
	delete a;
	std::cout << "===============" << std::endl;
	Array<double> b(10);
	b[0] = 5;
	b[1] = 6.5;
	b[2] = 7.66;
	b[3] = 8.666;
	b[4] = 9.77777;
	try
	{
		b[5] = 10;
	}
	catch (std::exception)
	{
		std::cout << "catch assignation hors map" << std::endl;
	}
	b[6] = 5;
	b[7] = 6.5;
	b[8] = 7.66;
	b[9] = 8.666;
	std::cout << b;
	std::cout << "===============" << std::endl;
	Array<float> *c = new Array<float>(0);
	try
	{
		(*c)[0] = 10;
	}
	catch (std::exception)
	{
		std::cout << "catch assignation hors map" << std::endl;
	}
	std::cout << *c;
	delete c;
	std::cout << "===============" << std::endl;
	Array<double>d;
	d = b;
	std::cout << d;
	return (0);
}
