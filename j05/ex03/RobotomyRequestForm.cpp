/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 18:16:17 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 18:30:03 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestFormulaire 65A.9788", "Presidential Pardon Form", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src.getName(), src.getType(), src.getSignGrade(), src.getExecGrade())
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string name)
try : Form(name, "Robotomy Request Form", 72, 45)
{
	if (this->getSignGrade() < 1 || this->getExecGrade() < 1)
		throw RobotomyRequestForm::GradeTooHighException();
	if (this->getSignGrade() > 150 || this->getExecGrade() > 150)
		throw RobotomyRequestForm::GradeTooLowException();
}
catch (std::exception &e)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{	
}

void			RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
	if (std::rand() % 2 == 0)
	{
		std::cout << "BZZZZZZZZZZZZZ BZZZZZZZZZZZZZ BZZZZZZZZZZZZZZ" << std::endl;
		std::cout << this->getName() << "is now a robot !!!" << std::endl;
	}
	else
		std::cout << this->getName() << " died during the robotomy" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const & rhs)
{
	o << "RobotomyRequestForm : " << rhs.getName() << ", grade required to sign : " << rhs.getSignGrade() << ", grade required to execute : " << rhs.getExecGrade() << ", signed : " << rhs.getSigned() << " target : " << rhs.getType() << std::endl;
	return (o);
}

RobotomyRequestForm &		RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	Form::operator=(rhs);
	return (*this);
}
