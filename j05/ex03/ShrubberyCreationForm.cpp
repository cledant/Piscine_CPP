/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 18:58:37 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 19:31:18 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("Toto", "Shrubbery Creation Request", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src.getName(), src.getType(), src.getSignGrade(), src.getExecGrade())
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
try : Form(name, "Shrubbery Creation Request", 145, 137)
{
	if (this->getSignGrade() < 1 || this->getExecGrade() < 1)
		throw ShrubberyCreationForm::GradeTooHighException();
	if (this->getSignGrade() > 150 || this->getExecGrade() > 150)
		throw ShrubberyCreationForm::GradeTooLowException();
}
catch (std::exception &e)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{	
}

void			ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	ofs;

	try
	{
		this->checkGrade(executor);
		ofs.open(this->getName() + "_shrubbery", std::ofstream::out);
		ofs << "-----" << std::endl;
	   	ofs	<< "|   |" << std::endl;
	    ofs << "|   |" << std::endl;
	    ofs	<< "|   |" << std::endl;
	    ofs	<< "-----" << std::endl;
		ofs << "  #  " << std::endl;
		ofs << "  #  " << std::endl;
		ofs << "  #  " << std::endl;
		ofs << "  #  " << std::endl;
		ofs << "  #  " << std::endl;
		ofs << "  #  " << std::endl;
		ofs.close();
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
	catch (std::fstream::failure &e)
	{
		throw e;
		return;
	}
	catch (std::exception &e)
	{
		throw e;
		return;
	}
}

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const & rhs)
{
	o << "ShrubberyCreationForm : " << rhs.getName() << ", grade required to sign : " << rhs.getSignGrade() << ", grade required to execute : " << rhs.getExecGrade() << ", signed : " << rhs.getSigned() << " target : " << rhs.getType() << std::endl;
	return (o);
}

ShrubberyCreationForm &		ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	Form::operator=(rhs);
	return (*this);
}
