/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 12:27:30 by cledant           #+#    #+#             */
/*   Updated: 2017/04/13 15:33:07 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>

int main(void)
{
	std::vector<int>			a;
	std::set<int>				b;
	std::unordered_set<int>		c;

	for (size_t counter = 0; counter < 20; counter++)
		a.push_back(counter * 10);
	int toto = easyfind(a, 50);
	std::cout << toto << std::endl;
	try
	{
		int toto2 = easyfind(a, 55);
		static_cast<void>(toto2);
	}
	catch (std::exception &e)
	{
		std::cout << "Pas trouver" << std::endl;
	}
	std::cout << "================" << std::endl;
	for (size_t counter = 0; counter < 20; counter++)
		b.insert(counter * 5);
	int toto3 = easyfind(b, 25);
	std::cout << toto3 << std::endl;
	try
	{
		int toto4 = easyfind(b, 150);
		static_cast<void>(toto4);
	}
	catch (std::exception &e)
	{
		std::cout << "Pas trouver" << std::endl;
	}
	std::cout << "================" << std::endl;
	for (size_t counter = 0; counter < 20; counter++)
		c.insert(counter * 15);
	int toto5 = easyfind(b, 60);
	std::cout << toto5 << std::endl;
	try
	{
		int toto5 = easyfind(b, 3);
		static_cast<void>(toto5);
	}
	catch (std::exception &e)
	{
		std::cout << "Pas trouver" << std::endl;
	}
	return (0);
}
