/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 08:55:56 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 20:54:53 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <sstream>

class Form;

class Bureaucrat
{
	public :

		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		~Bureaucrat(void);
		Bureaucrat(Bureaucrat const & src);
		std::string		getName(void) const;
		int				getGrade(void) const;

		void			incrementGrade(void);
		void			decrementGrade(void);
		void			signForm(Form &form);

		Bureaucrat & 	operator=(Bureaucrat const & rhs);

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


	private :
		std::string		_name;
		int				_grade;		

};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const &rhs);

#endif
