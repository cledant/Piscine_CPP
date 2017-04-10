/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 10:44:38 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 14:10:41 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Formulaire 65A.9788"), _grade(150), _signed(false)
{
}

Form::Form(Form const & src) : _name(src.getName()), _grade(src.getGrade()), _signed(getSigned())
{
}

Form::Form(std::string name, int grade)
try : _name(name), _grade(grade), _signed(false)
{
	if (this->_grade < 1)
		throw Form::GradeTooHighException();
	if (this->_grade > 150)
		throw Form::GradeTooLowException();
}
catch (std::exception &e)
{
}

Form::~Form(void)
{	
}

std::string		Form::getName(void) const
{
	return (this->_name);
}

int				Form::getGrade(void) const
{
	return (this->_grade);
}

bool			Form::getSigned(void) const
{
	return (this->_signed);
}

void			Form::beSigned(Bureaucrat const & bur)
{
	if (bur.getGrade() > this->_grade)
	{
		throw Form::GradeTooLowException();
		return ;
	}
	this->_signed = true;
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs)
{
	o << "Form : " << rhs.getName() << ", grade required to sign : " << rhs.getGrade() << ", signed : " << rhs.getSigned() << std::endl;
	return (o);
}

Form &		Form::operator=(Form const & rhs)
{
	this->_signed = rhs.getSigned();
	return (*this);
}
