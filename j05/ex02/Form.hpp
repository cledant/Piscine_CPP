/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 10:31:23 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 21:11:45 by cledant          ###   ########.fr       */
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

		class NotSignedException : public std::exception
		{
			public :

				explicit NotSignedException(void) : _msg("Form not signed")
				{
				}
				explicit NotSignedException(std::string const &msg) : _msg(msg)
				{
				}
				virtual ~NotSignedException(void) throw() 
				{
				}
				NotSignedException(GradeTooLowException const & src)
				{
					*this = src;
				}
				NotSignedException & operator=(NotSignedException const & rhs)
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

		Form(std::string name, std::string type, int sign, int exec);
		virtual ~Form(void);
		Form(Form const & src);

		std::string		getName(void) const;
		std::string		getType(void) const;
		int				getExecGrade(void) const;
		int				getSignGrade(void) const;
		bool			getSigned(void) const;

		void			beSigned(Bureaucrat const & bur);
		void			checkGrade(Bureaucrat const & executor) const;
		
		virtual void	execute(Bureaucrat const & executor) const = 0;

		Form & 			operator=(Form const & rhs);

	private :
		Form(void);
		std::string const		_name;
		std::string const		_type;
		int const				_sign;
		int const				_exec;
		bool					_signed;

};

std::ostream &	operator<<(std::ostream & o, Form const &rhs);

#endif
