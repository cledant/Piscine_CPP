/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Counter.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/03 15:38:01 by cledant           #+#    #+#             */
/*   Updated: 2017/04/03 16:34:31 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Counter.hpp"

namespace Counters {

Counter::Counter(int const max) : _cur_user(0), _max_user(0), _limit_user(max)
{
	return ;
}

Counter::~Counter(void)
{
	return ;
}

int		Counter::get_current_user(void) const
{
	return (this->_cur_user);
}

int		Counter::get_max_user(void) const
{
	return (this->_max_user);
}

void	Counter::increment_counters(void)
{
	if (this->_max_user < this->_limit_user)
		this->_max_user++;
	this->_cur_user++;
	if (this->_cur_user >= this->_limit_user)
		this->_cur_user = 0;
	return ;
}
}
