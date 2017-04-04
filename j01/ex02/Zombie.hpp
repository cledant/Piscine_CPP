/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cledant <cledant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 11:41:19 by cledant           #+#    #+#             */
/*   Updated: 2017/04/04 12:29:38 by cledant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public :
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void	announce(void) const;

	private :
		std::string		_name;
		std::string		_type;
};

#endif
