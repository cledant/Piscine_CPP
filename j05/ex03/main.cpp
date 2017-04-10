/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 09:49:31 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 22:15:16 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int		main(void)
{
	Intern		slave;
	Bureaucrat	toto;
	Bureaucrat	riri("Uber Roxor", 1);
	Bureaucrat	fifi("Roxor", 30);
	Bureaucrat	r1("RoboSignOk", 60);
	Bureaucrat	s1("Peon", 140);
	Form		*prez = slave.makeForm("presidential pardon", "Giovanni");
	Form		*robo = slave.makeForm("robotomy request", "Makoto Kusanagi");
	Form		*shu = slave.makeForm("shrubbery creation", "King Arthur");
	Form		*nono;
	try
	{
		nono = slave.makeForm("blablanla", "Nono");
	}
	catch (std::exception &e)
	{
		nono = NULL;
	}

	(void)nono;
	std::cout << *prez;
	std::cout << *robo;
	std::cout << *shu;
	std::cout << "======================" << std::endl;
	std::cout << toto;
	std::cout << riri;
	std::cout << fifi;
	std::cout << r1;
	std::cout << s1;
	std::cout << "======================" << std::endl;
	toto.signForm(*prez);
	riri.signForm(*prez);
	fifi.executeForm(*prez);
	riri.executeForm(*prez);	
	std::cout << "======================" << std::endl;
	toto.signForm(*robo);
	r1.signForm(*robo);
	r1.executeForm(*robo);
	fifi.executeForm(*robo);
	fifi.executeForm(*robo);
	fifi.executeForm(*robo);
	fifi.executeForm(*robo);
	fifi.executeForm(*robo);
	std::cout << "======================" << std::endl;
	toto.signForm(*shu);
	s1.signForm(*shu);
	s1.executeForm(*shu);
	fifi.executeForm(*shu);
	fifi.executeForm(*shu);
	fifi.executeForm(*shu);
	fifi.executeForm(*shu);
	fifi.executeForm(*shu);
	std::cout << "======================" << std::endl;
	std::cout << *prez;
	std::cout << *robo;
	std::cout << *shu;
	delete prez;
	delete robo;
	delete shu;
	return (0);
}
