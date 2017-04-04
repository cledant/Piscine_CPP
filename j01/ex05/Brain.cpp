/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 15:51:16 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 22:42:16 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::stringstream	ss;
	ss << std::showbase << std::internal << std::setfill('0') << std::hex << std::setw(8) << this;
	this->_str = ss.str();
}

Brain::~Brain(void)
{
	return ;
}

std::string const &		Brain::identify(void) const
{
	return (this->_str);
}
