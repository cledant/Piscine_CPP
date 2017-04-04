/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 15:31:56 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 22:42:17 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>
# include <sstream>
# include <iomanip>

class Brain
{
	public :
		Brain(void);
		~Brain(void);
		std::string const &		identify(void) const;

	private :
		std::string		_str;
};

#endif
