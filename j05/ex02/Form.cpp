/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 10:44:38 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 18:27:59 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Mukyun"), _type("Form file"), _sign(150), _exec(150), _signed(false)
{
}

Form::Form(Form const & src) : _name(src.getName()), _type(src.getType()), _sign(src.getSignGrade()) ,_exec(src.getExecGrade()), _signed(getSigned())
{
}

Form::Form(std::string name, std::string type, int sign, int exec)
try : _name(name), _type(type), _sign(sign), _exec(exec), _signed(false)
{
	std::srand(clock());
	if (this->_sign < 1 || this->_exec < 1)
		throw Form::GradeTooHighException();
	if (this->_sign > 150 || this->_exec > 150)
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

std::string		Form::getType(void) const
{
	return (this->_type);
}

int				Form::getSignGrade(void) const
{
	return (this->_sign);
}

int				Form::getExecGrade(void) const
{
	return (this->_exec);
}

bool			Form::getSigned(void) const
{
	return (this->_signed);
}

void			Form::beSigned(Bureaucrat const & bur)
{
	if (bur.getGrade() > this->_sign)
	{
		throw Form::GradeTooLowException();
		return ;
	}
	this->_signed = true;
}

void			Form::checkGrade(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->_exec)
	{
		throw Form::GradeTooLowException();
		return ;
	}
	if (this->_signed == false)
	{
		throw Form::NotSignedException();
		return ;
	}
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs)
{
	o << "Form : " << rhs.getType() << ", grade required to sign : " << rhs.getSignGrade() << ", grade required to execute : " << rhs.getExecGrade() << ", signed : " << rhs.getSigned() << " , target : " << rhs.getName() << std::endl;
	return (o);
}

Form &		Form::operator=(Form const & rhs)
{
	this->_signed = rhs.getSigned();
	return (*this);
}
