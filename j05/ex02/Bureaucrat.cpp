/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 09:25:14 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 18:05:38 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Jean-Patrick"), _grade(150)
{
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	*this = src;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception& e)
	{
		grade = 150;
	}
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{	
}

std::string		Bureaucrat::getName(void) const
{
	return (this->_name);
}

int				Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void			Bureaucrat::incrementGrade(void)
{
	this->_grade--;
	try
	{
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
	}
	catch (std::exception& e)
	{
		this->_grade = 1;
	}
}

void			Bureaucrat::decrementGrade(void)
{
	this->_grade++;
	try
	{
		if (this->_grade > 1)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception& e)
	{
		this->_grade = 150;
	}
}


void			Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch (std::exception& e)
	{
		std::cout << this->_name << " cannot sign " << form.getType() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " signs " << form.getType() << std::endl;
}

void			Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
	}
	catch (std::exception& e)
	{
		std::cout << this->_name << " cannot execute " << form.getType() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " executes " << form.getType() << std::endl;
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}

Bureaucrat &		Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return (*this);
}
