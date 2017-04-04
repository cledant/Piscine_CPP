/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 15:36:49 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 17:22:53 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <string>
#include "Brain.hpp"

class Human
{
	public :
		Human(void);
		~Human(void);
		std::string const &		identify(void) const;
		Brain const &			getBrain(void) const;

	private :
		Brain const		_brain;
};

#endif
