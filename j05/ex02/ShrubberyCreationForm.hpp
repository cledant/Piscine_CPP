/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 18:52:29 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 19:28:42 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public :

		ShrubberyCreationForm(std::string name);
		virtual ~ShrubberyCreationForm(void);

		virtual void	execute(Bureaucrat const & executor) const;

	private :
		ShrubberyCreationForm & 	operator=(ShrubberyCreationForm const & rhs);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm(void);

};

std::ostream &		operator<<(std::ostream & o, ShrubberyCreationForm const &rhs);

#endif
