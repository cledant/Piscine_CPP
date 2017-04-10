/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 09:49:31 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 14:09:41 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int		main(void)
{
	Bureaucrat toto;
	Bureaucrat riri("Uber Roxor", 1);
	Bureaucrat fifi("Roxor", 10);
	try
	{
		Form	form3("Shiiiiiiiiiiiiiiiiiiiiit", -10);

		std::cout << form3;
	}
	catch (std::exception &e)
	{
		Form	form3("We got an exception", 50);

		std::cout << form3;
	}

	Form	form1("Make America great again !", 5);
	Form	form2("Moar burger", 75);

	std::cout << form1;
	std::cout << form2;

	std::cout << toto;
	std::cout << riri;
	std::cout << fifi;

	fifi.signForm(form1);
	toto.signForm(form1);
	fifi.signForm(form2);
	riri.signForm(form1);

	std::cout << form1;
	std::cout << form2;
	return (0);
}
