/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/10 18:14:41 by cledant           #+#    #+#             */
/*   Updated: 2017/04/10 18:28:13 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public :

		RobotomyRequestForm(std::string name);
		virtual ~RobotomyRequestForm(void);

		virtual void	execute(Bureaucrat const & executor) const;

	private :
		RobotomyRequestForm & 	operator=(RobotomyRequestForm const & rhs);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm(void);

};

std::ostream &		operator<<(std::ostream & o, RobotomyRequestForm const &rhs);

#endif
