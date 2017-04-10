/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 10:31:23 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 20:55:59 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "Bureaucrat.hpp"

class Form
{
	public :

		class GradeTooHighException : public std::exception
		{
			public :

				explicit GradeTooHighException(void) : _msg("Grade too high")
				{
				}
				explicit GradeTooHighException(std::string const &msg) : _msg(msg)
				{
				}
				virtual ~GradeTooHighException(void) throw() 
				{
				}
				GradeTooHighException(GradeTooHighException const & src)
				{
					*this = src;
				}
				GradeTooHighException & operator=(GradeTooHighException const & rhs)
				{
					this->_msg = rhs._msg;
					return (*this);
				}
				virtual const char* what() const throw()
				{
					return (_msg.c_str());
				}
			protected : 
				std::string _msg;
		};

		class GradeTooLowException : public std::exception
		{
			public :

				explicit GradeTooLowException(void) : _msg("Grade too high")
				{
				}
				explicit GradeTooLowException(std::string const &msg) : _msg(msg)
				{
				}
				virtual ~GradeTooLowException(void) throw() 
				{
				}
				GradeTooLowException(GradeTooLowException const & src)
				{
					*this = src;
				}
				GradeTooLowException & operator=(GradeTooLowException const & rhs)
				{
					this->_msg = rhs._msg;
					return (*this);
				}
				virtual const char* what() const throw()
				{
					return (_msg.c_str());
				}
			protected : 
				std::string _msg;
		};

		Form(void);
		Form(std::string name, int grade);
		~Form(void);
		Form(Form const & src);
		std::string		getName(void) const;
		int				getGrade(void) const;
		bool			getSigned(void) const;

		void			beSigned(Bureaucrat const & bur);

		Form & 	operator=(Form const & rhs);

	private :
		std::string const		_name;
		int const				_grade;
		bool					_signed;	

};

std::ostream &	operator<<(std::ostream & o, Form const &rhs);

#endif
