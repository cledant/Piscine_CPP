/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 09:49:31 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 09:56:16 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int		main(void)
{
	Bureaucrat toto;
	Bureaucrat titi("Jean-Marie", 300);
	Bureaucrat tutu("Jean-Pascal", -10);
	Bureaucrat riri("Uber Roxor", 1);
	Bureaucrat fifi("Roxor", 10);

	std::cout << toto;
	std::cout << titi;
	std::cout << tutu;
	std::cout << riri;
	std::cout << fifi;
	return (0);
}
