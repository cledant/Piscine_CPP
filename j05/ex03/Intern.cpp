/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 21:46:42 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 22:15:05 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::~Intern(void)
{
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern &		Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}

Form*			Intern::makeForm(std::string const &type, std::string const &name)
{
	Form	*new_form;

	if (type == "robotomy request")
	{
		new_form = new RobotomyRequestForm(name);
		std::cout << "Intern creates " << new_form->getType() << std::endl;
		return(new_form);
	}
	else if (type == "presidential pardon")
	{
		new_form = new PresidentialPardonForm(name);
		std::cout << "Intern creates " << new_form->getType() << std::endl;
		return(new_form);
	}
	else if (type == "shrubbery creation")
	{
		new_form = new ShrubberyCreationForm(name);
		std::cout << "Intern creates " << new_form->getType() << std::endl;
		return(new_form);
	}
	else
	{	
		std::cout << "Intern doesn't know this type !" << std::endl;
		throw std::exception();
	}
}
