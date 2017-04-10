/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 16:02:30 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 17:40:29 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public :

		PresidentialPardonForm(std::string name);
		virtual ~PresidentialPardonForm(void);

		virtual void	execute(Bureaucrat const & executor) const;

	private :
		PresidentialPardonForm & 	operator=(PresidentialPardonForm const & rhs);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm(void);

};

std::ostream &		operator<<(std::ostream & o, PresidentialPardonForm const &rhs);

#endif
