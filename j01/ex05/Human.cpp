/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 16:07:02 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 17:22:56 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
	return;
}

Human::~Human(void)
{
	return ;
}

Brain const &			Human::getBrain(void) const
{
	return (_brain);
}

std::string const &		Human::identify(void) const
{
	return (this->_brain.identify());
}
