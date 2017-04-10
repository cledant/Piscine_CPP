/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 16:26:06 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 18:03:57 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonFormulaire 65A.9788", "Presidential Pardon Form", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src.getName(), src.getType(), src.getSignGrade(), src.getExecGrade())
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string name)
try : Form(name, "Presidential Pardon Form", 25, 5)
{
	if (this->getSignGrade() < 1 || this->getExecGrade() < 1)
		throw PresidentialPardonForm::GradeTooHighException();
	if (this->getSignGrade() > 150 || this->getExecGrade() > 150)
		throw PresidentialPardonForm::GradeTooLowException();
}
catch (std::exception &e)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{	
}

void			PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		this->checkGrade(executor);
	}
	catch (Form::GradeTooLowException& e)
	{
		throw e;
		return ;
	}
	catch (Form::NotSignedException& e)
	{
		throw e;
		return ;
	}
	std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const & rhs)
{
	o << "PresidentialPardonForm : " << rhs.getName() << ", grade required to sign : " << rhs.getSignGrade() << ", grade required to execute : " << rhs.getExecGrade() << ", signed : " << rhs.getSigned() << " target : " << rhs.getType() << std::endl;
	return (o);
}

PresidentialPardonForm &		PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	Form::operator=(rhs);
	return (*this);
}
